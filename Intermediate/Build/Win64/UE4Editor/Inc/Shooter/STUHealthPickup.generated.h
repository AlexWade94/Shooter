// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUHealthPickup_generated_h
#error "STUHealthPickup.generated.h already included, missing '#pragma once' in STUHealthPickup.h"
#endif
#define SHOOTER_STUHealthPickup_generated_h

#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUHealthPickup(); \
	friend struct Z_Construct_UClass_ASTUHealthPickup_Statics; \
public: \
	DECLARE_CLASS(ASTUHealthPickup, ASTUBasePickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUHealthPickup)


#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASTUHealthPickup(); \
	friend struct Z_Construct_UClass_ASTUHealthPickup_Statics; \
public: \
	DECLARE_CLASS(ASTUHealthPickup, ASTUBasePickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUHealthPickup)


#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUHealthPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUHealthPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUHealthPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUHealthPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUHealthPickup(ASTUHealthPickup&&); \
	NO_API ASTUHealthPickup(const ASTUHealthPickup&); \
public:


#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUHealthPickup() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUHealthPickup(ASTUHealthPickup&&); \
	NO_API ASTUHealthPickup(const ASTUHealthPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUHealthPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUHealthPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTUHealthPickup)


#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthAmount() { return STRUCT_OFFSET(ASTUHealthPickup, HealthAmount); }


#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_12_PROLOG
#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_INCLASS \
	Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ASTUHealthPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Pickups_STUHealthPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
