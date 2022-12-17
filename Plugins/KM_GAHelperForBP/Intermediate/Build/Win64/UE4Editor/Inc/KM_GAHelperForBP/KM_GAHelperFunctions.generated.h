// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UGameplayEffect;
class UGameplayAbility;
class UAttributeSet;
struct FGameplayTagContainer;
class AActor;
#ifdef KM_GAHELPERFORBP_KM_GAHelperFunctions_generated_h
#error "KM_GAHelperFunctions.generated.h already included, missing '#pragma once' in KM_GAHelperFunctions.h"
#endif
#define KM_GAHELPERFORBP_KM_GAHelperFunctions_generated_h

#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_SPARSE_DATA
#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEffectLevel); \
	DECLARE_FUNCTION(execIncrementAbilityLevel); \
	DECLARE_FUNCTION(execSetAbilityLevel); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execSetReplicationModeMinimal); \
	DECLARE_FUNCTION(execSetReplicationModeMixed); \
	DECLARE_FUNCTION(execSetReplicationModeFull); \
	DECLARE_FUNCTION(execInitAttributeSet); \
	DECLARE_FUNCTION(execRemoveGameplayTags); \
	DECLARE_FUNCTION(execAddGameplayTags); \
	DECLARE_FUNCTION(execRefreshAbilityActorInfo); \
	DECLARE_FUNCTION(execInitAbilitySystem); \
	DECLARE_FUNCTION(execSetupAbilitySystem);


#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEffectLevel); \
	DECLARE_FUNCTION(execIncrementAbilityLevel); \
	DECLARE_FUNCTION(execSetAbilityLevel); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execSetReplicationModeMinimal); \
	DECLARE_FUNCTION(execSetReplicationModeMixed); \
	DECLARE_FUNCTION(execSetReplicationModeFull); \
	DECLARE_FUNCTION(execInitAttributeSet); \
	DECLARE_FUNCTION(execRemoveGameplayTags); \
	DECLARE_FUNCTION(execAddGameplayTags); \
	DECLARE_FUNCTION(execRefreshAbilityActorInfo); \
	DECLARE_FUNCTION(execInitAbilitySystem); \
	DECLARE_FUNCTION(execSetupAbilitySystem);


#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKM_GAHelperFunctions(); \
	friend struct Z_Construct_UClass_UKM_GAHelperFunctions_Statics; \
public: \
	DECLARE_CLASS(UKM_GAHelperFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KM_GAHelperForBP"), NO_API) \
	DECLARE_SERIALIZER(UKM_GAHelperFunctions)


#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUKM_GAHelperFunctions(); \
	friend struct Z_Construct_UClass_UKM_GAHelperFunctions_Statics; \
public: \
	DECLARE_CLASS(UKM_GAHelperFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KM_GAHelperForBP"), NO_API) \
	DECLARE_SERIALIZER(UKM_GAHelperFunctions)


#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKM_GAHelperFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKM_GAHelperFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKM_GAHelperFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKM_GAHelperFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKM_GAHelperFunctions(UKM_GAHelperFunctions&&); \
	NO_API UKM_GAHelperFunctions(const UKM_GAHelperFunctions&); \
public:


#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKM_GAHelperFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKM_GAHelperFunctions(UKM_GAHelperFunctions&&); \
	NO_API UKM_GAHelperFunctions(const UKM_GAHelperFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKM_GAHelperFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKM_GAHelperFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKM_GAHelperFunctions)


#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_PRIVATE_PROPERTY_OFFSET
#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_15_PROLOG
#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_PRIVATE_PROPERTY_OFFSET \
	GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_SPARSE_DATA \
	GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_RPC_WRAPPERS \
	GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_INCLASS \
	GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_PRIVATE_PROPERTY_OFFSET \
	GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_SPARSE_DATA \
	GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_INCLASS_NO_PURE_DECLS \
	GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KM_GAHELPERFORBP_API UClass* StaticClass<class UKM_GAHelperFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GraduationProduction_katahira_Plugins_KM_GAHelperForBP_Source_KM_GAHelperForBP_Public_KM_GAHelperFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
