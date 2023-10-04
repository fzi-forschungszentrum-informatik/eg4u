// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EG4U/OpenStreetMap_Generator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenStreetMap_Generator() {}
// Cross Module References
	EG4U_API UEnum* Z_Construct_UEnum_EG4U_EOpenStreetMap_RoofType();
	UPackage* Z_Construct_UPackage__Script_EG4U();
	EG4U_API UScriptStruct* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation();
	EG4U_API UScriptStruct* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member();
	EG4U_API UScriptStruct* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EG4U_API UScriptStruct* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node();
	EG4U_API UScriptStruct* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EG4U_API UClass* Z_Construct_UClass_AOpenStreetMap_Generator_NoRegister();
	EG4U_API UClass* Z_Construct_UClass_AOpenStreetMap_Generator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* EOpenStreetMap_RoofType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EG4U_EOpenStreetMap_RoofType, Z_Construct_UPackage__Script_EG4U(), TEXT("EOpenStreetMap_RoofType"));
		}
		return Singleton;
	}
	template<> EG4U_API UEnum* StaticEnum<EOpenStreetMap_RoofType>()
	{
		return EOpenStreetMap_RoofType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOpenStreetMap_RoofType(EOpenStreetMap_RoofType_StaticEnum, TEXT("/Script/EG4U"), TEXT("EOpenStreetMap_RoofType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EG4U_EOpenStreetMap_RoofType_Hash() { return 3222062344U; }
	UEnum* Z_Construct_UEnum_EG4U_EOpenStreetMap_RoofType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOpenStreetMap_RoofType"), 0, Get_Z_Construct_UEnum_EG4U_EOpenStreetMap_RoofType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Flat", (int64)Flat },
				{ "Gabled", (int64)Gabled },
				{ "Hipped", (int64)Hipped },
				{ "Pyramidal", (int64)Pyramidal },
				{ "Sawtooth", (int64)Sawtooth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Flat.Name", "Flat" },
				{ "Gabled.Name", "Gabled" },
				{ "Hipped.Name", "Hipped" },
				{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
				{ "Pyramidal.Name", "Pyramidal" },
				{ "Sawtooth.Name", "Sawtooth" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EG4U,
				nullptr,
				"EOpenStreetMap_RoofType",
				"EOpenStreetMap_RoofType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FOpenStreetMap_Generator_Relation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EG4U_API uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation, Z_Construct_UPackage__Script_EG4U(), TEXT("OpenStreetMap_Generator_Relation"), sizeof(FOpenStreetMap_Generator_Relation), Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Hash());
	}
	return Singleton;
}
template<> EG4U_API UScriptStruct* StaticStruct<FOpenStreetMap_Generator_Relation>()
{
	return FOpenStreetMap_Generator_Relation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenStreetMap_Generator_Relation(FOpenStreetMap_Generator_Relation::StaticStruct, TEXT("/Script/EG4U"), TEXT("OpenStreetMap_Generator_Relation"), false, nullptr, nullptr);
static struct FScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Relation
{
	FScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Relation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OpenStreetMap_Generator_Relation")),new UScriptStruct::TCppStructOps<FOpenStreetMap_Generator_Relation>);
	}
} ScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Relation;
	struct Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_members;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tags_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tags_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenStreetMap_Generator_Relation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_id_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Relation" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Relation, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_members_Inner = { "members", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_members_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Relation" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_members = { "members", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Relation, members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_members_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_tags_ValueProp = { "tags", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_tags_Key_KeyProp = { "tags_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_tags_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Relation" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Relation, tags), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_tags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_tags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::NewProp_tags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
		nullptr,
		&NewStructOps,
		"OpenStreetMap_Generator_Relation",
		sizeof(FOpenStreetMap_Generator_Relation),
		alignof(FOpenStreetMap_Generator_Relation),
		Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenStreetMap_Generator_Relation"), sizeof(FOpenStreetMap_Generator_Relation), Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Hash() { return 4169753392U; }
class UScriptStruct* FOpenStreetMap_Generator_Member::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EG4U_API uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member, Z_Construct_UPackage__Script_EG4U(), TEXT("OpenStreetMap_Generator_Member"), sizeof(FOpenStreetMap_Generator_Member), Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Hash());
	}
	return Singleton;
}
template<> EG4U_API UScriptStruct* StaticStruct<FOpenStreetMap_Generator_Member>()
{
	return FOpenStreetMap_Generator_Member::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenStreetMap_Generator_Member(FOpenStreetMap_Generator_Member::StaticStruct, TEXT("/Script/EG4U"), TEXT("OpenStreetMap_Generator_Member"), false, nullptr, nullptr);
static struct FScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Member
{
	FScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Member()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OpenStreetMap_Generator_Member")),new UScriptStruct::TCppStructOps<FOpenStreetMap_Generator_Member>);
	}
} ScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Member;
	struct Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ref_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ref;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_role_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenStreetMap_Generator_Member>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_type_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Member" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Member, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_ref_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Member" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_ref = { "ref", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Member, ref), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_ref_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_role_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Member" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Member, role), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_role_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::NewProp_role,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
		nullptr,
		&NewStructOps,
		"OpenStreetMap_Generator_Member",
		sizeof(FOpenStreetMap_Generator_Member),
		alignof(FOpenStreetMap_Generator_Member),
		Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenStreetMap_Generator_Member"), sizeof(FOpenStreetMap_Generator_Member), Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Hash() { return 205083441U; }
class UScriptStruct* FOpenStreetMap_Generator_Way::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EG4U_API uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way, Z_Construct_UPackage__Script_EG4U(), TEXT("OpenStreetMap_Generator_Way"), sizeof(FOpenStreetMap_Generator_Way), Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Hash());
	}
	return Singleton;
}
template<> EG4U_API UScriptStruct* StaticStruct<FOpenStreetMap_Generator_Way>()
{
	return FOpenStreetMap_Generator_Way::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenStreetMap_Generator_Way(FOpenStreetMap_Generator_Way::StaticStruct, TEXT("/Script/EG4U"), TEXT("OpenStreetMap_Generator_Way"), false, nullptr, nullptr);
static struct FScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Way
{
	FScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Way()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OpenStreetMap_Generator_Way")),new UScriptStruct::TCppStructOps<FOpenStreetMap_Generator_Way>);
	}
} ScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Way;
	struct Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nd_ref_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nd_ref_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nd_ref;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tags_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tags_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_tags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ref_line_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ref_line_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ref_line;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_connections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_connections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_connections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenStreetMap_Generator_Way>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_id_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Way" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Way, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_nd_ref_Inner = { "nd_ref", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_nd_ref_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Way" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_nd_ref = { "nd_ref", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Way, nd_ref), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_nd_ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_nd_ref_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_tags_ValueProp = { "tags", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_tags_Key_KeyProp = { "tags_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_tags_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Way" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Way, tags), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_tags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_ref_line_Inner = { "ref_line", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_ref_line_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Way" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_ref_line = { "ref_line", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Way, ref_line), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_ref_line_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_ref_line_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_connections_Inner = { "connections", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_connections_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Way" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_connections = { "connections", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Way, connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_connections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_nd_ref_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_nd_ref,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_tags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_tags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_ref_line_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_ref_line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_connections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::NewProp_connections,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
		nullptr,
		&NewStructOps,
		"OpenStreetMap_Generator_Way",
		sizeof(FOpenStreetMap_Generator_Way),
		alignof(FOpenStreetMap_Generator_Way),
		Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenStreetMap_Generator_Way"), sizeof(FOpenStreetMap_Generator_Way), Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Hash() { return 1808363141U; }
class UScriptStruct* FOpenStreetMap_Generator_Node::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EG4U_API uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node, Z_Construct_UPackage__Script_EG4U(), TEXT("OpenStreetMap_Generator_Node"), sizeof(FOpenStreetMap_Generator_Node), Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Hash());
	}
	return Singleton;
}
template<> EG4U_API UScriptStruct* StaticStruct<FOpenStreetMap_Generator_Node>()
{
	return FOpenStreetMap_Generator_Node::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenStreetMap_Generator_Node(FOpenStreetMap_Generator_Node::StaticStruct, TEXT("/Script/EG4U"), TEXT("OpenStreetMap_Generator_Node"), false, nullptr, nullptr);
static struct FScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Node
{
	FScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Node()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OpenStreetMap_Generator_Node")),new UScriptStruct::TCppStructOps<FOpenStreetMap_Generator_Node>);
	}
} ScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_Node;
	struct Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_coord;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tags_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tags_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_tags;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_connections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_connections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_connections;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_connection_start_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_connection_start_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_connection_start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenStreetMap_Generator_Node>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_id_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Node" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Node, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_coord_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Node" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_coord = { "coord", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Node, coord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_coord_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_tags_ValueProp = { "tags", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_tags_Key_KeyProp = { "tags_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_tags_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Node" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Node, tags), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_tags_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connections_Inner = { "connections", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connections_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Node" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connections = { "connections", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Node, connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connections_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connection_start_Inner = { "connection_start", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connection_start_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_Node" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connection_start = { "connection_start", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_Node, connection_start), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connection_start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connection_start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_coord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_tags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_tags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connection_start_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::NewProp_connection_start,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
		nullptr,
		&NewStructOps,
		"OpenStreetMap_Generator_Node",
		sizeof(FOpenStreetMap_Generator_Node),
		alignof(FOpenStreetMap_Generator_Node),
		Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenStreetMap_Generator_Node"), sizeof(FOpenStreetMap_Generator_Node), Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Hash() { return 1297756845U; }
class UScriptStruct* FOpenStreetMap_Generator_MeshInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EG4U_API uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo, Z_Construct_UPackage__Script_EG4U(), TEXT("OpenStreetMap_Generator_MeshInfo"), sizeof(FOpenStreetMap_Generator_MeshInfo), Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Hash());
	}
	return Singleton;
}
template<> EG4U_API UScriptStruct* StaticStruct<FOpenStreetMap_Generator_MeshInfo>()
{
	return FOpenStreetMap_Generator_MeshInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo(FOpenStreetMap_Generator_MeshInfo::StaticStruct, TEXT("/Script/EG4U"), TEXT("OpenStreetMap_Generator_MeshInfo"), false, nullptr, nullptr);
static struct FScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_MeshInfo
{
	FScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_MeshInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OpenStreetMap_Generator_MeshInfo")),new UScriptStruct::TCppStructOps<FOpenStreetMap_Generator_MeshInfo>);
	}
} ScriptStruct_EG4U_StaticRegisterNativesFOpenStreetMap_Generator_MeshInfo;
	struct Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vertices;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_uv_coords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uv_coords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_uv_coords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenStreetMap_Generator_MeshInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_vertices_Inner = { "vertices", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_vertices_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_MeshInfo" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_vertices = { "vertices", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_MeshInfo, vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_vertices_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_triangles_Inner = { "triangles", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_triangles_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_MeshInfo" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_triangles = { "triangles", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_MeshInfo, triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_uv_coords_Inner = { "uv_coords", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_uv_coords_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator_MeshInfo" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_uv_coords = { "uv_coords", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenStreetMap_Generator_MeshInfo, uv_coords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_uv_coords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_uv_coords_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_uv_coords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::NewProp_uv_coords,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
		nullptr,
		&NewStructOps,
		"OpenStreetMap_Generator_MeshInfo",
		sizeof(FOpenStreetMap_Generator_MeshInfo),
		alignof(FOpenStreetMap_Generator_MeshInfo),
		Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenStreetMap_Generator_MeshInfo"), sizeof(FOpenStreetMap_Generator_MeshInfo), Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Hash() { return 1620636292U; }
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execOutWindsClockwise)
	{
		P_GET_TARRAY(FVector,Z_Param_Polygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=AOpenStreetMap_Generator::OutWindsClockwise(Z_Param_Polygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execTriangulatePolygonInPlace)
	{
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Polygon);
		P_GET_TARRAY_REF(int32,Z_Param_Out_TempIndices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_TriangulatedIndices);
		P_GET_UBOOL_REF(Z_Param_Out_OutWindsClockwise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=AOpenStreetMap_Generator::TriangulatePolygonInPlace(Z_Param_Out_Polygon,Z_Param_Out_TempIndices,Z_Param_Out_TriangulatedIndices,Z_Param_Out_OutWindsClockwise);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execGenerateBuilding)
	{
		P_GET_TARRAY(FVector,Z_Param_footprint);
		P_GET_TMAP(FString,FString,Z_Param_osm_tags);
		P_GET_PROPERTY(FIntProperty,Z_Param_default_levels);
		P_GET_PROPERTY(FByteProperty,Z_Param_roof_type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_roof_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOpenStreetMap_Generator_MeshInfo*)Z_Param__Result=P_THIS->GenerateBuilding(Z_Param_footprint,Z_Param_osm_tags,Z_Param_default_levels,EOpenStreetMap_RoofType(Z_Param_roof_type),Z_Param_roof_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execGenerateRoof)
	{
		P_GET_TARRAY(FVector,Z_Param_footprint);
		P_GET_TMAP(FString,FString,Z_Param_osm_tags);
		P_GET_PROPERTY(FByteProperty,Z_Param_roof_type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_roof_height);
		P_GET_PROPERTY(FFloatProperty,Z_Param_roof_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOpenStreetMap_Generator_MeshInfo*)Z_Param__Result=P_THIS->GenerateRoof(Z_Param_footprint,Z_Param_osm_tags,EOpenStreetMap_RoofType(Z_Param_roof_type),Z_Param_roof_height,Z_Param_roof_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execGenerateSurfaces)
	{
		P_GET_TARRAY(FVector,Z_Param_area);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOpenStreetMap_Generator_MeshInfo*)Z_Param__Result=P_THIS->GenerateSurfaces(Z_Param_area);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execGenerateSidewalks)
	{
		P_GET_TARRAY(FVector,Z_Param_ref_line);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOpenStreetMap_Generator_MeshInfo*)Z_Param__Result=P_THIS->GenerateSidewalks(Z_Param_ref_line);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execFindEnclosedAreaPolygons)
	{
		P_GET_STRUCT(FOpenStreetMap_Generator_Way,Z_Param_startRoad);
		P_GET_TARRAY(FOpenStreetMap_Generator_Way,Z_Param_roads);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOpenStreetMap_Generator_MeshInfo>*)Z_Param__Result=P_THIS->FindEnclosedAreaPolygons(Z_Param_startRoad,Z_Param_roads);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execGenerateRoadUVs)
	{
		P_GET_STRUCT(FVector,Z_Param_road_start);
		P_GET_STRUCT(FVector,Z_Param_road_end);
		P_GET_STRUCT(FVector,Z_Param_width);
		P_GET_TARRAY(FVector,Z_Param_vertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=P_THIS->GenerateRoadUVs(Z_Param_road_start,Z_Param_road_end,Z_Param_width,Z_Param_vertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execGenerateOSMRoad)
	{
		P_GET_TARRAY(FVector,Z_Param_ref_line);
		P_GET_TMAP(FString,FString,Z_Param_osm_tags);
		P_GET_PROPERTY(FIntProperty,Z_Param_lane_number);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lane_width);
		P_GET_PROPERTY(FFloatProperty,Z_Param_sidewalkWidth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_sidewalkHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOpenStreetMap_Generator_MeshInfo*)Z_Param__Result=P_THIS->GenerateOSMRoad(Z_Param_ref_line,Z_Param_osm_tags,Z_Param_lane_number,Z_Param_lane_width,Z_Param_sidewalkWidth,Z_Param_sidewalkHeight,Z_Param_resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execRefineRoadSegments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefineRoadSegments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execConnectSharedNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectSharedNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execInsertNodesBetweenSharedAndNearest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertNodesBetweenSharedAndNearest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execFindSharedNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->FindSharedNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execImportOpenStreetMap)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_sample_rate);
		P_GET_UBOOL(Z_Param_modify_eps);
		P_GET_STRUCT(FVector,Z_Param_center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_UBOOL(Z_Param_flat);
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportOpenStreetMap(Z_Param_sample_rate,Z_Param_modify_eps,Z_Param_center,Z_Param_scale,Z_Param_flat,Z_Param_filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execMakeStaticMesh)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProcMesh);
		P_GET_PROPERTY(FStrProperty,Z_Param_PathName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->MakeStaticMesh(Z_Param_ProcMesh,Z_Param_PathName,Z_Param_AssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execGenerateArcPoints)
	{
		P_GET_STRUCT(FVector,Z_Param_PointA);
		P_GET_STRUCT(FVector,Z_Param_PointB);
		P_GET_STRUCT(FVector,Z_Param_ArcDirection);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GenerateArcPoints(Z_Param_PointA,Z_Param_PointB,Z_Param_ArcDirection,Z_Param_NumPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execCatmullRomSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_t);
		P_GET_STRUCT(FVector,Z_Param_P0);
		P_GET_STRUCT(FVector,Z_Param_P1);
		P_GET_STRUCT(FVector,Z_Param_P2);
		P_GET_STRUCT(FVector,Z_Param_P3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CatmullRomSpline(Z_Param_t,Z_Param_P0,Z_Param_P1,Z_Param_P2,Z_Param_P3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execOffsetPolygon)
	{
		P_GET_TARRAY(FVector,Z_Param_poly);
		P_GET_PROPERTY(FFloatProperty,Z_Param_offset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->OffsetPolygon(Z_Param_poly,Z_Param_offset,Z_Param_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execScalePolygon)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_polygon);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_STRUCT(FVector,Z_Param_pivot);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->ScalePolygon(Z_Param_Out_polygon,Z_Param_scale,Z_Param_pivot,Z_Param_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execGetCentroid)
	{
		P_GET_TARRAY(FVector,Z_Param_poly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetCentroid(Z_Param_poly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenStreetMap_Generator::execClearOpenStreetMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearOpenStreetMap();
		P_NATIVE_END;
	}
	void AOpenStreetMap_Generator::StaticRegisterNativesAOpenStreetMap_Generator()
	{
		UClass* Class = AOpenStreetMap_Generator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CatmullRomSpline", &AOpenStreetMap_Generator::execCatmullRomSpline },
			{ "ClearOpenStreetMap", &AOpenStreetMap_Generator::execClearOpenStreetMap },
			{ "ConnectSharedNodes", &AOpenStreetMap_Generator::execConnectSharedNodes },
			{ "FindEnclosedAreaPolygons", &AOpenStreetMap_Generator::execFindEnclosedAreaPolygons },
			{ "FindSharedNodes", &AOpenStreetMap_Generator::execFindSharedNodes },
			{ "GenerateArcPoints", &AOpenStreetMap_Generator::execGenerateArcPoints },
			{ "GenerateBuilding", &AOpenStreetMap_Generator::execGenerateBuilding },
			{ "GenerateOSMRoad", &AOpenStreetMap_Generator::execGenerateOSMRoad },
			{ "GenerateRoadUVs", &AOpenStreetMap_Generator::execGenerateRoadUVs },
			{ "GenerateRoof", &AOpenStreetMap_Generator::execGenerateRoof },
			{ "GenerateSidewalks", &AOpenStreetMap_Generator::execGenerateSidewalks },
			{ "GenerateSurfaces", &AOpenStreetMap_Generator::execGenerateSurfaces },
			{ "GetCentroid", &AOpenStreetMap_Generator::execGetCentroid },
			{ "ImportOpenStreetMap", &AOpenStreetMap_Generator::execImportOpenStreetMap },
			{ "InsertNodesBetweenSharedAndNearest", &AOpenStreetMap_Generator::execInsertNodesBetweenSharedAndNearest },
			{ "MakeStaticMesh", &AOpenStreetMap_Generator::execMakeStaticMesh },
			{ "OffsetPolygon", &AOpenStreetMap_Generator::execOffsetPolygon },
			{ "OutWindsClockwise", &AOpenStreetMap_Generator::execOutWindsClockwise },
			{ "RefineRoadSegments", &AOpenStreetMap_Generator::execRefineRoadSegments },
			{ "ScalePolygon", &AOpenStreetMap_Generator::execScalePolygon },
			{ "TriangulatePolygonInPlace", &AOpenStreetMap_Generator::execTriangulatePolygonInPlace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics
	{
		struct OpenStreetMap_Generator_eventCatmullRomSpline_Parms
		{
			float t;
			FVector P0;
			FVector P1;
			FVector P2;
			FVector P3;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_t;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_P3;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventCatmullRomSpline_Parms, t), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_P0 = { "P0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventCatmullRomSpline_Parms, P0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventCatmullRomSpline_Parms, P1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventCatmullRomSpline_Parms, P2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_P3 = { "P3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventCatmullRomSpline_Parms, P3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventCatmullRomSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_t,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_P0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_P1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_P2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_P3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "CatmullRomSpline", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventCatmullRomSpline_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_ClearOpenStreetMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_ClearOpenStreetMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_ClearOpenStreetMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "ClearOpenStreetMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_ClearOpenStreetMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_ClearOpenStreetMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_ClearOpenStreetMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_ClearOpenStreetMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_ConnectSharedNodes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_ConnectSharedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_ConnectSharedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "ConnectSharedNodes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_ConnectSharedNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_ConnectSharedNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_ConnectSharedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_ConnectSharedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics
	{
		struct OpenStreetMap_Generator_eventFindEnclosedAreaPolygons_Parms
		{
			FOpenStreetMap_Generator_Way startRoad;
			TArray<FOpenStreetMap_Generator_Way> roads;
			TArray<FOpenStreetMap_Generator_MeshInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startRoad;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roads_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_roads;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::NewProp_startRoad = { "startRoad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventFindEnclosedAreaPolygons_Parms, startRoad), Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::NewProp_roads_Inner = { "roads", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::NewProp_roads = { "roads", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventFindEnclosedAreaPolygons_Parms, roads), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventFindEnclosedAreaPolygons_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::NewProp_startRoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::NewProp_roads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::NewProp_roads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "FindEnclosedAreaPolygons", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventFindEnclosedAreaPolygons_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics
	{
		struct OpenStreetMap_Generator_eventFindSharedNodes_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventFindSharedNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "FindSharedNodes", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventFindSharedNodes_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics
	{
		struct OpenStreetMap_Generator_eventGenerateArcPoints_Parms
		{
			FVector PointA;
			FVector PointB;
			FVector ArcDirection;
			int32 NumPoints;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointA;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointB;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArcDirection;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_PointA = { "PointA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateArcPoints_Parms, PointA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_PointB = { "PointB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateArcPoints_Parms, PointB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_ArcDirection = { "ArcDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateArcPoints_Parms, ArcDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateArcPoints_Parms, NumPoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateArcPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_PointA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_PointB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_ArcDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_NumPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "GenerateArcPoints", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventGenerateArcPoints_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics
	{
		struct OpenStreetMap_Generator_eventGenerateBuilding_Parms
		{
			TArray<FVector> footprint;
			TMap<FString,FString> osm_tags;
			int32 default_levels;
			TEnumAsByte<EOpenStreetMap_RoofType> roof_type;
			float roof_size;
			FOpenStreetMap_Generator_MeshInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_footprint_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_footprint;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_osm_tags_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_osm_tags_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_osm_tags;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_default_levels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_roof_type;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roof_size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_footprint_Inner = { "footprint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_footprint = { "footprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateBuilding_Parms, footprint), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_osm_tags_ValueProp = { "osm_tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_osm_tags_Key_KeyProp = { "osm_tags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_osm_tags = { "osm_tags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateBuilding_Parms, osm_tags), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_default_levels = { "default_levels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateBuilding_Parms, default_levels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_roof_type = { "roof_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateBuilding_Parms, roof_type), Z_Construct_UEnum_EG4U_EOpenStreetMap_RoofType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_roof_size = { "roof_size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateBuilding_Parms, roof_size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateBuilding_Parms, ReturnValue), Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_footprint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_footprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_osm_tags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_osm_tags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_osm_tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_default_levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_roof_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_roof_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "GenerateBuilding", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventGenerateBuilding_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics
	{
		struct OpenStreetMap_Generator_eventGenerateOSMRoad_Parms
		{
			TArray<FVector> ref_line;
			TMap<FString,FString> osm_tags;
			int32 lane_number;
			float lane_width;
			float sidewalkWidth;
			float sidewalkHeight;
			int32 resolution;
			FOpenStreetMap_Generator_MeshInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ref_line_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ref_line;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_osm_tags_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_osm_tags_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_osm_tags;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_lane_number;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lane_width;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sidewalkWidth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sidewalkHeight;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_resolution;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_ref_line_Inner = { "ref_line", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_ref_line = { "ref_line", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateOSMRoad_Parms, ref_line), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_osm_tags_ValueProp = { "osm_tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_osm_tags_Key_KeyProp = { "osm_tags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_osm_tags = { "osm_tags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateOSMRoad_Parms, osm_tags), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_lane_number = { "lane_number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateOSMRoad_Parms, lane_number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_lane_width = { "lane_width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateOSMRoad_Parms, lane_width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_sidewalkWidth = { "sidewalkWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateOSMRoad_Parms, sidewalkWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_sidewalkHeight = { "sidewalkHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateOSMRoad_Parms, sidewalkHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateOSMRoad_Parms, resolution), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateOSMRoad_Parms, ReturnValue), Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_ref_line_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_ref_line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_osm_tags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_osm_tags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_osm_tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_lane_number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_lane_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_sidewalkWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_sidewalkHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "GenerateOSMRoad", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventGenerateOSMRoad_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics
	{
		struct OpenStreetMap_Generator_eventGenerateRoadUVs_Parms
		{
			FVector road_start;
			FVector road_end;
			FVector width;
			TArray<FVector> vertices;
			TArray<FVector2D> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_road_start;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_road_end;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_width;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vertices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_road_start = { "road_start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoadUVs_Parms, road_start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_road_end = { "road_end", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoadUVs_Parms, road_end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoadUVs_Parms, width), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_vertices_Inner = { "vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_vertices = { "vertices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoadUVs_Parms, vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoadUVs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_road_start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_road_end,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "GenerateRoadUVs", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventGenerateRoadUVs_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics
	{
		struct OpenStreetMap_Generator_eventGenerateRoof_Parms
		{
			TArray<FVector> footprint;
			TMap<FString,FString> osm_tags;
			TEnumAsByte<EOpenStreetMap_RoofType> roof_type;
			float roof_height;
			float roof_size;
			FOpenStreetMap_Generator_MeshInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_footprint_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_footprint;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_osm_tags_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_osm_tags_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_osm_tags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_roof_type;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roof_height;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roof_size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_footprint_Inner = { "footprint", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_footprint = { "footprint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoof_Parms, footprint), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_osm_tags_ValueProp = { "osm_tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_osm_tags_Key_KeyProp = { "osm_tags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_osm_tags = { "osm_tags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoof_Parms, osm_tags), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_roof_type = { "roof_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoof_Parms, roof_type), Z_Construct_UEnum_EG4U_EOpenStreetMap_RoofType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_roof_height = { "roof_height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoof_Parms, roof_height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_roof_size = { "roof_size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoof_Parms, roof_size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateRoof_Parms, ReturnValue), Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_footprint_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_footprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_osm_tags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_osm_tags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_osm_tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_roof_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_roof_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_roof_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "GenerateRoof", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventGenerateRoof_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics
	{
		struct OpenStreetMap_Generator_eventGenerateSidewalks_Parms
		{
			TArray<FVector> ref_line;
			FOpenStreetMap_Generator_MeshInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ref_line_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ref_line;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::NewProp_ref_line_Inner = { "ref_line", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::NewProp_ref_line = { "ref_line", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateSidewalks_Parms, ref_line), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateSidewalks_Parms, ReturnValue), Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::NewProp_ref_line_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::NewProp_ref_line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "GenerateSidewalks", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventGenerateSidewalks_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics
	{
		struct OpenStreetMap_Generator_eventGenerateSurfaces_Parms
		{
			TArray<FVector> area;
			FOpenStreetMap_Generator_MeshInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_area_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_area;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::NewProp_area_Inner = { "area", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::NewProp_area = { "area", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateSurfaces_Parms, area), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGenerateSurfaces_Parms, ReturnValue), Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::NewProp_area_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::NewProp_area,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "GenerateSurfaces", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventGenerateSurfaces_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics
	{
		struct OpenStreetMap_Generator_eventGetCentroid_Parms
		{
			TArray<FVector> poly;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_poly_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_poly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::NewProp_poly_Inner = { "poly", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::NewProp_poly = { "poly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGetCentroid_Parms, poly), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventGetCentroid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::NewProp_poly_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::NewProp_poly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "GetCentroid", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventGetCentroid_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics
	{
		struct OpenStreetMap_Generator_eventImportOpenStreetMap_Parms
		{
			float sample_rate;
			bool modify_eps;
			FVector center;
			float scale;
			bool flat;
			FString filename;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sample_rate;
		static void NewProp_modify_eps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_modify_eps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_center;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static void NewProp_flat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flat;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_sample_rate = { "sample_rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventImportOpenStreetMap_Parms, sample_rate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_modify_eps_SetBit(void* Obj)
	{
		((OpenStreetMap_Generator_eventImportOpenStreetMap_Parms*)Obj)->modify_eps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_modify_eps = { "modify_eps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenStreetMap_Generator_eventImportOpenStreetMap_Parms), &Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_modify_eps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventImportOpenStreetMap_Parms, center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventImportOpenStreetMap_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_flat_SetBit(void* Obj)
	{
		((OpenStreetMap_Generator_eventImportOpenStreetMap_Parms*)Obj)->flat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_flat = { "flat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenStreetMap_Generator_eventImportOpenStreetMap_Parms), &Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_flat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventImportOpenStreetMap_Parms, filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_sample_rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_modify_eps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_flat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::NewProp_filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "ImportOpenStreetMap", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventImportOpenStreetMap_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_InsertNodesBetweenSharedAndNearest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_InsertNodesBetweenSharedAndNearest_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_InsertNodesBetweenSharedAndNearest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "InsertNodesBetweenSharedAndNearest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_InsertNodesBetweenSharedAndNearest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_InsertNodesBetweenSharedAndNearest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_InsertNodesBetweenSharedAndNearest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_InsertNodesBetweenSharedAndNearest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics
	{
		struct OpenStreetMap_Generator_eventMakeStaticMesh_Parms
		{
			UProceduralMeshComponent* ProcMesh;
			FString PathName;
			FString AssetName;
			UStaticMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProcMesh;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_ProcMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_ProcMesh = { "ProcMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventMakeStaticMesh_Parms, ProcMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_ProcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_ProcMesh_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_PathName = { "PathName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventMakeStaticMesh_Parms, PathName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventMakeStaticMesh_Parms, AssetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventMakeStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_ProcMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_PathName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "MakeStaticMesh", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventMakeStaticMesh_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics
	{
		struct OpenStreetMap_Generator_eventOffsetPolygon_Parms
		{
			TArray<FVector> poly;
			float offset;
			float z;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_poly_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_poly;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_offset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_poly_Inner = { "poly", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_poly = { "poly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventOffsetPolygon_Parms, poly), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventOffsetPolygon_Parms, offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventOffsetPolygon_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventOffsetPolygon_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_poly_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_poly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "OffsetPolygon", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventOffsetPolygon_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics
	{
		struct OpenStreetMap_Generator_eventOutWindsClockwise_Parms
		{
			TArray<FVector> Polygon;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polygon;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventOutWindsClockwise_Parms, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenStreetMap_Generator_eventOutWindsClockwise_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenStreetMap_Generator_eventOutWindsClockwise_Parms), &Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::NewProp_Polygon_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::NewProp_Polygon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "OutWindsClockwise", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventOutWindsClockwise_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_RefineRoadSegments_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_RefineRoadSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_RefineRoadSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "RefineRoadSegments", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_RefineRoadSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_RefineRoadSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_RefineRoadSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_RefineRoadSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics
	{
		struct OpenStreetMap_Generator_eventScalePolygon_Parms
		{
			TArray<FVector> polygon;
			float scale;
			FVector pivot;
			float z;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_polygon_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_polygon;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pivot;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_polygon_Inner = { "polygon", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_polygon = { "polygon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventScalePolygon_Parms, polygon), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventScalePolygon_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_pivot = { "pivot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventScalePolygon_Parms, pivot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventScalePolygon_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventScalePolygon_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_polygon_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_polygon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_pivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "ScalePolygon", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventScalePolygon_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics
	{
		struct OpenStreetMap_Generator_eventTriangulatePolygonInPlace_Parms
		{
			TArray<FVector2D> Polygon;
			TArray<int32> TempIndices;
			TArray<int32> TriangulatedIndices;
			bool OutWindsClockwise;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polygon;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TempIndices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TempIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TriangulatedIndices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriangulatedIndices;
		static void NewProp_OutWindsClockwise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutWindsClockwise;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventTriangulatePolygonInPlace_Parms, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_TempIndices_Inner = { "TempIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_TempIndices = { "TempIndices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventTriangulatePolygonInPlace_Parms, TempIndices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_TriangulatedIndices_Inner = { "TriangulatedIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_TriangulatedIndices = { "TriangulatedIndices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenStreetMap_Generator_eventTriangulatePolygonInPlace_Parms, TriangulatedIndices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_OutWindsClockwise_SetBit(void* Obj)
	{
		((OpenStreetMap_Generator_eventTriangulatePolygonInPlace_Parms*)Obj)->OutWindsClockwise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_OutWindsClockwise = { "OutWindsClockwise", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenStreetMap_Generator_eventTriangulatePolygonInPlace_Parms), &Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_OutWindsClockwise_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OpenStreetMap_Generator_eventTriangulatePolygonInPlace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenStreetMap_Generator_eventTriangulatePolygonInPlace_Parms), &Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_Polygon_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_Polygon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_TempIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_TempIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_TriangulatedIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_TriangulatedIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_OutWindsClockwise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenStreetMap" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenStreetMap_Generator, nullptr, "TriangulatePolygonInPlace", nullptr, nullptr, sizeof(OpenStreetMap_Generator_eventTriangulatePolygonInPlace_Parms), Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOpenStreetMap_Generator_NoRegister()
	{
		return AOpenStreetMap_Generator::StaticClass();
	}
	struct Z_Construct_UClass_AOpenStreetMap_Generator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_step_size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_step_size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x_offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y_offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minlat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minlat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minlon_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minlon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxlat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxlat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxlon_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxlon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ways_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ways_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ways;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_relations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_relations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_relations;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_shared_nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shared_nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_shared_nodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_connected_ways_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_connected_ways_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_connected_ways;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOpenStreetMap_Generator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOpenStreetMap_Generator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_CatmullRomSpline, "CatmullRomSpline" }, // 3400557198
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_ClearOpenStreetMap, "ClearOpenStreetMap" }, // 1128871113
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_ConnectSharedNodes, "ConnectSharedNodes" }, // 2008227191
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_FindEnclosedAreaPolygons, "FindEnclosedAreaPolygons" }, // 3239738690
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_FindSharedNodes, "FindSharedNodes" }, // 1999864718
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateArcPoints, "GenerateArcPoints" }, // 3221419504
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateBuilding, "GenerateBuilding" }, // 394991626
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateOSMRoad, "GenerateOSMRoad" }, // 614067815
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoadUVs, "GenerateRoadUVs" }, // 1394251989
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateRoof, "GenerateRoof" }, // 2566020317
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSidewalks, "GenerateSidewalks" }, // 639438603
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_GenerateSurfaces, "GenerateSurfaces" }, // 2419020817
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_GetCentroid, "GetCentroid" }, // 2874148501
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_ImportOpenStreetMap, "ImportOpenStreetMap" }, // 4043065977
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_InsertNodesBetweenSharedAndNearest, "InsertNodesBetweenSharedAndNearest" }, // 4055883028
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_MakeStaticMesh, "MakeStaticMesh" }, // 2446270160
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_OffsetPolygon, "OffsetPolygon" }, // 2012463485
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_OutWindsClockwise, "OutWindsClockwise" }, // 1745590813
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_RefineRoadSegments, "RefineRoadSegments" }, // 1603018602
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_ScalePolygon, "ScalePolygon" }, // 345823894
		{ &Z_Construct_UFunction_AOpenStreetMap_Generator_TriangulatePolygonInPlace, "TriangulatePolygonInPlace" }, // 4130174865
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenStreetMap_Generator.h" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_step_size_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_step_size = { "step_size", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, step_size), METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_step_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_step_size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_x_offset_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_x_offset = { "x_offset", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, x_offset), METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_x_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_x_offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_y_offset_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_y_offset = { "y_offset", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, y_offset), METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_y_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_y_offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_minlat_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_minlat = { "minlat", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, minlat), METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_minlat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_minlat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_minlon_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_minlon = { "minlon", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, minlon), METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_minlon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_minlon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_maxlat_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_maxlat = { "maxlat", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, maxlat), METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_maxlat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_maxlat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_maxlon_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_maxlon = { "maxlon", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, maxlon), METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_maxlon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_maxlon_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_nodes_Inner = { "nodes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_nodes_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_nodes = { "nodes", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_nodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_ways_Inner = { "ways", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_ways_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_ways = { "ways", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, ways), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_ways_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_ways_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_relations_Inner = { "relations", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_relations_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_relations = { "relations", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, relations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_relations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_relations_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_shared_nodes_Inner = { "shared_nodes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_shared_nodes_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_shared_nodes = { "shared_nodes", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, shared_nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_shared_nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_shared_nodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_connected_ways_Inner = { "connected_ways", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_connected_ways_MetaData[] = {
		{ "Category", "OpenStreetMap_Generator" },
		{ "ModuleRelativePath", "OpenStreetMap_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_connected_ways = { "connected_ways", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenStreetMap_Generator, connected_ways), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_connected_ways_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_connected_ways_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOpenStreetMap_Generator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_step_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_x_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_y_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_minlat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_minlon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_maxlat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_maxlon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_ways_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_ways,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_relations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_relations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_shared_nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_shared_nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_connected_ways_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenStreetMap_Generator_Statics::NewProp_connected_ways,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOpenStreetMap_Generator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenStreetMap_Generator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOpenStreetMap_Generator_Statics::ClassParams = {
		&AOpenStreetMap_Generator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOpenStreetMap_Generator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenStreetMap_Generator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOpenStreetMap_Generator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOpenStreetMap_Generator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOpenStreetMap_Generator, 540339235);
	template<> EG4U_API UClass* StaticClass<AOpenStreetMap_Generator>()
	{
		return AOpenStreetMap_Generator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOpenStreetMap_Generator(Z_Construct_UClass_AOpenStreetMap_Generator, &AOpenStreetMap_Generator::StaticClass, TEXT("/Script/EG4U"), TEXT("AOpenStreetMap_Generator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenStreetMap_Generator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
