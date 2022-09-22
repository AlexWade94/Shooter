// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUCoreTypes_generated_h
#error "STUCoreTypes.generated.h already included, missing '#pragma once' in STUCoreTypes.h"
#endif
#define SHOOTER_STUCoreTypes_generated_h

#define Shooter_Source_Shooter_Public_STUCoreTypes_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FLevelData>();

#define Shooter_Source_Shooter_Public_STUCoreTypes_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FGameData>();

#define Shooter_Source_Shooter_Public_STUCoreTypes_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImpactData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FImpactData>();

#define Shooter_Source_Shooter_Public_STUCoreTypes_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDecalData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FDecalData>();

#define Shooter_Source_Shooter_Public_STUCoreTypes_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponUIData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FWeaponUIData>();

#define Shooter_Source_Shooter_Public_STUCoreTypes_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FWeaponData>();

#define Shooter_Source_Shooter_Public_STUCoreTypes_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAmmoData_Statics; \
	SHOOTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTER_API UScriptStruct* StaticStruct<struct FAmmoData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_STUCoreTypes_h


#define FOREACH_ENUM_ESTUMATCHSTATE(op) \
	op(ESTUMatchState::WaitingToStart) \
	op(ESTUMatchState::InProgress) \
	op(ESTUMatchState::Pause) \
	op(ESTUMatchState::GameOver) 

enum class ESTUMatchState : uint8;
template<> SHOOTER_API UEnum* StaticEnum<ESTUMatchState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
