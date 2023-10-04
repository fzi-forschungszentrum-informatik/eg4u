// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EG4U/Public/EG4U.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEG4U() {}
// Cross Module References
	EG4U_API UClass* Z_Construct_UClass_UEG4U_NoRegister();
	EG4U_API UClass* Z_Construct_UClass_UEG4U();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EG4U();
// End Cross Module References
	void UEG4U::StaticRegisterNativesUEG4U()
	{
	}
	UClass* Z_Construct_UClass_UEG4U_NoRegister()
	{
		return UEG4U::StaticClass();
	}
	struct Z_Construct_UClass_UEG4U_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEG4U_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEG4U_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EG4U.h" },
		{ "ModuleRelativePath", "Public/EG4U.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEG4U_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEG4U>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEG4U_Statics::ClassParams = {
		&UEG4U::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEG4U_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEG4U_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEG4U()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEG4U_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEG4U, 3752810811);
	template<> EG4U_API UClass* StaticClass<UEG4U>()
	{
		return UEG4U::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEG4U(Z_Construct_UClass_UEG4U, &UEG4U::StaticClass, TEXT("/Script/EG4U"), TEXT("UEG4U"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEG4U);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
