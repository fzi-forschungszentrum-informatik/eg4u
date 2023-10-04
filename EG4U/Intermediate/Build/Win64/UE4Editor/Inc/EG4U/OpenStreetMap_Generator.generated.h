// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
 
struct FOpenStreetMap_Generator_MeshInfo;
struct FOpenStreetMap_Generator_Way;
class UProceduralMeshComponent;
class UStaticMesh;
#ifdef EG4U_OpenStreetMap_Generator_generated_h
#error "OpenStreetMap_Generator.generated.h already included, missing '#pragma once' in OpenStreetMap_Generator.h"
#endif
#define EG4U_OpenStreetMap_Generator_generated_h

#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Relation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EG4U_API UScriptStruct* StaticStruct<struct FOpenStreetMap_Generator_Relation>();

#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Member_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EG4U_API UScriptStruct* StaticStruct<struct FOpenStreetMap_Generator_Member>();

#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Way_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EG4U_API UScriptStruct* StaticStruct<struct FOpenStreetMap_Generator_Way>();

#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenStreetMap_Generator_Node_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EG4U_API UScriptStruct* StaticStruct<struct FOpenStreetMap_Generator_Node>();

#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenStreetMap_Generator_MeshInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EG4U_API UScriptStruct* StaticStruct<struct FOpenStreetMap_Generator_MeshInfo>();

#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_SPARSE_DATA
#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOutWindsClockwise); \
	DECLARE_FUNCTION(execTriangulatePolygonInPlace); \
	DECLARE_FUNCTION(execGenerateBuilding); \
	DECLARE_FUNCTION(execGenerateRoof); \
	DECLARE_FUNCTION(execGenerateSurfaces); \
	DECLARE_FUNCTION(execGenerateSidewalks); \
	DECLARE_FUNCTION(execFindEnclosedAreaPolygons); \
	DECLARE_FUNCTION(execGenerateRoadUVs); \
	DECLARE_FUNCTION(execGenerateOSMRoad); \
	DECLARE_FUNCTION(execRefineRoadSegments); \
	DECLARE_FUNCTION(execConnectSharedNodes); \
	DECLARE_FUNCTION(execInsertNodesBetweenSharedAndNearest); \
	DECLARE_FUNCTION(execFindSharedNodes); \
	DECLARE_FUNCTION(execImportOpenStreetMap); \
	DECLARE_FUNCTION(execMakeStaticMesh); \
	DECLARE_FUNCTION(execGenerateArcPoints); \
	DECLARE_FUNCTION(execCatmullRomSpline); \
	DECLARE_FUNCTION(execOffsetPolygon); \
	DECLARE_FUNCTION(execScalePolygon); \
	DECLARE_FUNCTION(execGetCentroid); \
	DECLARE_FUNCTION(execClearOpenStreetMap);


#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOutWindsClockwise); \
	DECLARE_FUNCTION(execTriangulatePolygonInPlace); \
	DECLARE_FUNCTION(execGenerateBuilding); \
	DECLARE_FUNCTION(execGenerateRoof); \
	DECLARE_FUNCTION(execGenerateSurfaces); \
	DECLARE_FUNCTION(execGenerateSidewalks); \
	DECLARE_FUNCTION(execFindEnclosedAreaPolygons); \
	DECLARE_FUNCTION(execGenerateRoadUVs); \
	DECLARE_FUNCTION(execGenerateOSMRoad); \
	DECLARE_FUNCTION(execRefineRoadSegments); \
	DECLARE_FUNCTION(execConnectSharedNodes); \
	DECLARE_FUNCTION(execInsertNodesBetweenSharedAndNearest); \
	DECLARE_FUNCTION(execFindSharedNodes); \
	DECLARE_FUNCTION(execImportOpenStreetMap); \
	DECLARE_FUNCTION(execMakeStaticMesh); \
	DECLARE_FUNCTION(execGenerateArcPoints); \
	DECLARE_FUNCTION(execCatmullRomSpline); \
	DECLARE_FUNCTION(execOffsetPolygon); \
	DECLARE_FUNCTION(execScalePolygon); \
	DECLARE_FUNCTION(execGetCentroid); \
	DECLARE_FUNCTION(execClearOpenStreetMap);


#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOpenStreetMap_Generator(); \
	friend struct Z_Construct_UClass_AOpenStreetMap_Generator_Statics; \
public: \
	DECLARE_CLASS(AOpenStreetMap_Generator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EG4U"), NO_API) \
	DECLARE_SERIALIZER(AOpenStreetMap_Generator)


#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_INCLASS \
private: \
	static void StaticRegisterNativesAOpenStreetMap_Generator(); \
	friend struct Z_Construct_UClass_AOpenStreetMap_Generator_Statics; \
public: \
	DECLARE_CLASS(AOpenStreetMap_Generator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EG4U"), NO_API) \
	DECLARE_SERIALIZER(AOpenStreetMap_Generator)


#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOpenStreetMap_Generator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOpenStreetMap_Generator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenStreetMap_Generator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenStreetMap_Generator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenStreetMap_Generator(AOpenStreetMap_Generator&&); \
	NO_API AOpenStreetMap_Generator(const AOpenStreetMap_Generator&); \
public:


#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenStreetMap_Generator(AOpenStreetMap_Generator&&); \
	NO_API AOpenStreetMap_Generator(const AOpenStreetMap_Generator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenStreetMap_Generator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenStreetMap_Generator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOpenStreetMap_Generator)


#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_PRIVATE_PROPERTY_OFFSET
#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_106_PROLOG
#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_PRIVATE_PROPERTY_OFFSET \
	FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_SPARSE_DATA \
	FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_RPC_WRAPPERS \
	FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_INCLASS \
	FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_PRIVATE_PROPERTY_OFFSET \
	FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_SPARSE_DATA \
	FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_INCLASS_NO_PURE_DECLS \
	FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EG4U_API UClass* StaticClass<class AOpenStreetMap_Generator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FZIsim_Plugins_EG4U_Source_EG4U_OpenStreetMap_Generator_h


#define FOREACH_ENUM_EOPENSTREETMAP_ROOFTYPE(op) \
	op(Flat) \
	op(Gabled) \
	op(Hipped) \
	op(Pyramidal) \
	op(Sawtooth) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
