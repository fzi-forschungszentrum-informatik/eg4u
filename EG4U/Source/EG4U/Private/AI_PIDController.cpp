// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#include "AI_PIDController.h"

AAI_PIDController::AAI_PIDController()
{
}

void AAI_PIDController::InitFilters(int window_size)
{
	cruise_filter.window_size = window_size;
	steering_filter.window_size = window_size;
}

float AAI_PIDController::LowPassFilter(float value, FPID_FILTER filter)
{
	filter.m_window.Add(value);
	if (filter.m_window.Num() > filter.window_size)
	{
		filter.m_window.RemoveAt(0);
	}
	float sum = 0.f;
	for (const auto& val : filter.m_window)
		sum += val;
	return sum / filter.m_window.Num();
}

void AAI_PIDController::InitGainAcceleration(float kp, float ki, float kd, float dt, float min, float max, float boost)
{
	cruise_gain.kp = kp;
	cruise_gain.ki = ki;
	cruise_gain.kd = kd;
	cruise_gain.dt = dt;
	cruise_gain.min = min;
	cruise_gain.max = max;
	cruise_boost = boost;
}

void AAI_PIDController::InitGainSteering(float kp, float ki, float kd, float dt, float min, float max, float boost)
{
	steering_gain.kp = kp;
	steering_gain.ki = ki;
	steering_gain.kd = kd;
	steering_gain.dt = dt;
	steering_gain.min = min;
	steering_gain.max = max;
	steering_boost = boost;
}


float AAI_PIDController::PID_Update(float desired_value, float current_value, float delta, FPID_GAIN gain)
{
	float output = 0.f;

	float error = desired_value - current_value;
	output += gain.kp * error;

	gain.error_sum += error * delta;
	output += gain.ki * gain.error_sum;

	float error_diff = (error - gain.last_error) / delta;
	output += gain.kd * error_diff;
	gain.last_error = error;

	return FMath::Clamp(output, gain.min, gain.max);
}

void AAI_PIDController::PID_Reset(FPID_GAIN gain, float last_error, float error_sum)
{
	gain.last_error = last_error;
	gain.error_sum = error_sum;
}

void AAI_PIDController::UpdateAcceleration(float current_speed, float target_speed, float delta)
{
	float speed_input = PID_Update(target_speed, current_speed, delta, cruise_gain);
	LowPassFilter(speed_input, cruise_filter);
	current_acceleration += speed_input * cruise_boost;
	
	braking = (current_acceleration < 0);
}

void AAI_PIDController::UpdateSteering(float current_angle, float target_angle, float delta)
{
	float steer_input = PID_Update(target_angle, current_angle, delta, steering_gain);
	LowPassFilter(steer_input, steering_filter);
	current_steering += steer_input * steering_boost;
}