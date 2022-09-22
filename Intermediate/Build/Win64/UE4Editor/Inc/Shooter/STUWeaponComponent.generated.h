// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUWeaponComponent_generated_h
#error "STUWeaponComponent.generated.h already included, missing '#pragma once' in STUWeaponComponent.h"
#endif
#define SHOOTER_STUWeaponComponent_generated_h

#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_SPARSE_DATA
#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTUWeaponComponent(); \
	friend struct Z_Construct_UClass_USTUWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(USTUWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUWeaponComponent)


#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSTUWeaponComponent(); \
	friend struct Z_Construct_UClass_USTUWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(USTUWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUWeaponComponent)


#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUWeaponComponent(USTUWeaponComponent&&); \
	NO_API USTUWeaponComponent(const USTUWeaponComponent&); \
public:


#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUWeaponComponent(USTUWeaponComponent&&); \
	NO_API USTUWeaponComponent(const USTUWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USTUWeaponComponent)


#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponData() { return STRUCT_OFFSET(USTUWeaponComponent, WeaponData); } \
	FORCEINLINE static uint32 __PPO__WeaponEquipSocketName() { return STRUCT_OFFSET(USTUWeaponComponent, WeaponEquipSocketName); } \
	FORCEINLINE static uint32 __PPO__WeaponArmorySocketName() { return STRUCT_OFFSET(USTUWeaponComponent, WeaponArmorySocketName); } \
	FORCEINLINE static uint32 __PPO__EquipAnimMontage() { return STRUCT_OFFSET(USTUWeaponComponent, EquipAnimMontage); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(USTUWeaponComponent, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__Weapons() { return STRUCT_OFFSET(USTUWeaponComponent, Weapons); } \
	FORCEINLINE static uint32 __PPO__CurrentReloadAnimMontage() { return STRUCT_OFFSET(USTUWeaponComponent, CurrentReloadAnimMontage); }


#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_12_PROLOG
#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_INCLASS \
	Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STUWeaponComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USTUWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_STUWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
