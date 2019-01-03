// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AACharacter;
#ifdef HOLIDAYPROJECT_01_AMyCameraActor_generated_h
#error "AMyCameraActor.generated.h already included, missing '#pragma once' in AMyCameraActor.h"
#endif
#define HOLIDAYPROJECT_01_AMyCameraActor_generated_h

#define HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdjustCamera) \
	{ \
		P_GET_OBJECT(AACharacter,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdjustCamera(Z_Param_player); \
		P_NATIVE_END; \
	}


#define HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustCamera) \
	{ \
		P_GET_OBJECT(AACharacter,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdjustCamera(Z_Param_player); \
		P_NATIVE_END; \
	}


#define HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAMyCameraActor(); \
	friend struct Z_Construct_UClass_AAMyCameraActor_Statics; \
public: \
	DECLARE_CLASS(AAMyCameraActor, ACameraActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HolidayProject_01"), NO_API) \
	DECLARE_SERIALIZER(AAMyCameraActor)


#define HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAMyCameraActor(); \
	friend struct Z_Construct_UClass_AAMyCameraActor_Statics; \
public: \
	DECLARE_CLASS(AAMyCameraActor, ACameraActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HolidayProject_01"), NO_API) \
	DECLARE_SERIALIZER(AAMyCameraActor)


#define HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAMyCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAMyCameraActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAMyCameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAMyCameraActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAMyCameraActor(AAMyCameraActor&&); \
	NO_API AAMyCameraActor(const AAMyCameraActor&); \
public:


#define HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAMyCameraActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAMyCameraActor(AAMyCameraActor&&); \
	NO_API AAMyCameraActor(const AAMyCameraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAMyCameraActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAMyCameraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAMyCameraActor)


#define HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LeftBorderLimit() { return STRUCT_OFFSET(AAMyCameraActor, LeftBorderLimit); } \
	FORCEINLINE static uint32 __PPO__TopBorderLimit() { return STRUCT_OFFSET(AAMyCameraActor, TopBorderLimit); } \
	FORCEINLINE static uint32 __PPO__BottomBorderLimit() { return STRUCT_OFFSET(AAMyCameraActor, BottomBorderLimit); } \
	FORCEINLINE static uint32 __PPO__RightBorderLimit() { return STRUCT_OFFSET(AAMyCameraActor, RightBorderLimit); }


#define HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_13_PROLOG
#define HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_PRIVATE_PROPERTY_OFFSET \
	HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_RPC_WRAPPERS \
	HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_INCLASS \
	HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_PRIVATE_PROPERTY_OFFSET \
	HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_INCLASS_NO_PURE_DECLS \
	HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HolidayProject_01_Source_HolidayProject_01_AMyCameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
