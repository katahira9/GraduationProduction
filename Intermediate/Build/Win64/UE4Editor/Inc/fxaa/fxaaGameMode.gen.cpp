// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fxaa/fxaaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefxaaGameMode() {}
// Cross Module References
	FXAA_API UClass* Z_Construct_UClass_AfxaaGameMode_NoRegister();
	FXAA_API UClass* Z_Construct_UClass_AfxaaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_fxaa();
// End Cross Module References
	void AfxaaGameMode::StaticRegisterNativesAfxaaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AfxaaGameMode_NoRegister()
	{
		return AfxaaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AfxaaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfxaaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_fxaa,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfxaaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "fxaaGameMode.h" },
		{ "ModuleRelativePath", "fxaaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfxaaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfxaaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AfxaaGameMode_Statics::ClassParams = {
		&AfxaaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AfxaaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AfxaaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AfxaaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AfxaaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AfxaaGameMode, 3240673449);
	template<> FXAA_API UClass* StaticClass<AfxaaGameMode>()
	{
		return AfxaaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AfxaaGameMode(Z_Construct_UClass_AfxaaGameMode, &AfxaaGameMode::StaticClass, TEXT("/Script/fxaa"), TEXT("AfxaaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfxaaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
