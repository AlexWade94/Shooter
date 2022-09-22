// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SHOOTER_STUProjectile_generated_h
#error "STUProjectile.generated.h already included, missing '#pragma once' in STUProjectile.h"
#endif
#define SHOOTER_STUProjectile_generated_h

#define Shooter_Source_Shooter_Public_STUProjectile_h_13_SPARSE_DATA
#define Shooter_Source_Shooter_Public_STUProjectile_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define Shooter_Source_Shooter_Public_STUProjectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define Shooter_Source_Shooter_Public_STUProjectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUProjectile(); \
	friend struct Z_Construct_UClass_ASTUProjectile_Statics; \
public: \
	DECLARE_CLASS(ASTUProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUProjectile)


#define Shooter_Source_Shooter_Public_STUProjectile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASTUProjectile(); \
	friend struct Z_Construct_UClass_ASTUProjectile_Statics; \
public: \
	DECLARE_CLASS(ASTUProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUProjectile)


#define Shooter_Source_Shooter_Public_STUProjectile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUProjectile(ASTUProjectile&&); \
	NO_API ASTUProjectile(const ASTUProjectile&); \
public:


#define Shooter_Source_Shooter_Public_STUProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUProjectile(ASTUProjectile&&); \
	NO_API ASTUProjectile(const ASTUProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTUProjectile)


#define Shooter_Source_Shooter_Public_STUProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(ASTUProjectile, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(ASTUProjectile, MovementComponent); } \
	FORCEINLINE static uint32 __PPO__DamageRadius() { return STRUCT_OFFSET(ASTUProjectile, DamageRadius); } \
	FORCEINLINE static uint32 __PPO__DamageAmount() { return STRUCT_OFFSET(ASTUProjectile, DamageAmount); } \
	FORCEINLINE static uint32 __PPO__DoFullDamage() { return STRUCT_OFFSET(ASTUProjectile, DoFullDamage); } \
	FORCEINLINE static uint32 __PPO__LifeSeconds() { return STRUCT_OFFSET(ASTUProjectile, LifeSeconds); } \
	FORCEINLINE static uint32 __PPO__WeaponFXComponent() { return STRUCT_OFFSET(ASTUProjectile, WeaponFXComponent); }


#define Shooter_Source_Shooter_Public_STUProjectile_h_10_PROLOG
#define Shooter_Source_Shooter_Public_STUProjectile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STUProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STUProjectile_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STUProjectile_h_13_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_STUProjectile_h_13_INCLASS \
	Shooter_Source_Shooter_Public_STUProjectile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_STUProjectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STUProjectile_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STUProjectile_h_13_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STUProjectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STUProjectile_h_13_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STUProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ASTUProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_STUProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
