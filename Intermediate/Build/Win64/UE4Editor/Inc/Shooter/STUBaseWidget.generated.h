// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUBaseWidget_generated_h
#error "STUBaseWidget.generated.h already included, missing '#pragma once' in STUBaseWidget.h"
#endif
#define SHOOTER_STUBaseWidget_generated_h

#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_SPARSE_DATA
#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTUBaseWidget(); \
	friend struct Z_Construct_UClass_USTUBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USTUBaseWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUBaseWidget)


#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSTUBaseWidget(); \
	friend struct Z_Construct_UClass_USTUBaseWidget_Statics; \
public: \
	DECLARE_CLASS(USTUBaseWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUBaseWidget)


#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUBaseWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUBaseWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUBaseWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUBaseWidget(USTUBaseWidget&&); \
	NO_API USTUBaseWidget(const USTUBaseWidget&); \
public:


#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUBaseWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUBaseWidget(USTUBaseWidget&&); \
	NO_API USTUBaseWidget(const USTUBaseWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUBaseWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUBaseWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUBaseWidget)


#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShowAnimation() { return STRUCT_OFFSET(USTUBaseWidget, ShowAnimation); } \
	FORCEINLINE static uint32 __PPO__OpenSound() { return STRUCT_OFFSET(USTUBaseWidget, OpenSound); }


#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_11_PROLOG
#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_INCLASS \
	Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_SPARSE_DATA \
	Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_UI_STUBaseWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USTUBaseWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_UI_STUBaseWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
