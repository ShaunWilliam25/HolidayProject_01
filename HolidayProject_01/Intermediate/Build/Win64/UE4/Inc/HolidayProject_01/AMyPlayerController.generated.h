// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOLIDAYPROJECT_01_AMyPlayerController_generated_h
#error "AMyPlayerController.generated.h already included, missing '#pragma once' in AMyPlayerController.h"
#endif
#define HOLIDAYPROJECT_01_AMyPlayerController_generated_h

#define HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveCamera(); \
		P_NATIVE_END; \
	}


#define HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveCamera(); \
		P_NATIVE_END; \
	}


#define HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAMyPlayerController(); \
	friend struct Z_Construct_UClass_AAMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HolidayProject_01"), NO_API) \
	DECLARE_SERIALIZER(AAMyPlayerController)


#define HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAMyPlayerController(); \
	friend struct Z_Construct_UClass_AAMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HolidayProject_01"), NO_API) \
	DECLARE_SERIALIZER(AAMyPlayerController)


#define HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAMyPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAMyPlayerController(AAMyPlayerController&&); \
	NO_API AAMyPlayerController(const AAMyPlayerController&); \
public:


#define HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAMyPlayerController(AAMyPlayerController&&); \
	NO_API AAMyPlayerController(const AAMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAMyPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAMyPlayerController)


#define HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_PRIVATE_PROPERTY_OFFSET
#define HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_15_PROLOG
#define HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_RPC_WRAPPERS \
	HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_INCLASS \
	HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HolidayProject_01_Source_HolidayProject_01_AMyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
