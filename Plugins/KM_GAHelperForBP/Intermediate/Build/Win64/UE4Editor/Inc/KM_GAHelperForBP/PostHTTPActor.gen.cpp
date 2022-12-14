// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KM_GAHelperForBP/Public/PostHTTPActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostHTTPActor() {}
// Cross Module References
	KM_GAHELPERFORBP_API UClass* Z_Construct_UClass_APostHTTPActor_NoRegister();
	KM_GAHELPERFORBP_API UClass* Z_Construct_UClass_APostHTTPActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_KM_GAHelperForBP();
// End Cross Module References
	DEFINE_FUNCTION(APostHTTPActor::execMyHttpCall)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MyHttpCall(Z_Param_text);
		P_NATIVE_END;
	}
	void APostHTTPActor::StaticRegisterNativesAPostHTTPActor()
	{
		UClass* Class = APostHTTPActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MyHttpCall", &APostHTTPActor::execMyHttpCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics
	{
		struct PostHTTPActor_eventMyHttpCall_Parms
		{
			FString text;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostHTTPActor_eventMyHttpCall_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level" },
		{ "Comment", "/* The actual HTTP call */" },
		{ "ModuleRelativePath", "Public/PostHTTPActor.h" },
		{ "ToolTip", "The actual HTTP call" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APostHTTPActor, nullptr, "MyHttpCall", nullptr, nullptr, sizeof(PostHTTPActor_eventMyHttpCall_Parms), Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APostHTTPActor_MyHttpCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APostHTTPActor_MyHttpCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APostHTTPActor_NoRegister()
	{
		return APostHTTPActor::StaticClass();
	}
	struct Z_Construct_UClass_APostHTTPActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_returnoutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_returnoutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IptText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IptText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostHTTPActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KM_GAHelperForBP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APostHTTPActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APostHTTPActor_MyHttpCall, "MyHttpCall" }, // 992073087
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostHTTPActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PostHTTPActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PostHTTPActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostHTTPActor_Statics::NewProp_returnoutput_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/PostHTTPActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APostHTTPActor_Statics::NewProp_returnoutput = { "returnoutput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostHTTPActor, returnoutput), METADATA_PARAMS(Z_Construct_UClass_APostHTTPActor_Statics::NewProp_returnoutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostHTTPActor_Statics::NewProp_returnoutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostHTTPActor_Statics::NewProp_IptText_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/PostHTTPActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APostHTTPActor_Statics::NewProp_IptText = { "IptText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostHTTPActor, IptText), METADATA_PARAMS(Z_Construct_UClass_APostHTTPActor_Statics::NewProp_IptText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostHTTPActor_Statics::NewProp_IptText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APostHTTPActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostHTTPActor_Statics::NewProp_returnoutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostHTTPActor_Statics::NewProp_IptText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostHTTPActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostHTTPActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostHTTPActor_Statics::ClassParams = {
		&APostHTTPActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APostHTTPActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APostHTTPActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APostHTTPActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APostHTTPActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostHTTPActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostHTTPActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostHTTPActor, 922142543);
	template<> KM_GAHELPERFORBP_API UClass* StaticClass<APostHTTPActor>()
	{
		return APostHTTPActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostHTTPActor(Z_Construct_UClass_APostHTTPActor, &APostHTTPActor::StaticClass, TEXT("/Script/KM_GAHelperForBP"), TEXT("APostHTTPActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostHTTPActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
