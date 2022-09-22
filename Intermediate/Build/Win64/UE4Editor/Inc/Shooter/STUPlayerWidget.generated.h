// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAmmoData;
struct FWeaponUIData;
#ifdef SHOOTER_STUPlayerWidget_generated_h
#error "STUPlayerWidget.generated.h already included, missing '#pragma once' in STUPlayerWidget.h"
#endif
#define SHOOTER_STUPlayerWidget_generated_h

#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_SPARSE_DATA
#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFormatBullets); \
	DECLARE_FUNCTION(execGetKillsNum); \
	DECLARE_FUNCTION(execIsPlayerSpectating); \
	DECLARE_FUNCTION(execIsPlayerAlive); \
	DECLARE_FUNCTION(execGetCurrentWeaponAmmoData); \
	DECLARE_FUNCTION(execGetCurrentWeaponUIData); \
	DECLARE_FUNCTION(execGetHealthPercent);


#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFormatBullets); \
	DECLARE_FUNCTION(execGetKillsNum); \
	DECLARE_FUNCTION(execIsPlayerSpectating); \
	DECLARE_FUNCTION(execIsPlayerAlive); \
	DECLARE_FUNCTION(execGetCurrentWeaponAmmoData); \
	DECLARE_FUNCTION(execGetCurrentWeaponUIData); \
	DECLARE_FUNCTION(execGetHealthPercent);


#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_EVENT_PARMS
#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_CALLBACK_WRAPPERS
#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTUPlayerWidget(); \
	friend struct Z_Construct_UClass_USTUPlayerWidget_Statics; \
public: \
	DECLARE_CLASS(USTUPlayerWidget, USTUBaseWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUPlayerWidget)


#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSTUPlayerWidget(); \
	friend struct Z_Construct_UClass_USTUPlayerWidget_Statics; \
public: \
	DECLARE_CLASS(USTUPlayerWidget, USTUBaseWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUPlayerWidget)


#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUPlayerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUPlayerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUPlayerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUPlayerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUPlayerWidget(USTUPlayerWidget&&); \
	NO_API USTUPlayerWidget(const USTUPlayerWidget&); \
public:


#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUPlayerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUPlayerWidget(USTUPlayerWidget&&); \
	NO_API USTUPlayerWidget(const USTUPlayerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUPlayerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUPlayerWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUPlayerWidget)


#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthProgressBar() { return STRUCT_OFFSET(USTUPlayerWidget, HealthProgressBar); } \
	FORCEINLINE static uint32 __PPO__DamageAnimation() { return STRUCT_OFFSET(USTUPlayerWidget, DamageAnimation); } \
	FORCEINLINE static uint32 __PPO__PercentColorThreshold() { return STRUCT_OFFSET(USTUPlayerWidget, PercentColorThreshold); } \
	FORCEINLINE static uint32 __PPO__GoodColor() { return STRUCT_OFFSET(USTUPlayerWidget, GoodColor); } \
	FORCEINLINE static uint32 __PPO__BadColor() { return STRUCT_OFFSET(USTUPlayerWidget, BadColor); }


#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_12_PROLOG \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_EVENT_PARMS


#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_INCLASS \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USTUPlayerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_UI_STUPlayerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
