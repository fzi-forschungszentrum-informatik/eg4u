// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/UObjectIterator.h"
#include "Engine/World.h"
#include "Components/SplineComponent.h"

#include "ThirdParty/libOpenDRIVE/include/Math.hpp"
#include "ThirdParty/libOpenDRIVE/include/OpenDriveMap.h"
#include "ThirdParty/libOpenDRIVE/include/Refline.h"
#include "ThirdParty/libOpenDRIVE/include/Road.h"

#include "OpenDRIVE_Generator.generated.h"

USTRUCT(BlueprintType)
struct EG4U_API FOpenDRIVE_Generator_Lane
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int id;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString type;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float s0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float length;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<float> width;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float max_width;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> centerline;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<float> inner_offset;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<float> outer_offset;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector2D> lane_pairing;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> lane_vertices;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int> lane_indices;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> marking_vertices;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int> marking_indices;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> nav_line;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> inner_border;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> outer_border;
};


USTRUCT(BlueprintType)
struct EG4U_API FOpenDRIVE_Generator_Road
{
	GENERATED_USTRUCT_BODY()
		
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int id;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float length;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString junction;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<float> lane_offset;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FVector2D connections;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FOpenDRIVE_Generator_Lane> lanes;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> object_vertices;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int> object_indices;
};


UCLASS()
class EG4U_API AOpenDRIVE_Generator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOpenDRIVE_Generator();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float step_size = 0.25f;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float x_offset;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float y_offset;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float border_height;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float marking_height;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FOpenDRIVE_Generator_Road> Roads;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = libOpenDRIVE)
	void ImportOpenDRIVE(float sample_rate, bool modify_eps, FVector center, float scale, bool flat, FString filename);
};
