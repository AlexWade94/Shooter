// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STURiffleWeapon_generated_h
#error "STURiffleWeapon.generated.h already included, missing '#pragma once' in STURiffleWeapon.h"
#endif
#define SHOOTER_STURiffleWeapon_generated_h

#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_SPARSE_DATA
#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTURiffleWeapon(); \
	friend struct Z_Construct_UClass_ASTURiffleWeapon_Statics; \
public: \
	DECLARE_CLASS(ASTURiffleWeapon, ASTUBaseWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTURiffleWeapon)


#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASTURiffleWeapon(); \
	friend struct Z_Construct_UClass_ASTURiffleWeapon_Statics; \
public: \
	DECLARE_CLASS(ASTURiffleWeapon, ASTUBaseWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTURiffleWeapon)


#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTURiffleWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTURiffleWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTURiffleWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTURiffleWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTURiffleWeapon(ASTURiffleWeapon&&); \
	NO_API ASTURiffleWeapon(const ASTURiffleWeapon&); \
public:


#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTURiffleWeapon(ASTURiffleWeapon&&); \
	NO_API ASTURiffleWeapon(const ASTURiffleWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTURiffleWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTURiffleWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTURiffleWeapon)


#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeBetweenShots() { return STRUCT_OFFSET(ASTURiffleWeapon, TimeBetweenShots); } \
	FORCEINLINE static uint32 __PPO__BulletSpread() { return STRUCT_OFFSET(ASTURiffleWeapon, BulletSpread); } \
	FORCEINLINE static uint32 __PPO__DamageAmount() { return STRUCT_OFFSET(ASTURiffleWeapon, DamageAmount); } \
	FORCEINLINE static uint32 __PPO__TraceFX() { return STRUCT_OFFSET(ASTURiffleWeapon, TraceFX); } \
	FORCEINLINE static uint32 __PPO__WeaponFXComponent() { return STRUCT_OFFSET(ASTURiffleWeapon, WeaponFXComponent); } \
	FORCEINLINE static uint32 __PPO__TraceTargetName() { return STRUCT_OFFSET(ASTURiffleWeapon, TraceTargetName); } \
	FORCEINLINE static uint32 __PPO__FOVZoomAngle() { return STRUCT_OFFSET(ASTURiffleWeapon, FOVZoomAngle); } \
	FORCEINLINE static uint32 __PPO__MuzzleFXComponent() { return STRUCT_OFFSET(ASTURiffleWeapon, MuzzleFXComponent); } \
	FORCEINLINE static uint32 __PPO__FireAudioComponent() { return STRUCT_OFFSET(ASTURiffleWeapon, FireAudioComponent); }


#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_17_PROLOG
#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_INCLASS \
	Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STURiffleWeapon_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ASTURiffleWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_STURiffleWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
