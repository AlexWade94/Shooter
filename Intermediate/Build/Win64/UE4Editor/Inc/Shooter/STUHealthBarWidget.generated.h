// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUHealthBarWidget_generated_h
#error "STUHealthBarWidget.generated.h already included, missing '#pragma once' in STUHealthBarWidget.h"
#endif
#define SHOOTER_STUHealthBarWidget_generated_h

#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_SPARSE_DATA
#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTUHealthBarWidget(); \
	friend struct Z_Construct_UClass_USTUHealthBarWidget_Statics; \
public: \
	DECLARE_CLASS(USTUHealthBarWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUHealthBarWidget)


#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSTUHealthBarWidget(); \
	friend struct Z_Construct_UClass_USTUHealthBarWidget_Statics; \
public: \
	DECLARE_CLASS(USTUHealthBarWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUHealthBarWidget)


#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUHealthBarWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUHealthBarWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUHealthBarWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUHealthBarWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUHealthBarWidget(USTUHealthBarWidget&&); \
	NO_API USTUHealthBarWidget(const USTUHealthBarWidget&); \
public:


#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUHealthBarWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUHealthBarWidget(USTUHealthBarWidget&&); \
	NO_API USTUHealthBarWidget(const USTUHealthBarWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUHealthBarWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUHealthBarWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUHealthBarWidget)


#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthProgressBar() { return STRUCT_OFFSET(USTUHealthBarWidget, HealthProgressBar); } \
	FORCEINLINE static uint32 __PPO__PercentVisibilityThreshold() { return STRUCT_OFFSET(USTUHealthBarWidget, PercentVisibilityThreshold); } \
	FORCEINLINE static uint32 __PPO__PercentColorThreshold() { return STRUCT_OFFSET(USTUHealthBarWidget, PercentColorThreshold); } \
	FORCEINLINE static uint32 __PPO__GoodColor() { return STRUCT_OFFSET(USTUHealthBarWidget, GoodColor); } \
	FORCEINLINE static uint32 __PPO__BadColor() { return STRUCT_OFFSET(USTUHealthBarWidget, BadColor); }


#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_10_PROLOG
#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_INCLASS \
	Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USTUHealthBarWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_UI_STUHealthBarWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
