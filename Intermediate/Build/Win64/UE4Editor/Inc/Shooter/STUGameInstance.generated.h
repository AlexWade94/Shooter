// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUGameInstance_generated_h
#error "STUGameInstance.generated.h already included, missing '#pragma once' in STUGameInstance.h"
#endif
#define SHOOTER_STUGameInstance_generated_h

#define Shooter_Source_Shooter_Public_STUGameInstance_h_15_SPARSE_DATA
#define Shooter_Source_Shooter_Public_STUGameInstance_h_15_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_STUGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_STUGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTUGameInstance(); \
	friend struct Z_Construct_UClass_USTUGameInstance_Statics; \
public: \
	DECLARE_CLASS(USTUGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUGameInstance)


#define Shooter_Source_Shooter_Public_STUGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSTUGameInstance(); \
	friend struct Z_Construct_UClass_USTUGameInstance_Statics; \
public: \
	DECLARE_CLASS(USTUGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USTUGameInstance)


#define Shooter_Source_Shooter_Public_STUGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUGameInstance(USTUGameInstance&&); \
	NO_API USTUGameInstance(const USTUGameInstance&); \
public:


#define Shooter_Source_Shooter_Public_STUGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUGameInstance(USTUGameInstance&&); \
	NO_API USTUGameInstance(const USTUGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUGameInstance)


#define Shooter_Source_Shooter_Public_STUGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LevelsData() { return STRUCT_OFFSET(USTUGameInstance, LevelsData); } \
	FORCEINLINE static uint32 __PPO__MenuLevelName() { return STRUCT_OFFSET(USTUGameInstance, MenuLevelName); } \
	FORCEINLINE static uint32 __PPO__MasterSoundClass() { return STRUCT_OFFSET(USTUGameInstance, MasterSoundClass); }


#define Shooter_Source_Shooter_Public_STUGameInstance_h_12_PROLOG
#define Shooter_Source_Shooter_Public_STUGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STUGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STUGameInstance_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STUGameInstance_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_STUGameInstance_h_15_INCLASS \
	Shooter_Source_Shooter_Public_STUGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_STUGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_STUGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_STUGameInstance_h_15_SPARSE_DATA \
	Shooter_Source_Shooter_Public_STUGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STUGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_STUGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USTUGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_STUGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
