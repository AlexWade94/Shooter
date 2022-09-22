// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_STUAIController_generated_h
#error "STUAIController.generated.h already included, missing '#pragma once' in STUAIController.h"
#endif
#define SHOOTER_STUAIController_generated_h

#define Shooter_Source_Shooter_Public_AI_STUAIController_h_14_SPARSE_DATA
#define Shooter_Source_Shooter_Public_AI_STUAIController_h_14_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_AI_STUAIController_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_AI_STUAIController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUAIController(); \
	friend struct Z_Construct_UClass_ASTUAIController_Statics; \
public: \
	DECLARE_CLASS(ASTUAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUAIController)


#define Shooter_Source_Shooter_Public_AI_STUAIController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASTUAIController(); \
	friend struct Z_Construct_UClass_ASTUAIController_Statics; \
public: \
	DECLARE_CLASS(ASTUAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTUAIController)


#define Shooter_Source_Shooter_Public_AI_STUAIController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUAIController(ASTUAIController&&); \
	NO_API ASTUAIController(const ASTUAIController&); \
public:


#define Shooter_Source_Shooter_Public_AI_STUAIController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUAIController(ASTUAIController&&); \
	NO_API ASTUAIController(const ASTUAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTUAIController)


#define Shooter_Source_Shooter_Public_AI_STUAIController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__STUAIPerceptionComponent() { return STRUCT_OFFSET(ASTUAIController, STUAIPerceptionComponent); } \
	FORCEINLINE static uint32 __PPO__RespawnComponent() { return STRUCT_OFFSET(ASTUAIController, RespawnComponent); } \
	FORCEINLINE static uint32 __PPO__FocusOnKeyName() { return STRUCT_OFFSET(ASTUAIController, FocusOnKeyName); }


#define Shooter_Source_Shooter_Public_AI_STUAIController_h_11_PROLOG
#define Shooter_Source_Shooter_Public_AI_STUAIController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_AI_STUAIController_h_14_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_AI_STUAIController_h_14_SPARSE_DATA \
	Shooter_Source_Shooter_Public_AI_STUAIController_h_14_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_AI_STUAIController_h_14_INCLASS \
	Shooter_Source_Shooter_Public_AI_STUAIController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_AI_STUAIController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_AI_STUAIController_h_14_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_AI_STUAIController_h_14_SPARSE_DATA \
	Shooter_Source_Shooter_Public_AI_STUAIController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_AI_STUAIController_h_14_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_AI_STUAIController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ASTUAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_AI_STUAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
