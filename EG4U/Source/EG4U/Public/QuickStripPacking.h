// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include <iostream>
#include <vector>
#include <algorithm>

#include "QuickStripPacking.generated.h"


USTRUCT(BlueprintType)
struct EG4U_API FQuickStripPacking_Item
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int id;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float width;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EG4U_API UQuickStripPacking : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UQuickStripPacking();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FQuickStripPacking_Item> items_in;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FQuickStripPacking_Item> items_out; 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float m_strip_width;

	std::vector<FQuickStripPacking_Item> m_items;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	float QuickStripPack(std::vector<FQuickStripPacking_Item> items, float strip_width);

	float QuickStripPackRecursive(std::vector<FQuickStripPacking_Item> items, float strip_width);

	UFUNCTION(BlueprintCallable, Category = StripPacking)
	float QuickStripPackRuntime(float strip_width);
};
