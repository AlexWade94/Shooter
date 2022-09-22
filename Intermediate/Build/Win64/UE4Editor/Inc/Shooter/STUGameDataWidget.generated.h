// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUGameDataWidget_generated_h
#error "STUGameDataWidget.generated.h already included, missing '#pragma once' in STUGameDataWidget.h"
#endif
#define SHOOTER_STUGameDataWidget_generated_h

#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_SPARSE_DATA
#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRoundSecondsRemaining); \
	DECLARE_FUNCTION(execGetTotalRoundsNum); \
	DECLARE_FUNCTION(execGetCurrentRoundNum);


#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRoundSecondsRemaining); \
	DECLARE_FUNCTION(execGetTotalRoundsNum); \
	DECLARE_FUNCTION(execGetCurrentRoundNum);


#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTUGameDataWidget(); \
	friend struct Z_Construct_UClass_USTUGameDataWidget_Statics; \
public: \
	DECLARE_CLASS(USTUGameDataWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUGameDataWidget)


#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSTUGameDataWidget(); \
	friend struct Z_Construct_UClass_USTUGameDataWidget_Statics; \
public: \
	DECLARE_CLASS(USTUGameDataWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUGameDataWidget)


#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUGameDataWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUGameDataWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUGameDataWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUGameDataWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUGameDataWidget(USTUGameDataWidget&&); \
	NO_API USTUGameDataWidget(const USTUGameDataWidget&); \
public:


#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUGameDataWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUGameDataWidget(USTUGameDataWidget&&); \
	NO_API USTUGameDataWidget(const USTUGameDataWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUGameDataWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUGameDataWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUGameDataWidget)


#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_12_PROLOG
#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_INCLASS \
	Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USTUGameDataWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_UI_STUGameDataWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
