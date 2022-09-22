// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Menu/STUMenuPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUMenuPlayerController() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASTUMenuPlayerController_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASTUMenuPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ASTUMenuPlayerController::StaticRegisterNativesASTUMenuPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASTUMenuPlayerController_NoRegister()
	{
		return ASTUMenuPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASTUMenuPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUMenuPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUMenuPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Menu/STUMenuPlayerController.h" },
		{ "ModuleRelativePath", "Public/Menu/STUMenuPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUMenuPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUMenuPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTUMenuPlayerController_Statics::ClassParams = {
		&ASTUMenuPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTUMenuPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUMenuPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTUMenuPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTUMenuPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTUMenuPlayerController, 3714166161);
	template<> SHOOTER_API UClass* StaticClass<ASTUMenuPlayerController>()
	{
		return ASTUMenuPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTUMenuPlayerController(Z_Construct_UClass_ASTUMenuPlayerController, &ASTUMenuPlayerController::StaticClass, TEXT("/Script/Shooter"), TEXT("ASTUMenuPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUMenuPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
