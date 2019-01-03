// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HolidayProject_01/AMyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMyPlayerController() {}
// Cross Module References
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_AAMyPlayerController_NoRegister();
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_AAMyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_HolidayProject_01();
	HOLIDAYPROJECT_01_API UFunction* Z_Construct_UFunction_AAMyPlayerController_MoveCamera();
// End Cross Module References
	void AAMyPlayerController::StaticRegisterNativesAAMyPlayerController()
	{
		UClass* Class = AAMyPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveCamera", &AAMyPlayerController::execMoveCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAMyPlayerController_MoveCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAMyPlayerController_MoveCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraMovement" },
		{ "ModuleRelativePath", "AMyPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAMyPlayerController_MoveCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAMyPlayerController, "MoveCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAMyPlayerController_MoveCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAMyPlayerController_MoveCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAMyPlayerController_MoveCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAMyPlayerController_MoveCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAMyPlayerController_NoRegister()
	{
		return AAMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_HolidayProject_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAMyPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAMyPlayerController_MoveCamera, "MoveCamera" }, // 1214557983
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AMyPlayerController.h" },
		{ "ModuleRelativePath", "AMyPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMyPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAMyPlayerController_Statics::ClassParams = {
		&AAMyPlayerController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAMyPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAMyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAMyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAMyPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAMyPlayerController, 2522186816);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAMyPlayerController(Z_Construct_UClass_AAMyPlayerController, &AAMyPlayerController::StaticClass, TEXT("/Script/HolidayProject_01"), TEXT("AAMyPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAMyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
