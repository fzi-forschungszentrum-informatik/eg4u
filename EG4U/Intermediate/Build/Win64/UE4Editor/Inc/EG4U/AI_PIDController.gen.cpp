// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EG4U/Public/AI_PIDController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_PIDController() {}
// Cross Module References
	EG4U_API UScriptStruct* Z_Construct_UScriptStruct_FPID_FILTER();
	UPackage* Z_Construct_UPackage__Script_EG4U();
	EG4U_API UScriptStruct* Z_Construct_UScriptStruct_FPID_GAIN();
	EG4U_API UClass* Z_Construct_UClass_AAI_PIDController_NoRegister();
	EG4U_API UClass* Z_Construct_UClass_AAI_PIDController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
// End Cross Module References
class UScriptStruct* FPID_FILTER::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EG4U_API uint32 Get_Z_Construct_UScriptStruct_FPID_FILTER_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPID_FILTER, Z_Construct_UPackage__Script_EG4U(), TEXT("PID_FILTER"), sizeof(FPID_FILTER), Get_Z_Construct_UScriptStruct_FPID_FILTER_Hash());
	}
	return Singleton;
}
template<> EG4U_API UScriptStruct* StaticStruct<FPID_FILTER>()
{
	return FPID_FILTER::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPID_FILTER(FPID_FILTER::StaticStruct, TEXT("/Script/EG4U"), TEXT("PID_FILTER"), false, nullptr, nullptr);
static struct FScriptStruct_EG4U_StaticRegisterNativesFPID_FILTER
{
	FScriptStruct_EG4U_StaticRegisterNativesFPID_FILTER()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PID_FILTER")),new UScriptStruct::TCppStructOps<FPID_FILTER>);
	}
} ScriptStruct_EG4U_StaticRegisterNativesFPID_FILTER;
	struct Z_Construct_UScriptStruct_FPID_FILTER_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_window_size_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_window_size;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_window_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_window_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_window;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_values;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_filtered_values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filtered_values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_filtered_values;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_FILTER_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPID_FILTER>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_window_size_MetaData[] = {
		{ "Category", "PID_FILTER" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_window_size = { "window_size", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_FILTER, window_size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_window_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_window_size_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_m_window_Inner = { "m_window", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_m_window_MetaData[] = {
		{ "Category", "PID_FILTER" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_m_window = { "m_window", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_FILTER, m_window), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_m_window_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_m_window_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_values_Inner = { "values", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_values_MetaData[] = {
		{ "Category", "PID_FILTER" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_FILTER, values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_values_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_filtered_values_Inner = { "filtered_values", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_filtered_values_MetaData[] = {
		{ "Category", "PID_FILTER" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_filtered_values = { "filtered_values", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_FILTER, filtered_values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_filtered_values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_filtered_values_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPID_FILTER_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_window_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_m_window_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_m_window,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_filtered_values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_FILTER_Statics::NewProp_filtered_values,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPID_FILTER_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
		nullptr,
		&NewStructOps,
		"PID_FILTER",
		sizeof(FPID_FILTER),
		alignof(FPID_FILTER),
		Z_Construct_UScriptStruct_FPID_FILTER_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_FILTER_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_FILTER_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_FILTER_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPID_FILTER()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPID_FILTER_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PID_FILTER"), sizeof(FPID_FILTER), Get_Z_Construct_UScriptStruct_FPID_FILTER_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPID_FILTER_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPID_FILTER_Hash() { return 1053110094U; }
class UScriptStruct* FPID_GAIN::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EG4U_API uint32 Get_Z_Construct_UScriptStruct_FPID_GAIN_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPID_GAIN, Z_Construct_UPackage__Script_EG4U(), TEXT("PID_GAIN"), sizeof(FPID_GAIN), Get_Z_Construct_UScriptStruct_FPID_GAIN_Hash());
	}
	return Singleton;
}
template<> EG4U_API UScriptStruct* StaticStruct<FPID_GAIN>()
{
	return FPID_GAIN::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPID_GAIN(FPID_GAIN::StaticStruct, TEXT("/Script/EG4U"), TEXT("PID_GAIN"), false, nullptr, nullptr);
static struct FScriptStruct_EG4U_StaticRegisterNativesFPID_GAIN
{
	FScriptStruct_EG4U_StaticRegisterNativesFPID_GAIN()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PID_GAIN")),new UScriptStruct::TCppStructOps<FPID_GAIN>);
	}
} ScriptStruct_EG4U_StaticRegisterNativesFPID_GAIN;
	struct Z_Construct_UScriptStruct_FPID_GAIN_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_kp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_kp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ki_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ki;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_kd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_kd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_error_sum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_error_sum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_last_error_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_last_error;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_GAIN_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPID_GAIN>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_kp_MetaData[] = {
		{ "Category", "PID_GAIN" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_kp = { "kp", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_GAIN, kp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_kp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_kp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_ki_MetaData[] = {
		{ "Category", "PID_GAIN" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_ki = { "ki", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_GAIN, ki), METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_ki_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_ki_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_kd_MetaData[] = {
		{ "Category", "PID_GAIN" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_kd = { "kd", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_GAIN, kd), METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_kd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_kd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_dt_MetaData[] = {
		{ "Category", "PID_GAIN" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_GAIN, dt), METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_dt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_dt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_min_MetaData[] = {
		{ "Category", "PID_GAIN" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_GAIN, min), METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_max_MetaData[] = {
		{ "Category", "PID_GAIN" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_GAIN, max), METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_error_sum_MetaData[] = {
		{ "Category", "PID_GAIN" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_error_sum = { "error_sum", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_GAIN, error_sum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_error_sum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_error_sum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_last_error_MetaData[] = {
		{ "Category", "PID_GAIN" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_last_error = { "last_error", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPID_GAIN, last_error), METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_last_error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_last_error_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPID_GAIN_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_kp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_ki,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_kd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_dt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_error_sum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPID_GAIN_Statics::NewProp_last_error,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPID_GAIN_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
		nullptr,
		&NewStructOps,
		"PID_GAIN",
		sizeof(FPID_GAIN),
		alignof(FPID_GAIN),
		Z_Construct_UScriptStruct_FPID_GAIN_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_GAIN_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPID_GAIN_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPID_GAIN_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPID_GAIN()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPID_GAIN_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PID_GAIN"), sizeof(FPID_GAIN), Get_Z_Construct_UScriptStruct_FPID_GAIN_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPID_GAIN_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPID_GAIN_Hash() { return 2393969496U; }
	DEFINE_FUNCTION(AAI_PIDController::execUpdateSteering)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_current_angle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_target_angle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSteering(Z_Param_current_angle,Z_Param_target_angle,Z_Param_delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_PIDController::execUpdateAcceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_current_speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_target_speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAcceleration(Z_Param_current_speed,Z_Param_target_speed,Z_Param_delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_PIDController::execPID_Reset)
	{
		P_GET_STRUCT(FPID_GAIN,Z_Param_gain);
		P_GET_PROPERTY(FFloatProperty,Z_Param_last_error);
		P_GET_PROPERTY(FFloatProperty,Z_Param_error_sum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PID_Reset(Z_Param_gain,Z_Param_last_error,Z_Param_error_sum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_PIDController::execPID_Update)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_desired_value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_current_value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delta);
		P_GET_STRUCT(FPID_GAIN,Z_Param_gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PID_Update(Z_Param_desired_value,Z_Param_current_value,Z_Param_delta,Z_Param_gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_PIDController::execLowPassFilter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_STRUCT(FPID_FILTER,Z_Param_filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->LowPassFilter(Z_Param_value,Z_Param_filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_PIDController::execInitGainSteering)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_kp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ki);
		P_GET_PROPERTY(FFloatProperty,Z_Param_kd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
		P_GET_PROPERTY(FFloatProperty,Z_Param_min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_max);
		P_GET_PROPERTY(FFloatProperty,Z_Param_boost);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitGainSteering(Z_Param_kp,Z_Param_ki,Z_Param_kd,Z_Param_dt,Z_Param_min,Z_Param_max,Z_Param_boost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_PIDController::execInitGainAcceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_kp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ki);
		P_GET_PROPERTY(FFloatProperty,Z_Param_kd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_dt);
		P_GET_PROPERTY(FFloatProperty,Z_Param_min);
		P_GET_PROPERTY(FFloatProperty,Z_Param_max);
		P_GET_PROPERTY(FFloatProperty,Z_Param_boost);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitGainAcceleration(Z_Param_kp,Z_Param_ki,Z_Param_kd,Z_Param_dt,Z_Param_min,Z_Param_max,Z_Param_boost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_PIDController::execInitFilters)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_window_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitFilters(Z_Param_window_size);
		P_NATIVE_END;
	}
	void AAI_PIDController::StaticRegisterNativesAAI_PIDController()
	{
		UClass* Class = AAI_PIDController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitFilters", &AAI_PIDController::execInitFilters },
			{ "InitGainAcceleration", &AAI_PIDController::execInitGainAcceleration },
			{ "InitGainSteering", &AAI_PIDController::execInitGainSteering },
			{ "LowPassFilter", &AAI_PIDController::execLowPassFilter },
			{ "PID_Reset", &AAI_PIDController::execPID_Reset },
			{ "PID_Update", &AAI_PIDController::execPID_Update },
			{ "UpdateAcceleration", &AAI_PIDController::execUpdateAcceleration },
			{ "UpdateSteering", &AAI_PIDController::execUpdateSteering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics
	{
		struct AI_PIDController_eventInitFilters_Parms
		{
			int32 window_size;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_window_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics::NewProp_window_size = { "window_size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitFilters_Parms, window_size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics::NewProp_window_size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics::Function_MetaDataParams[] = {
		{ "Category", "DriveController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_PIDController, nullptr, "InitFilters", nullptr, nullptr, sizeof(AI_PIDController_eventInitFilters_Parms), Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_PIDController_InitFilters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_PIDController_InitFilters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics
	{
		struct AI_PIDController_eventInitGainAcceleration_Parms
		{
			float kp;
			float ki;
			float kd;
			float dt;
			float min;
			float max;
			float boost;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_kp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ki;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_kd;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_boost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_kp = { "kp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainAcceleration_Parms, kp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_ki = { "ki", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainAcceleration_Parms, ki), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_kd = { "kd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainAcceleration_Parms, kd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainAcceleration_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainAcceleration_Parms, min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainAcceleration_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_boost = { "boost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainAcceleration_Parms, boost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_kp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_ki,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_kd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_dt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::NewProp_boost,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "DriveController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_PIDController, nullptr, "InitGainAcceleration", nullptr, nullptr, sizeof(AI_PIDController_eventInitGainAcceleration_Parms), Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics
	{
		struct AI_PIDController_eventInitGainSteering_Parms
		{
			float kp;
			float ki;
			float kd;
			float dt;
			float min;
			float max;
			float boost;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_kp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ki;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_kd;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_min;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_boost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_kp = { "kp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainSteering_Parms, kp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_ki = { "ki", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainSteering_Parms, ki), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_kd = { "kd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainSteering_Parms, kd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainSteering_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainSteering_Parms, min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainSteering_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_boost = { "boost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventInitGainSteering_Parms, boost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_kp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_ki,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_kd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_dt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::NewProp_boost,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::Function_MetaDataParams[] = {
		{ "Category", "DriveController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_PIDController, nullptr, "InitGainSteering", nullptr, nullptr, sizeof(AI_PIDController_eventInitGainSteering_Parms), Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_PIDController_InitGainSteering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_PIDController_InitGainSteering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics
	{
		struct AI_PIDController_eventLowPassFilter_Parms
		{
			float value;
			FPID_FILTER filter;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_filter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventLowPassFilter_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::NewProp_filter = { "filter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventLowPassFilter_Parms, filter), Z_Construct_UScriptStruct_FPID_FILTER, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventLowPassFilter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::NewProp_filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "DriveController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_PIDController, nullptr, "LowPassFilter", nullptr, nullptr, sizeof(AI_PIDController_eventLowPassFilter_Parms), Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_PIDController_LowPassFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_PIDController_LowPassFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics
	{
		struct AI_PIDController_eventPID_Reset_Parms
		{
			FPID_GAIN gain;
			float last_error;
			float error_sum;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gain;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_last_error;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_error_sum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventPID_Reset_Parms, gain), Z_Construct_UScriptStruct_FPID_GAIN, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::NewProp_last_error = { "last_error", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventPID_Reset_Parms, last_error), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::NewProp_error_sum = { "error_sum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventPID_Reset_Parms, error_sum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::NewProp_gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::NewProp_last_error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::NewProp_error_sum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "DriveController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_PIDController, nullptr, "PID_Reset", nullptr, nullptr, sizeof(AI_PIDController_eventPID_Reset_Parms), Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_PIDController_PID_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_PIDController_PID_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics
	{
		struct AI_PIDController_eventPID_Update_Parms
		{
			float desired_value;
			float current_value;
			float delta;
			FPID_GAIN gain;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_desired_value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_current_value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delta;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gain;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::NewProp_desired_value = { "desired_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventPID_Update_Parms, desired_value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::NewProp_current_value = { "current_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventPID_Update_Parms, current_value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventPID_Update_Parms, delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventPID_Update_Parms, gain), Z_Construct_UScriptStruct_FPID_GAIN, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventPID_Update_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::NewProp_desired_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::NewProp_current_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::NewProp_delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::NewProp_gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "DriveController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_PIDController, nullptr, "PID_Update", nullptr, nullptr, sizeof(AI_PIDController_eventPID_Update_Parms), Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_PIDController_PID_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_PIDController_PID_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics
	{
		struct AI_PIDController_eventUpdateAcceleration_Parms
		{
			float current_speed;
			float target_speed;
			float delta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_current_speed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_target_speed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::NewProp_current_speed = { "current_speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventUpdateAcceleration_Parms, current_speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::NewProp_target_speed = { "target_speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventUpdateAcceleration_Parms, target_speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventUpdateAcceleration_Parms, delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::NewProp_current_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::NewProp_target_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::NewProp_delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "DriveController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_PIDController, nullptr, "UpdateAcceleration", nullptr, nullptr, sizeof(AI_PIDController_eventUpdateAcceleration_Parms), Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics
	{
		struct AI_PIDController_eventUpdateSteering_Parms
		{
			float current_angle;
			float target_angle;
			float delta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_current_angle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_target_angle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::NewProp_current_angle = { "current_angle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventUpdateSteering_Parms, current_angle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::NewProp_target_angle = { "target_angle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventUpdateSteering_Parms, target_angle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_PIDController_eventUpdateSteering_Parms, delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::NewProp_current_angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::NewProp_target_angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::NewProp_delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::Function_MetaDataParams[] = {
		{ "Category", "DriveController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_PIDController, nullptr, "UpdateSteering", nullptr, nullptr, sizeof(AI_PIDController_eventUpdateSteering_Parms), Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_PIDController_UpdateSteering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_PIDController_UpdateSteering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI_PIDController_NoRegister()
	{
		return AAI_PIDController::StaticClass();
	}
	struct Z_Construct_UClass_AAI_PIDController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_current_acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_current_acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_current_steering_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_current_steering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_braking_MetaData[];
#endif
		static void NewProp_braking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_braking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cruise_boost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cruise_boost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_steering_boost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_steering_boost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cruise_gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cruise_gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cruise_filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cruise_filter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_steering_gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steering_gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_steering_filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steering_filter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_PIDController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_PIDController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_PIDController_InitFilters, "InitFilters" }, // 1791641752
		{ &Z_Construct_UFunction_AAI_PIDController_InitGainAcceleration, "InitGainAcceleration" }, // 525201585
		{ &Z_Construct_UFunction_AAI_PIDController_InitGainSteering, "InitGainSteering" }, // 3613704630
		{ &Z_Construct_UFunction_AAI_PIDController_LowPassFilter, "LowPassFilter" }, // 4159857136
		{ &Z_Construct_UFunction_AAI_PIDController_PID_Reset, "PID_Reset" }, // 1421457921
		{ &Z_Construct_UFunction_AAI_PIDController_PID_Update, "PID_Update" }, // 3773363648
		{ &Z_Construct_UFunction_AAI_PIDController_UpdateAcceleration, "UpdateAcceleration" }, // 1819406625
		{ &Z_Construct_UFunction_AAI_PIDController_UpdateSteering, "UpdateSteering" }, // 1249011042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PIDController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_PIDController.h" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PIDController_Statics::NewProp_current_acceleration_MetaData[] = {
		{ "Category", "AI_PIDController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_PIDController_Statics::NewProp_current_acceleration = { "current_acceleration", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_PIDController, current_acceleration), METADATA_PARAMS(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_current_acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_current_acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PIDController_Statics::NewProp_current_steering_MetaData[] = {
		{ "Category", "AI_PIDController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_PIDController_Statics::NewProp_current_steering = { "current_steering", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_PIDController, current_steering), METADATA_PARAMS(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_current_steering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_current_steering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PIDController_Statics::NewProp_braking_MetaData[] = {
		{ "Category", "AI_PIDController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	void Z_Construct_UClass_AAI_PIDController_Statics::NewProp_braking_SetBit(void* Obj)
	{
		((AAI_PIDController*)Obj)->braking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAI_PIDController_Statics::NewProp_braking = { "braking", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAI_PIDController), &Z_Construct_UClass_AAI_PIDController_Statics::NewProp_braking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_braking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_braking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_boost_MetaData[] = {
		{ "Category", "AI_PIDController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_boost = { "cruise_boost", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_PIDController, cruise_boost), METADATA_PARAMS(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_boost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_boost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_boost_MetaData[] = {
		{ "Category", "AI_PIDController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_boost = { "steering_boost", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_PIDController, steering_boost), METADATA_PARAMS(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_boost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_boost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_gain_MetaData[] = {
		{ "Category", "AI_PIDController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_gain = { "cruise_gain", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_PIDController, cruise_gain), Z_Construct_UScriptStruct_FPID_GAIN, METADATA_PARAMS(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_filter_MetaData[] = {
		{ "Category", "AI_PIDController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_filter = { "cruise_filter", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_PIDController, cruise_filter), Z_Construct_UScriptStruct_FPID_FILTER, METADATA_PARAMS(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_filter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_gain_MetaData[] = {
		{ "Category", "AI_PIDController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_gain = { "steering_gain", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_PIDController, steering_gain), Z_Construct_UScriptStruct_FPID_GAIN, METADATA_PARAMS(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_filter_MetaData[] = {
		{ "Category", "AI_PIDController" },
		{ "ModuleRelativePath", "Public/AI_PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_filter = { "steering_filter", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_PIDController, steering_filter), Z_Construct_UScriptStruct_FPID_FILTER, METADATA_PARAMS(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_filter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_PIDController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_PIDController_Statics::NewProp_current_acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_PIDController_Statics::NewProp_current_steering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_PIDController_Statics::NewProp_braking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_boost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_boost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_PIDController_Statics::NewProp_cruise_filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_PIDController_Statics::NewProp_steering_filter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_PIDController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_PIDController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_PIDController_Statics::ClassParams = {
		&AAI_PIDController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI_PIDController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_PIDController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PIDController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_PIDController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_PIDController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_PIDController, 3563275295);
	template<> EG4U_API UClass* StaticClass<AAI_PIDController>()
	{
		return AAI_PIDController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_PIDController(Z_Construct_UClass_AAI_PIDController, &AAI_PIDController::StaticClass, TEXT("/Script/EG4U"), TEXT("AAI_PIDController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_PIDController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
