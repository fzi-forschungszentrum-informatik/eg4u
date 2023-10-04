// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EG4U/OpenDRIVE_Generator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDRIVE_Generator() {}
// Cross Module References
	EG4U_API UScriptStruct* Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road();
	UPackage* Z_Construct_UPackage__Script_EG4U();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EG4U_API UScriptStruct* Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EG4U_API UClass* Z_Construct_UClass_AOpenDRIVE_Generator_NoRegister();
	EG4U_API UClass* Z_Construct_UClass_AOpenDRIVE_Generator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FOpenDRIVE_Generator_Road::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EG4U_API uint32 Get_Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road, Z_Construct_UPackage__Script_EG4U(), TEXT("OpenDRIVE_Generator_Road"), sizeof(FOpenDRIVE_Generator_Road), Get_Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Hash());
	}
	return Singleton;
}
template<> EG4U_API UScriptStruct* StaticStruct<FOpenDRIVE_Generator_Road>()
{
	return FOpenDRIVE_Generator_Road::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenDRIVE_Generator_Road(FOpenDRIVE_Generator_Road::StaticStruct, TEXT("/Script/EG4U"), TEXT("OpenDRIVE_Generator_Road"), false, nullptr, nullptr);
static struct FScriptStruct_EG4U_StaticRegisterNativesFOpenDRIVE_Generator_Road
{
	FScriptStruct_EG4U_StaticRegisterNativesFOpenDRIVE_Generator_Road()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OpenDRIVE_Generator_Road")),new UScriptStruct::TCppStructOps<FOpenDRIVE_Generator_Road>);
	}
} ScriptStruct_EG4U_StaticRegisterNativesFOpenDRIVE_Generator_Road;
	struct Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_junction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_junction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lane_offset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lane_offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_lane_offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_connections_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_connections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lanes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lanes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_lanes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_object_vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_object_vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_object_vertices;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_object_indices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_object_indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_object_indices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenDRIVE_Generator_Road>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_id_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Road" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Road, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_length_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Road" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Road, length), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_junction_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Road" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_junction = { "junction", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Road, junction), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_junction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_junction_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lane_offset_Inner = { "lane_offset", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lane_offset_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Road" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lane_offset = { "lane_offset", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Road, lane_offset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lane_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lane_offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_connections_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Road" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_connections = { "connections", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Road, connections), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_connections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lanes_Inner = { "lanes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lanes_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Road" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lanes = { "lanes", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Road, lanes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lanes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_vertices_Inner = { "object_vertices", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_vertices_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Road" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_vertices = { "object_vertices", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Road, object_vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_vertices_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_indices_Inner = { "object_indices", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_indices_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Road" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_indices = { "object_indices", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Road, object_indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_indices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_junction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lane_offset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lane_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_connections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lanes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_lanes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_indices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::NewProp_object_indices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
		nullptr,
		&NewStructOps,
		"OpenDRIVE_Generator_Road",
		sizeof(FOpenDRIVE_Generator_Road),
		alignof(FOpenDRIVE_Generator_Road),
		Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenDRIVE_Generator_Road"), sizeof(FOpenDRIVE_Generator_Road), Get_Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road_Hash() { return 1019311293U; }
class UScriptStruct* FOpenDRIVE_Generator_Lane::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EG4U_API uint32 Get_Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane, Z_Construct_UPackage__Script_EG4U(), TEXT("OpenDRIVE_Generator_Lane"), sizeof(FOpenDRIVE_Generator_Lane), Get_Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Hash());
	}
	return Singleton;
}
template<> EG4U_API UScriptStruct* StaticStruct<FOpenDRIVE_Generator_Lane>()
{
	return FOpenDRIVE_Generator_Lane::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenDRIVE_Generator_Lane(FOpenDRIVE_Generator_Lane::StaticStruct, TEXT("/Script/EG4U"), TEXT("OpenDRIVE_Generator_Lane"), false, nullptr, nullptr);
static struct FScriptStruct_EG4U_StaticRegisterNativesFOpenDRIVE_Generator_Lane
{
	FScriptStruct_EG4U_StaticRegisterNativesFOpenDRIVE_Generator_Lane()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OpenDRIVE_Generator_Lane")),new UScriptStruct::TCppStructOps<FOpenDRIVE_Generator_Lane>);
	}
} ScriptStruct_EG4U_StaticRegisterNativesFOpenDRIVE_Generator_Lane;
	struct Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_s0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_s0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_length;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_width_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_max_width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_max_width;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_centerline_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_centerline_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_centerline;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inner_offset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inner_offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inner_offset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outer_offset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outer_offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outer_offset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lane_pairing_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lane_pairing_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_lane_pairing;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lane_vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lane_vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_lane_vertices;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_lane_indices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lane_indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_lane_indices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_marking_vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_marking_vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_marking_vertices;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_marking_indices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_marking_indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_marking_indices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_nav_line_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nav_line_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nav_line;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inner_border_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inner_border_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inner_border;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outer_border_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outer_border_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outer_border;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenDRIVE_Generator_Lane>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_id_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_type_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, type), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_s0_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_s0 = { "s0", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, s0), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_s0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_s0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_length_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, length), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_length_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_width_Inner = { "width", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_width_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, width), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_max_width_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_max_width = { "max_width", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, max_width), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_max_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_max_width_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_centerline_Inner = { "centerline", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_centerline_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_centerline = { "centerline", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, centerline), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_centerline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_centerline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_offset_Inner = { "inner_offset", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_offset_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_offset = { "inner_offset", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, inner_offset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_offset_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_offset_Inner = { "outer_offset", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_offset_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_offset = { "outer_offset", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, outer_offset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_offset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_pairing_Inner = { "lane_pairing", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_pairing_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_pairing = { "lane_pairing", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, lane_pairing), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_pairing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_pairing_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_vertices_Inner = { "lane_vertices", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_vertices_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_vertices = { "lane_vertices", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, lane_vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_vertices_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_indices_Inner = { "lane_indices", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_indices_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_indices = { "lane_indices", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, lane_indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_indices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_vertices_Inner = { "marking_vertices", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_vertices_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_vertices = { "marking_vertices", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, marking_vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_vertices_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_indices_Inner = { "marking_indices", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_indices_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_indices = { "marking_indices", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, marking_indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_indices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_nav_line_Inner = { "nav_line", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_nav_line_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_nav_line = { "nav_line", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, nav_line), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_nav_line_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_nav_line_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_border_Inner = { "inner_border", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_border_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_border = { "inner_border", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, inner_border), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_border_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_border_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_border_Inner = { "outer_border", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_border_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator_Lane" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_border = { "outer_border", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDRIVE_Generator_Lane, outer_border), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_border_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_border_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_s0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_width_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_max_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_centerline_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_centerline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_offset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_offset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_pairing_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_pairing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_indices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_lane_indices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_indices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_marking_indices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_nav_line_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_nav_line,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_border_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_inner_border,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_border_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::NewProp_outer_border,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
		nullptr,
		&NewStructOps,
		"OpenDRIVE_Generator_Lane",
		sizeof(FOpenDRIVE_Generator_Lane),
		alignof(FOpenDRIVE_Generator_Lane),
		Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EG4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenDRIVE_Generator_Lane"), sizeof(FOpenDRIVE_Generator_Lane), Get_Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Lane_Hash() { return 1591157137U; }
	DEFINE_FUNCTION(AOpenDRIVE_Generator::execImportOpenDRIVE)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_sample_rate);
		P_GET_UBOOL(Z_Param_modify_eps);
		P_GET_STRUCT(FVector,Z_Param_center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_UBOOL(Z_Param_flat);
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportOpenDRIVE(Z_Param_sample_rate,Z_Param_modify_eps,Z_Param_center,Z_Param_scale,Z_Param_flat,Z_Param_filename);
		P_NATIVE_END;
	}
	void AOpenDRIVE_Generator::StaticRegisterNativesAOpenDRIVE_Generator()
	{
		UClass* Class = AOpenDRIVE_Generator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ImportOpenDRIVE", &AOpenDRIVE_Generator::execImportOpenDRIVE },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics
	{
		struct OpenDRIVE_Generator_eventImportOpenDRIVE_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_sample_rate = { "sample_rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenDRIVE_Generator_eventImportOpenDRIVE_Parms, sample_rate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_modify_eps_SetBit(void* Obj)
	{
		((OpenDRIVE_Generator_eventImportOpenDRIVE_Parms*)Obj)->modify_eps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_modify_eps = { "modify_eps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenDRIVE_Generator_eventImportOpenDRIVE_Parms), &Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_modify_eps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenDRIVE_Generator_eventImportOpenDRIVE_Parms, center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenDRIVE_Generator_eventImportOpenDRIVE_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_flat_SetBit(void* Obj)
	{
		((OpenDRIVE_Generator_eventImportOpenDRIVE_Parms*)Obj)->flat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_flat = { "flat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OpenDRIVE_Generator_eventImportOpenDRIVE_Parms), &Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_flat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenDRIVE_Generator_eventImportOpenDRIVE_Parms, filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_sample_rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_modify_eps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_flat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::NewProp_filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::Function_MetaDataParams[] = {
		{ "Category", "libOpenDRIVE" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenDRIVE_Generator, nullptr, "ImportOpenDRIVE", nullptr, nullptr, sizeof(OpenDRIVE_Generator_eventImportOpenDRIVE_Parms), Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOpenDRIVE_Generator_NoRegister()
	{
		return AOpenDRIVE_Generator::StaticClass();
	}
	struct Z_Construct_UClass_AOpenDRIVE_Generator_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_border_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_border_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_marking_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_marking_height;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Roads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Roads;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOpenDRIVE_Generator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EG4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOpenDRIVE_Generator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOpenDRIVE_Generator_ImportOpenDRIVE, "ImportOpenDRIVE" }, // 349156047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDRIVE_Generator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenDRIVE_Generator.h" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_step_size_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_step_size = { "step_size", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDRIVE_Generator, step_size), METADATA_PARAMS(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_step_size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_step_size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_x_offset_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_x_offset = { "x_offset", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDRIVE_Generator, x_offset), METADATA_PARAMS(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_x_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_x_offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_y_offset_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_y_offset = { "y_offset", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDRIVE_Generator, y_offset), METADATA_PARAMS(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_y_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_y_offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_border_height_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_border_height = { "border_height", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDRIVE_Generator, border_height), METADATA_PARAMS(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_border_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_border_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_marking_height_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_marking_height = { "marking_height", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDRIVE_Generator, marking_height), METADATA_PARAMS(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_marking_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_marking_height_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_Roads_Inner = { "Roads", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenDRIVE_Generator_Road, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_Roads_MetaData[] = {
		{ "Category", "OpenDRIVE_Generator" },
		{ "ModuleRelativePath", "OpenDRIVE_Generator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_Roads = { "Roads", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenDRIVE_Generator, Roads), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_Roads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_Roads_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOpenDRIVE_Generator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_step_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_x_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_y_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_border_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_marking_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_Roads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDRIVE_Generator_Statics::NewProp_Roads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOpenDRIVE_Generator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenDRIVE_Generator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOpenDRIVE_Generator_Statics::ClassParams = {
		&AOpenDRIVE_Generator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOpenDRIVE_Generator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenDRIVE_Generator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOpenDRIVE_Generator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOpenDRIVE_Generator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOpenDRIVE_Generator, 3196106994);
	template<> EG4U_API UClass* StaticClass<AOpenDRIVE_Generator>()
	{
		return AOpenDRIVE_Generator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOpenDRIVE_Generator(Z_Construct_UClass_AOpenDRIVE_Generator, &AOpenDRIVE_Generator::StaticClass, TEXT("/Script/EG4U"), TEXT("AOpenDRIVE_Generator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenDRIVE_Generator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
