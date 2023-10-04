// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "AI_PIDController.generated.h"


USTRUCT(BlueprintType)
struct EG4U_API FPID_GAIN
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float kp;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float ki;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float kd;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float dt;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float min;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float max;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float error_sum;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float last_error;
};

USTRUCT(BlueprintType)
struct EG4U_API FPID_FILTER
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int window_size;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<float> m_window;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<float> values;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<float> filtered_values;
};


UCLASS()
class EG4U_API AAI_PIDController : public AAIController
{
	GENERATED_BODY()

public:
	AAI_PIDController();

	UFUNCTION(BlueprintCallable, Category = DriveController)
	void InitFilters(int window_size);

	UFUNCTION(BlueprintCallable, Category = DriveController)
	void InitGainAcceleration(float kp, float ki, float kd, float dt, float min, float max, float boost);

	UFUNCTION(BlueprintCallable, Category = DriveController)
	void InitGainSteering(float kp, float ki, float kd, float dt, float min, float max, float boost);

	UFUNCTION(BlueprintCallable, Category = DriveController)
	float LowPassFilter(float value, FPID_FILTER filter);

	UFUNCTION(BlueprintCallable, Category = DriveController)
	float PID_Update(float desired_value, float current_value, float delta, FPID_GAIN gain);

	UFUNCTION(BlueprintCallable, Category = DriveController)
	void PID_Reset(FPID_GAIN gain, float last_error, float error_sum);

	UFUNCTION(BlueprintCallable, Category = DriveController)
	void UpdateAcceleration(float current_speed, float target_speed, float delta);

	UFUNCTION(BlueprintCallable, Category = DriveController)
	void UpdateSteering(float current_angle, float target_angle, float delta);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float current_acceleration;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float current_steering;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool braking;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float cruise_boost;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float steering_boost;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FPID_GAIN cruise_gain;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FPID_FILTER cruise_filter;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FPID_GAIN steering_gain;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FPID_FILTER steering_filter;

};
