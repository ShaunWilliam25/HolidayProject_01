// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HolidayProject_01/PC_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePC_Player() {}
// Cross Module References
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_APC_Player_NoRegister();
	HOLIDAYPROJECT_01_API UClass* Z_Construct_UClass_APC_Player();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_HolidayProject_01();
// End Cross Module References
	void APC_Player::StaticRegisterNativesAPC_Player()
	{
	}
	UClass* Z_Construct_UClass_APC_Player_NoRegister()
	{
		return APC_Player::StaticClass();
	}
	struct Z_Construct_UClass_APC_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APC_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HolidayProject_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APC_Player_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PC_Player.h" },
		{ "ModuleRelativePath", "PC_Player.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APC_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APC_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APC_Player_Statics::ClassParams = {
		&APC_Player::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APC_Player_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APC_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APC_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APC_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APC_Player, 1559562119);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APC_Player(Z_Construct_UClass_APC_Player, &APC_Player::StaticClass, TEXT("/Script/HolidayProject_01"), TEXT("APC_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APC_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
