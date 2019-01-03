// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HolidayProject_01/ACharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACharacter() {}
// Cross Module References
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_AACharacter_NoRegister();
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_AACharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_HolidayProject_01();
// End Cross Module References
	void AACharacter::StaticRegisterNativesAACharacter()
	{
	}
	UClass* Z_Construct_UClass_AACharacter_NoRegister()
	{
		return AACharacter::StaticClass();
	}
	struct Z_Construct_UClass_AACharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HolidayProject_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ACharacter.h" },
		{ "ModuleRelativePath", "ACharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AACharacter_Statics::ClassParams = {
		&AACharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AACharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AACharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AACharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AACharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AACharacter, 2189529297);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACharacter(Z_Construct_UClass_AACharacter, &AACharacter::StaticClass, TEXT("/Script/HolidayProject_01"), TEXT("AACharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
