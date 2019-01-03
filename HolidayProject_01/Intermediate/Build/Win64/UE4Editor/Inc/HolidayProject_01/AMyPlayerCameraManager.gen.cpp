// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HolidayProject_01/AMyPlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMyPlayerCameraManager() {}
// Cross Module References
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_AAMyPlayerCameraManager_NoRegister();
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_AAMyPlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_HolidayProject_01();
// End Cross Module References
	void AAMyPlayerCameraManager::StaticRegisterNativesAAMyPlayerCameraManager()
	{
	}
	UClass* Z_Construct_UClass_AAMyPlayerCameraManager_NoRegister()
	{
		return AAMyPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AAMyPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAMyPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_HolidayProject_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMyPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AMyPlayerCameraManager.h" },
		{ "ModuleRelativePath", "AMyPlayerCameraManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAMyPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMyPlayerCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAMyPlayerCameraManager_Statics::ClassParams = {
		&AAMyPlayerCameraManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAMyPlayerCameraManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAMyPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAMyPlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAMyPlayerCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAMyPlayerCameraManager, 3967835495);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAMyPlayerCameraManager(Z_Construct_UClass_AAMyPlayerCameraManager, &AAMyPlayerCameraManager::StaticClass, TEXT("/Script/HolidayProject_01"), TEXT("AAMyPlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAMyPlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
