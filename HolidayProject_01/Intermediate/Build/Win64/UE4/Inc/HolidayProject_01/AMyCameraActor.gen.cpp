// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HolidayProject_01/AMyCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMyCameraActor() {}
// Cross Module References
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_AAMyCameraActor_NoRegister();
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_AAMyCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_HolidayProject_01();
// End Cross Module References
	void AAMyCameraActor::StaticRegisterNativesAAMyCameraActor()
	{
	}
	UClass* Z_Construct_UClass_AAMyCameraActor_NoRegister()
	{
		return AAMyCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AAMyCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAMyCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HolidayProject_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAMyCameraActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "AMyCameraActor.h" },
		{ "ModuleRelativePath", "AMyCameraActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAMyCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMyCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAMyCameraActor_Statics::ClassParams = {
		&AAMyCameraActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAMyCameraActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAMyCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAMyCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAMyCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAMyCameraActor, 1866942440);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAMyCameraActor(Z_Construct_UClass_AAMyCameraActor, &AAMyCameraActor::StaticClass, TEXT("/Script/HolidayProject_01"), TEXT("AAMyCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAMyCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
