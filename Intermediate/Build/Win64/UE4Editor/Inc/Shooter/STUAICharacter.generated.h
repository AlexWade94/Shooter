// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUAICharacter_generated_h
#error "STUAICharacter.generated.h already included, missing '#pragma once' in STUAICharacter.h"
#endif
#define SHOOTER_STUAICharacter_generated_h

#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_SPARSE_DATA
#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUAICharacter(); \
	friend struct Z_Construct_UClass_ASTUAICharacter_Statics; \
public: \
	DECLARE_CLASS(ASTUAICharacter, ASTUBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUAICharacter)


#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASTUAICharacter(); \
	friend struct Z_Construct_UClass_ASTUAICharacter_Statics; \
public: \
	DECLARE_CLASS(ASTUAICharacter, ASTUBaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUAICharacter)


#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUAICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUAICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUAICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUAICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUAICharacter(ASTUAICharacter&&); \
	NO_API ASTUAICharacter(const ASTUAICharacter&); \
public:


#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUAICharacter(ASTUAICharacter&&); \
	NO_API ASTUAICharacter(const ASTUAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUAICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUAICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUAICharacter)


#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthWidgetComponent() { return STRUCT_OFFSET(ASTUAICharacter, HealthWidgetComponent); } \
	FORCEINLINE static uint32 __PPO__HealthVisibilityDistance() { return STRUCT_OFFSET(ASTUAICharacter, HealthVisibilityDistance); }


#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_11_PROLOG
#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_SPARSE_DATA \
	Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_INCLASS \
	Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_SPARSE_DATA \
	Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_AI_STUAICharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ASTUAICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_AI_STUAICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
