// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/EQS/STUEnemyEnvQueryContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUEnemyEnvQueryContext() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUEnemyEnvQueryContext_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUEnemyEnvQueryContext();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USTUEnemyEnvQueryContext::StaticRegisterNativesUSTUEnemyEnvQueryContext()
	{
	}
	UClass* Z_Construct_UClass_USTUEnemyEnvQueryContext_NoRegister()
	{
		return USTUEnemyEnvQueryContext::StaticClass();
	}
	struct Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActorKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EnemyActorKeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/EQS/STUEnemyEnvQueryContext.h" },
		{ "ModuleRelativePath", "Public/AI/EQS/STUEnemyEnvQueryContext.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/EQS/STUEnemyEnvQueryContext.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName = { "EnemyActorKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUEnemyEnvQueryContext, EnemyActorKeyName), METADATA_PARAMS(Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUEnemyEnvQueryContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::ClassParams = {
		&USTUEnemyEnvQueryContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUEnemyEnvQueryContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUEnemyEnvQueryContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUEnemyEnvQueryContext, 3273877348);
	template<> SHOOTER_API UClass* StaticClass<USTUEnemyEnvQueryContext>()
	{
		return USTUEnemyEnvQueryContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUEnemyEnvQueryContext(Z_Construct_UClass_USTUEnemyEnvQueryContext, &USTUEnemyEnvQueryContext::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUEnemyEnvQueryContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUEnemyEnvQueryContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
