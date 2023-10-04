// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EG4U/Public/QuickStripPacking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickStripPacking() {}
// Cross Module References
	EG4U_API UScriptStruct* Z_Construct_UScriptStruct_FQuickStripPacking_Item();
	UPackage* Z_Construct_UPackage__Script_EG4U();
	EG4U_API UClass* Z_Construct_UClass_UQuickStripPacking_NoRegister();
	EG4U_API UClass* Z_Construct_UClass_UQuickStripPacking();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FQuickStripPacking_Item::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EG4U_API uint32 Get_Z_Construct_UScriptStruct_FQuickStripPacking_Item_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuickStripPacking_Item, Z_Construct_UPackage__Script_EG4U(), TEXT("QuickStripPacking_Item"), sizeof(FQuickStripPacking_Item), Get_Z_Construct_UScriptStruct_FQuickStripPacking_Item_Hash());
	}
	return Singleton;
}
template<> EG4U_API UScriptStruct* StaticStruct<FQuickStripPacking_Item>()
{
	return FQuickStripPacking_Item::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuickStripPacking_Item(FQuickStripPacking_Item::StaticStruct, TEXT("/Script/EG4U"), TEXT("QuickStripPacking_Item"), false, nullptr, nullptr);
static struct FScriptStruct_EG4U_StaticRegisterNativesFQuickStripPacking_Item
{
	FScriptStruct_EG4U_StaticRegisterNativesFQuickStripPacking_Item()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuickStripPacking_Item")),new UScriptStruct::TCppStructOps<FQuickStripPacking_Item>);
	}
} ScriptStruct_EG4U_StaticRegisterNativesFQuickStripPacking_Item;
	struct Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuickStripPacking.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuickStripPacking_Item>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewProp_id_MetaData[] = {
		{ "Category", "QuickStripPacking_Item" },
		{ "ModuleRelativePath", "Public/QuickStripPacking.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuickStripPacking_Item, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewProp_width_MetaData[] = {
		{ "Category", "QuickStripPacking_Item" },
		{ "ModuleRelativePath", "Public/QuickStripPacking.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuickStripPacking_Item, width), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewProp_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewProp_width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::NewProp_width,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
		nullptr,
		&NewStructOps,
		"QuickStripPacking_Item",
		sizeof(FQuickStripPacking_Item),
		alignof(FQuickStripPacking_Item),
		Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuickStripPacking_Item()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuickStripPacking_Item_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuickStripPacking_Item"), sizeof(FQuickStripPacking_Item), Get_Z_Construct_UScriptStruct_FQuickStripPacking_Item_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuickStripPacking_Item_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuickStripPacking_Item_Hash() { return 3076930083U; }
	DEFINE_FUNCTION(UQuickStripPacking::execQuickStripPackRuntime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_strip_width);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->QuickStripPackRuntime(Z_Param_strip_width);
		P_NATIVE_END;
	}
	void UQuickStripPacking::StaticRegisterNativesUQuickStripPacking()
	{
		UClass* Class = UQuickStripPacking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QuickStripPackRuntime", &UQuickStripPacking::execQuickStripPackRuntime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics
	{
		struct QuickStripPacking_eventQuickStripPackRuntime_Parms
		{
			float strip_width;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strip_width;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::NewProp_strip_width = { "strip_width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuickStripPacking_eventQuickStripPackRuntime_Parms, strip_width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuickStripPacking_eventQuickStripPackRuntime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::NewProp_strip_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::Function_MetaDataParams[] = {
		{ "Category", "StripPacking" },
		{ "ModuleRelativePath", "Public/QuickStripPacking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickStripPacking, nullptr, "QuickStripPackRuntime", nullptr, nullptr, sizeof(QuickStripPacking_eventQuickStripPackRuntime_Parms), Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuickStripPacking_NoRegister()
	{
		return UQuickStripPacking::StaticClass();
	}
	struct Z_Construct_UClass_UQuickStripPacking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_items_in_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_items_in_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items_in;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_items_out_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_items_out_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items_out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strip_width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_strip_width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuickStripPacking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuickStripPacking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuickStripPacking_QuickStripPackRuntime, "QuickStripPackRuntime" }, // 3906909035
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickStripPacking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuickStripPacking.h" },
		{ "ModuleRelativePath", "Public/QuickStripPacking.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_in_Inner = { "items_in", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuickStripPacking_Item, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_in_MetaData[] = {
		{ "Category", "QuickStripPacking" },
		{ "ModuleRelativePath", "Public/QuickStripPacking.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_in = { "items_in", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuickStripPacking, items_in), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_in_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_in_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_out_Inner = { "items_out", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuickStripPacking_Item, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_out_MetaData[] = {
		{ "Category", "QuickStripPacking" },
		{ "ModuleRelativePath", "Public/QuickStripPacking.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_out = { "items_out", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuickStripPacking, items_out), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_out_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_out_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_m_strip_width_MetaData[] = {
		{ "Category", "QuickStripPacking" },
		{ "ModuleRelativePath", "Public/QuickStripPacking.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_m_strip_width = { "m_strip_width", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuickStripPacking, m_strip_width), METADATA_PARAMS(Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_m_strip_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_m_strip_width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuickStripPacking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_in_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_in,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_items_out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickStripPacking_Statics::NewProp_m_strip_width,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuickStripPacking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickStripPacking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuickStripPacking_Statics::ClassParams = {
		&UQuickStripPacking::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuickStripPacking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuickStripPacking_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuickStripPacking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuickStripPacking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuickStripPacking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuickStripPacking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuickStripPacking, 2823019085);
	template<> EG4U_API UClass* StaticClass<UQuickStripPacking>()
	{
		return UQuickStripPacking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuickStripPacking(Z_Construct_UClass_UQuickStripPacking, &UQuickStripPacking::StaticClass, TEXT("/Script/EG4U"), TEXT("UQuickStripPacking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickStripPacking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
