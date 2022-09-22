// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/EQS/EnvQueryTest_PickupCouldBeTaken.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_PickupCouldBeTaken() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void UEnvQueryTest_PickupCouldBeTaken::StaticRegisterNativesUEnvQueryTest_PickupCouldBeTaken()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken_NoRegister()
	{
		return UEnvQueryTest_PickupCouldBeTaken::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/EQS/EnvQueryTest_PickupCouldBeTaken.h" },
		{ "ModuleRelativePath", "Public/AI/EQS/EnvQueryTest_PickupCouldBeTaken.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_PickupCouldBeTaken>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken_Statics::ClassParams = {
		&UEnvQueryTest_PickupCouldBeTaken::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest_PickupCouldBeTaken, 397577848);
	template<> SHOOTER_API UClass* StaticClass<UEnvQueryTest_PickupCouldBeTaken>()
	{
		return UEnvQueryTest_PickupCouldBeTaken::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_PickupCouldBeTaken(Z_Construct_UClass_UEnvQueryTest_PickupCouldBeTaken, &UEnvQueryTest_PickupCouldBeTaken::StaticClass, TEXT("/Script/Shooter"), TEXT("UEnvQueryTest_PickupCouldBeTaken"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_PickupCouldBeTaken);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
