// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/Service/STUFindEnemyService.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUFindEnemyService() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUFindEnemyService_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUFindEnemyService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USTUFindEnemyService::StaticRegisterNativesUSTUFindEnemyService()
	{
	}
	UClass* Z_Construct_UClass_USTUFindEnemyService_NoRegister()
	{
		return USTUFindEnemyService::StaticClass();
	}
	struct Z_Construct_UClass_USTUFindEnemyService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyActorKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyActorKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUFindEnemyService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUFindEnemyService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AI/Service/STUFindEnemyService.h" },
		{ "ModuleRelativePath", "Public/AI/Service/STUFindEnemyService.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUFindEnemyService_Statics::NewProp_EnemyActorKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Service/STUFindEnemyService.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUFindEnemyService_Statics::NewProp_EnemyActorKey = { "EnemyActorKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUFindEnemyService, EnemyActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USTUFindEnemyService_Statics::NewProp_EnemyActorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUFindEnemyService_Statics::NewProp_EnemyActorKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUFindEnemyService_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUFindEnemyService_Statics::NewProp_EnemyActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUFindEnemyService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUFindEnemyService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUFindEnemyService_Statics::ClassParams = {
		&USTUFindEnemyService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUFindEnemyService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUFindEnemyService_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUFindEnemyService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUFindEnemyService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUFindEnemyService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUFindEnemyService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUFindEnemyService, 891422520);
	template<> SHOOTER_API UClass* StaticClass<USTUFindEnemyService>()
	{
		return USTUFindEnemyService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUFindEnemyService(Z_Construct_UClass_USTUFindEnemyService, &USTUFindEnemyService::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUFindEnemyService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUFindEnemyService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
