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
struct FHitResult;
#ifdef SHOOTER_STUPlayerCharacter_generated_h
#error "STUPlayerCharacter.generated.h already included, missing '#pragma once' in STUPlayerCharacter.h"
#endif
#define SHOOTER_STUPlayerCharacter_generated_h

#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_SPARSE_DATA
#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCameraCollisionEndOverlap); \
	DECLARE_FUNCTION(execOnCameraCollisionBeginOverlap);


#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCameraCollisionEndOverlap); \
	DECLARE_FUNCTION(execOnCameraCollisionBeginOverlap);


#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUPlayerCharacter(); \
	friend struct Z_Construct_UClass_ASTUPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASTUPlayerCharacter, ASTUBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUPlayerCharacter)


#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASTUPlayerCharacter(); \
	friend struct Z_Construct_UClass_ASTUPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASTUPlayerCharacter, ASTUBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUPlayerCharacter)


#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUPlayerCharacter(ASTUPlayerCharacter&&); \
	NO_API ASTUPlayerCharacter(const ASTUPlayerCharacter&); \
public:


#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUPlayerCharacter(ASTUPlayerCharacter&&); \
	NO_API ASTUPlayerCharacter(const ASTUPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUPlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUPlayerCharacter)


#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ASTUPlayerCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(ASTUPlayerCharacter, SpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__CameraCollisionComponent() { return STRUCT_OFFSET(ASTUPlayerCharacter, CameraCollisionComponent); }


#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_13_PROLOG
#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_INCLASS \
	Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_SPARSE_DATA \
	Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ASTUPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Player_STUPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
