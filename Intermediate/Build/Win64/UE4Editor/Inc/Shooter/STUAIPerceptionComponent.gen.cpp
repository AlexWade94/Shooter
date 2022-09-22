// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Components/STUAIPerceptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUAIPerceptionComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUAIPerceptionComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUAIPerceptionComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USTUAIPerceptionComponent::StaticRegisterNativesUSTUAIPerceptionComponent()
	{
	}
	UClass* Z_Construct_UClass_USTUAIPerceptionComponent_NoRegister()
	{
		return USTUAIPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USTUAIPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUAIPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIPerceptionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUAIPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "Components/STUAIPerceptionComponent.h" },
		{ "ModuleRelativePath", "Public/Components/STUAIPerceptionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUAIPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUAIPerceptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUAIPerceptionComponent_Statics::ClassParams = {
		&USTUAIPerceptionComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USTUAIPerceptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUAIPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUAIPerceptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUAIPerceptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUAIPerceptionComponent, 4083091301);
	template<> SHOOTER_API UClass* StaticClass<USTUAIPerceptionComponent>()
	{
		return USTUAIPerceptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUAIPerceptionComponent(Z_Construct_UClass_USTUAIPerceptionComponent, &USTUAIPerceptionComponent::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUAIPerceptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUAIPerceptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
