// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUAmmoPickup_generated_h
#error "STUAmmoPickup.generated.h already included, missing '#pragma once' in STUAmmoPickup.h"
#endif
#define SHOOTER_STUAmmoPickup_generated_h

#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUAmmoPickup(); \
	friend struct Z_Construct_UClass_ASTUAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(ASTUAmmoPickup, ASTUBasePickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUAmmoPickup)


#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASTUAmmoPickup(); \
	friend struct Z_Construct_UClass_ASTUAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(ASTUAmmoPickup, ASTUBasePickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUAmmoPickup)


#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUAmmoPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUAmmoPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUAmmoPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUAmmoPickup(ASTUAmmoPickup&&); \
	NO_API ASTUAmmoPickup(const ASTUAmmoPickup&); \
public:


#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUAmmoPickup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUAmmoPickup(ASTUAmmoPickup&&); \
	NO_API ASTUAmmoPickup(const ASTUAmmoPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUAmmoPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTUAmmoPickup)


#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ClipsAmount() { return STRUCT_OFFSET(ASTUAmmoPickup, ClipsAmount); } \
	FORCEINLINE static uint32 __PPO__WeaponType() { return STRUCT_OFFSET(ASTUAmmoPickup, WeaponType); }


#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_13_PROLOG
#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_INCLASS \
	Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ASTUAmmoPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Pickups_STUAmmoPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
