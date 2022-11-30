// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KM_GAHelperForBP/Public/LoadToText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadToText() {}
// Cross Module References
	KM_GAHELPERFORBP_API UClass* Z_Construct_UClass_ULoadToText_NoRegister();
	KM_GAHELPERFORBP_API UClass* Z_Construct_UClass_ULoadToText();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_KM_GAHelperForBP();
// End Cross Module References
	DEFINE_FUNCTION(ULoadToText::execFileLoadString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileNameA);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SaveTextA);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoadToText::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadToText::execFileSaveString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileNameB);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveTextB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULoadToText::FileSaveString(Z_Param_FileNameB,Z_Param_SaveTextB);
		P_NATIVE_END;
	}
	void ULoadToText::StaticRegisterNativesULoadToText()
	{
		UClass* Class = ULoadToText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileLoadString", &ULoadToText::execFileLoadString },
			{ "FileSaveString", &ULoadToText::execFileSaveString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadToText_FileLoadString_Statics
	{
		struct LoadToText_eventFileLoadString_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextA;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::NewProp_FileNameA = { "FileNameA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadToText_eventFileLoadString_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::NewProp_SaveTextA = { "SaveTextA", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadToText_eventFileLoadString_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoadToText_eventFileLoadString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadToText_eventFileLoadString_Parms), &Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::NewProp_FileNameA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::NewProp_SaveTextA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "Public/LoadToText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadToText, nullptr, "FileLoadString", nullptr, nullptr, sizeof(LoadToText_eventFileLoadString_Parms), Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadToText_FileLoadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadToText_FileLoadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadToText_FileSaveString_Statics
	{
		struct LoadToText_eventFileSaveString_Parms
		{
			FString FileNameB;
			FString SaveTextB;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::NewProp_FileNameB = { "FileNameB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadToText_eventFileSaveString_Parms, FileNameB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::NewProp_SaveTextB = { "SaveTextB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadToText_eventFileSaveString_Parms, SaveTextB), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LoadToText_eventFileSaveString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoadToText_eventFileSaveString_Parms), &Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::NewProp_FileNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::NewProp_SaveTextB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "Public/LoadToText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadToText, nullptr, "FileSaveString", nullptr, nullptr, sizeof(LoadToText_eventFileSaveString_Parms), Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadToText_FileSaveString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadToText_FileSaveString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadToText_NoRegister()
	{
		return ULoadToText::StaticClass();
	}
	struct Z_Construct_UClass_ULoadToText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadToText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_KM_GAHelperForBP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadToText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadToText_FileLoadString, "FileLoadString" }, // 171522900
		{ &Z_Construct_UFunction_ULoadToText_FileSaveString, "FileSaveString" }, // 408478707
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadToText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadToText.h" },
		{ "ModuleRelativePath", "Public/LoadToText.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadToText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadToText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadToText_Statics::ClassParams = {
		&ULoadToText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadToText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadToText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadToText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadToText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadToText, 1425843541);
	template<> KM_GAHELPERFORBP_API UClass* StaticClass<ULoadToText>()
	{
		return ULoadToText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadToText(Z_Construct_UClass_ULoadToText, &ULoadToText::StaticClass, TEXT("/Script/KM_GAHelperForBP"), TEXT("ULoadToText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadToText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
