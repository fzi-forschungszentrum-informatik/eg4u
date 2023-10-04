// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPID_GAIN;
struct FPID_FILTER;
#ifdef EG4U_AI_PIDController_generated_h
#error "AI_PIDController.generated.h already included, missing '#pragma once' in AI_PIDController.h"
#endif
#define EG4U_AI_PIDController_generated_h

#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPID_FILTER_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EG4U_API UScriptStruct* StaticStruct<struct FPID_FILTER>();

#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPID_GAIN_Statics; \
	static class UScriptStruct* StaticStruct();


template<> EG4U_API UScriptStruct* StaticStruct<struct FPID_GAIN>();

#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_SPARSE_DATA
#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSteering); \
	DECLARE_FUNCTION(execUpdateAcceleration); \
	DECLARE_FUNCTION(execPID_Reset); \
	DECLARE_FUNCTION(execPID_Update); \
	DECLARE_FUNCTION(execLowPassFilter); \
	DECLARE_FUNCTION(execInitGainSteering); \
	DECLARE_FUNCTION(execInitGainAcceleration); \
	DECLARE_FUNCTION(execInitFilters);


#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSteering); \
	DECLARE_FUNCTION(execUpdateAcceleration); \
	DECLARE_FUNCTION(execPID_Reset); \
	DECLARE_FUNCTION(execPID_Update); \
	DECLARE_FUNCTION(execLowPassFilter); \
	DECLARE_FUNCTION(execInitGainSteering); \
	DECLARE_FUNCTION(execInitGainAcceleration); \
	DECLARE_FUNCTION(execInitFilters);


#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_PIDController(); \
	friend struct Z_Construct_UClass_AAI_PIDController_Statics; \
public: \
	DECLARE_CLASS(AAI_PIDController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EG4U"), NO_API) \
	DECLARE_SERIALIZER(AAI_PIDController)


#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_INCLASS \
private: \
	static void StaticRegisterNativesAAI_PIDController(); \
	friend struct Z_Construct_UClass_AAI_PIDController_Statics; \
public: \
	DECLARE_CLASS(AAI_PIDController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EG4U"), NO_API) \
	DECLARE_SERIALIZER(AAI_PIDController)


#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI_PIDController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI_PIDController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_PIDController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_PIDController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_PIDController(AAI_PIDController&&); \
	NO_API AAI_PIDController(const AAI_PIDController&); \
public:


#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_PIDController(AAI_PIDController&&); \
	NO_API AAI_PIDController(const AAI_PIDController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_PIDController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_PIDController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI_PIDController)


#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_PRIVATE_PROPERTY_OFFSET
#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_51_PROLOG
#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_PRIVATE_PROPERTY_OFFSET \
	FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_SPARSE_DATA \
	FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_RPC_WRAPPERS \
	FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_INCLASS \
	FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_PRIVATE_PROPERTY_OFFSET \
	FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_SPARSE_DATA \
	FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_INCLASS_NO_PURE_DECLS \
	FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EG4U_API UClass* StaticClass<class AAI_PIDController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FZIsim_Plugins_EG4U_Source_EG4U_Public_AI_PIDController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
