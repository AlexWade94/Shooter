// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUMenuWidget_generated_h
#error "STUMenuWidget.generated.h already included, missing '#pragma once' in STUMenuWidget.h"
#endif
#define SHOOTER_STUMenuWidget_generated_h

#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitGame); \
	DECLARE_FUNCTION(execOnStartGame);


#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitGame); \
	DECLARE_FUNCTION(execOnStartGame);


#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTUMenuWidget(); \
	friend struct Z_Construct_UClass_USTUMenuWidget_Statics; \
public: \
	DECLARE_CLASS(USTUMenuWidget, USTUBaseWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUMenuWidget)


#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSTUMenuWidget(); \
	friend struct Z_Construct_UClass_USTUMenuWidget_Statics; \
public: \
	DECLARE_CLASS(USTUMenuWidget, USTUBaseWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUMenuWidget)


#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUMenuWidget(USTUMenuWidget&&); \
	NO_API USTUMenuWidget(const USTUMenuWidget&); \
public:


#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUMenuWidget(USTUMenuWidget&&); \
	NO_API USTUMenuWidget(const USTUMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUMenuWidget)


#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartGameButton() { return STRUCT_OFFSET(USTUMenuWidget, StartGameButton); } \
	FORCEINLINE static uint32 __PPO__QuitGameButton() { return STRUCT_OFFSET(USTUMenuWidget, QuitGameButton); } \
	FORCEINLINE static uint32 __PPO__LevelItemsBox() { return STRUCT_OFFSET(USTUMenuWidget, LevelItemsBox); } \
	FORCEINLINE static uint32 __PPO__LevelItemWidgetClass() { return STRUCT_OFFSET(USTUMenuWidget, LevelItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO__StartGameSound() { return STRUCT_OFFSET(USTUMenuWidget, StartGameSound); } \
	FORCEINLINE static uint32 __PPO__HideAnimation() { return STRUCT_OFFSET(USTUMenuWidget, HideAnimation); } \
	FORCEINLINE static uint32 __PPO__LevelItemWidgets() { return STRUCT_OFFSET(USTUMenuWidget, LevelItemWidgets); }


#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_15_PROLOG
#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_INCLASS \
	Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USTUMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Menu_UI_STUMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
