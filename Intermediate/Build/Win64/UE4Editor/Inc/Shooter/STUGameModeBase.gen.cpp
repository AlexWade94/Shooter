// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/STUGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUGameModeBase() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASTUGameModeBase_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASTUGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FGameData();
// End Cross Module References
	void ASTUGameModeBase::StaticRegisterNativesASTUGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASTUGameModeBase_NoRegister()
	{
		return ASTUGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASTUGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AIControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AIPawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "STUGameModeBase.h" },
		{ "ModuleRelativePath", "STUGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_AIControllerClass_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "STUGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_AIControllerClass = { "AIControllerClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUGameModeBase, AIControllerClass), Z_Construct_UClass_AAIController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_AIControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_AIControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_AIPawnClass_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "STUGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_AIPawnClass = { "AIPawnClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUGameModeBase, AIPawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_AIPawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_AIPawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_GameData_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "STUGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_GameData = { "GameData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUGameModeBase, GameData), Z_Construct_UScriptStruct_FGameData, METADATA_PARAMS(Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_GameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_GameData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_AIControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_AIPawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUGameModeBase_Statics::NewProp_GameData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTUGameModeBase_Statics::ClassParams = {
		&ASTUGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTUGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTUGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASTUGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTUGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTUGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTUGameModeBase, 2168014489);
	template<> SHOOTER_API UClass* StaticClass<ASTUGameModeBase>()
	{
		return ASTUGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTUGameModeBase(Z_Construct_UClass_ASTUGameModeBase, &ASTUGameModeBase::StaticClass, TEXT("/Script/Shooter"), TEXT("ASTUGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
