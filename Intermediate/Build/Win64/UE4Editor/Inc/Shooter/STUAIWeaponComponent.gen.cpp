// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/STUAIWeaponComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUAIWeaponComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUAIWeaponComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUAIWeaponComponent();
	SHOOTER_API UClass* Z_Construct_UClass_USTUWeaponComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USTUAIWeaponComponent::StaticRegisterNativesUSTUAIWeaponComponent()
	{
	}
	UClass* Z_Construct_UClass_USTUAIWeaponComponent_NoRegister()
	{
		return USTUAIWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_USTUAIWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUAIWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USTUWeaponComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUAIWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AI/STUAIWeaponComponent.h" },
		{ "ModuleRelativePath", "Public/AI/STUAIWeaponComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUAIWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUAIWeaponComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUAIWeaponComponent_Statics::ClassParams = {
		&USTUAIWeaponComponent::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_USTUAIWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUAIWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUAIWeaponComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUAIWeaponComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUAIWeaponComponent, 3592083348);
	template<> SHOOTER_API UClass* StaticClass<USTUAIWeaponComponent>()
	{
		return USTUAIWeaponComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUAIWeaponComponent(Z_Construct_UClass_USTUAIWeaponComponent, &USTUAIWeaponComponent::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUAIWeaponComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUAIWeaponComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
