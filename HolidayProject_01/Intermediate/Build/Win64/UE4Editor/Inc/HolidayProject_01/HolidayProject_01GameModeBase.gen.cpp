// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HolidayProject_01/HolidayProject_01GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHolidayProject_01GameModeBase() {}
// Cross Module References
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_AHolidayProject_01GameModeBase_NoRegister();
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_AHolidayProject_01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HolidayProject_01();
// End Cross Module References
	void AHolidayProject_01GameModeBase::StaticRegisterNativesAHolidayProject_01GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHolidayProject_01GameModeBase_NoRegister()
	{
		return AHolidayProject_01GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHolidayProject_01GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHolidayProject_01GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HolidayProject_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHolidayProject_01GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HolidayProject_01GameModeBase.h" },
		{ "ModuleRelativePath", "HolidayProject_01GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHolidayProject_01GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHolidayProject_01GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHolidayProject_01GameModeBase_Statics::ClassParams = {
		&AHolidayProject_01GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHolidayProject_01GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHolidayProject_01GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHolidayProject_01GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHolidayProject_01GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHolidayProject_01GameModeBase, 553534690);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHolidayProject_01GameModeBase(Z_Construct_UClass_AHolidayProject_01GameModeBase, &AHolidayProject_01GameModeBase::StaticClass, TEXT("/Script/HolidayProject_01"), TEXT("AHolidayProject_01GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHolidayProject_01GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
