// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STULevelItemWidget_generated_h
#error "STULevelItemWidget.generated.h already included, missing '#pragma once' in STULevelItemWidget.h"
#endif
#define SHOOTER_STULevelItemWidget_generated_h

#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLevelItemUnhovered); \
	DECLARE_FUNCTION(execOnLevelItemHovered); \
	DECLARE_FUNCTION(execOnLevelItemClicked);


#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLevelItemUnhovered); \
	DECLARE_FUNCTION(execOnLevelItemHovered); \
	DECLARE_FUNCTION(execOnLevelItemClicked);


#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTULevelItemWidget(); \
	friend struct Z_Construct_UClass_USTULevelItemWidget_Statics; \
public: \
	DECLARE_CLASS(USTULevelItemWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTULevelItemWidget)


#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSTULevelItemWidget(); \
	friend struct Z_Construct_UClass_USTULevelItemWidget_Statics; \
public: \
	DECLARE_CLASS(USTULevelItemWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTULevelItemWidget)


#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTULevelItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTULevelItemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTULevelItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTULevelItemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTULevelItemWidget(USTULevelItemWidget&&); \
	NO_API USTULevelItemWidget(const USTULevelItemWidget&); \
public:


#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTULevelItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTULevelItemWidget(USTULevelItemWidget&&); \
	NO_API USTULevelItemWidget(const USTULevelItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTULevelItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTULevelItemWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTULevelItemWidget)


#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LevelSelectButton() { return STRUCT_OFFSET(USTULevelItemWidget, LevelSelectButton); } \
	FORCEINLINE static uint32 __PPO__LevelNameTextBlock() { return STRUCT_OFFSET(USTULevelItemWidget, LevelNameTextBlock); } \
	FORCEINLINE static uint32 __PPO__LevelImage() { return STRUCT_OFFSET(USTULevelItemWidget, LevelImage); } \
	FORCEINLINE static uint32 __PPO__FrameImage() { return STRUCT_OFFSET(USTULevelItemWidget, FrameImage); }


#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_15_PROLOG
#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_INCLASS \
	Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USTULevelItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Menu_UI_STULevelItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
