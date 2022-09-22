// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/STUAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUAIController() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASTUAIController_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASTUAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UClass* Z_Construct_UClass_USTUAIPerceptionComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTURespawnComponent_NoRegister();
// End Cross Module References
	void ASTUAIController::StaticRegisterNativesASTUAIController()
	{
	}
	UClass* Z_Construct_UClass_ASTUAIController_NoRegister()
	{
		return ASTUAIController::StaticClass();
	}
	struct Z_Construct_UClass_ASTUAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_STUAIPerceptionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_STUAIPerceptionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RespawnComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusOnKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FocusOnKeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/STUAIController.h" },
		{ "ModuleRelativePath", "Public/AI/STUAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUAIController_Statics::NewProp_STUAIPerceptionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STUAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUAIController_Statics::NewProp_STUAIPerceptionComponent = { "STUAIPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUAIController, STUAIPerceptionComponent), Z_Construct_UClass_USTUAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTUAIController_Statics::NewProp_STUAIPerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUAIController_Statics::NewProp_STUAIPerceptionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUAIController_Statics::NewProp_RespawnComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/STUAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUAIController_Statics::NewProp_RespawnComponent = { "RespawnComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUAIController, RespawnComponent), Z_Construct_UClass_USTURespawnComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTUAIController_Statics::NewProp_RespawnComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUAIController_Statics::NewProp_RespawnComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUAIController_Statics::NewProp_FocusOnKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/STUAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASTUAIController_Statics::NewProp_FocusOnKeyName = { "FocusOnKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUAIController, FocusOnKeyName), METADATA_PARAMS(Z_Construct_UClass_ASTUAIController_Statics::NewProp_FocusOnKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUAIController_Statics::NewProp_FocusOnKeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUAIController_Statics::NewProp_STUAIPerceptionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUAIController_Statics::NewProp_RespawnComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUAIController_Statics::NewProp_FocusOnKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTUAIController_Statics::ClassParams = {
		&ASTUAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTUAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTUAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTUAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTUAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTUAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTUAIController, 3057826207);
	template<> SHOOTER_API UClass* StaticClass<ASTUAIController>()
	{
		return ASTUAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTUAIController(Z_Construct_UClass_ASTUAIController, &ASTUAIController::StaticClass, TEXT("/Script/Shooter"), TEXT("ASTUAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
