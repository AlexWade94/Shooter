// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Dev/STUFireDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUFireDamageType() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUFireDamageType_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUFireDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USTUFireDamageType::StaticRegisterNativesUSTUFireDamageType()
	{
	}
	UClass* Z_Construct_UClass_USTUFireDamageType_NoRegister()
	{
		return USTUFireDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USTUFireDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUFireDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUFireDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Dev/STUFireDamageType.h" },
		{ "ModuleRelativePath", "Public/Dev/STUFireDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUFireDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUFireDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUFireDamageType_Statics::ClassParams = {
		&USTUFireDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUFireDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUFireDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUFireDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUFireDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUFireDamageType, 273022992);
	template<> SHOOTER_API UClass* StaticClass<USTUFireDamageType>()
	{
		return USTUFireDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUFireDamageType(Z_Construct_UClass_USTUFireDamageType, &USTUFireDamageType::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUFireDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUFireDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
