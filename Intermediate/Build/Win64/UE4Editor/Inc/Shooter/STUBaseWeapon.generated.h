// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUBaseWeapon_generated_h
#error "STUBaseWeapon.generated.h already included, missing '#pragma once' in STUBaseWeapon.h"
#endif
#define SHOOTER_STUBaseWeapon_generated_h

#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_SPARSE_DATA
#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUBaseWeapon(); \
	friend struct Z_Construct_UClass_ASTUBaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ASTUBaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUBaseWeapon)


#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASTUBaseWeapon(); \
	friend struct Z_Construct_UClass_ASTUBaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ASTUBaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUBaseWeapon)


#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUBaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUBaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUBaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUBaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUBaseWeapon(ASTUBaseWeapon&&); \
	NO_API ASTUBaseWeapon(const ASTUBaseWeapon&); \
public:


#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUBaseWeapon(ASTUBaseWeapon&&); \
	NO_API ASTUBaseWeapon(const ASTUBaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUBaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUBaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTUBaseWeapon)


#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMeshComponent() { return STRUCT_OFFSET(ASTUBaseWeapon, WeaponMeshComponent); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ASTUBaseWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TraceMaxDistance() { return STRUCT_OFFSET(ASTUBaseWeapon, TraceMaxDistance); } \
	FORCEINLINE static uint32 __PPO__DefaultAmmo() { return STRUCT_OFFSET(ASTUBaseWeapon, DefaultAmmo); } \
	FORCEINLINE static uint32 __PPO__UIData() { return STRUCT_OFFSET(ASTUBaseWeapon, UIData); } \
	FORCEINLINE static uint32 __PPO__MuzzleFX() { return STRUCT_OFFSET(ASTUBaseWeapon, MuzzleFX); } \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(ASTUBaseWeapon, FireSound); }


#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_12_PROLOG
#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_INCLASS \
	Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STUBaseWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ASTUBaseWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_STUBaseWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
