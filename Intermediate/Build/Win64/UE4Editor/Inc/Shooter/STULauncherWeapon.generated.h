// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STULauncherWeapon_generated_h
#error "STULauncherWeapon.generated.h already included, missing '#pragma once' in STULauncherWeapon.h"
#endif
#define SHOOTER_STULauncherWeapon_generated_h

#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_SPARSE_DATA
#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTULauncherWeapon(); \
	friend struct Z_Construct_UClass_ASTULauncherWeapon_Statics; \
public: \
	DECLARE_CLASS(ASTULauncherWeapon, ASTUBaseWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTULauncherWeapon)


#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASTULauncherWeapon(); \
	friend struct Z_Construct_UClass_ASTULauncherWeapon_Statics; \
public: \
	DECLARE_CLASS(ASTULauncherWeapon, ASTUBaseWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTULauncherWeapon)


#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTULauncherWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTULauncherWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTULauncherWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTULauncherWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTULauncherWeapon(ASTULauncherWeapon&&); \
	NO_API ASTULauncherWeapon(const ASTULauncherWeapon&); \
public:


#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTULauncherWeapon() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTULauncherWeapon(ASTULauncherWeapon&&); \
	NO_API ASTULauncherWeapon(const ASTULauncherWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTULauncherWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTULauncherWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTULauncherWeapon)


#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ASTULauncherWeapon, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__NoAmmoSound() { return STRUCT_OFFSET(ASTULauncherWeapon, NoAmmoSound); }


#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_14_PROLOG
#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_INCLASS \
	Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STULauncherWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ASTULauncherWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_STULauncherWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
