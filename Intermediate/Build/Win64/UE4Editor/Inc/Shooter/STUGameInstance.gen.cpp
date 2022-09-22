// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/STUGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUGameInstance() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUGameInstance_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelData();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	void USTUGameInstance::StaticRegisterNativesUSTUGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USTUGameInstance_NoRegister()
	{
		return USTUGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USTUGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuLevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterSoundClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STUGameInstance.h" },
		{ "ModuleRelativePath", "Public/STUGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUGameInstance_Statics::NewProp_LevelsData_Inner = { "LevelsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLevelData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGameInstance_Statics::NewProp_LevelsData_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/STUGameInstance.h" },
		{ "ToolTip", "Level names must be unique!" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USTUGameInstance_Statics::NewProp_LevelsData = { "LevelsData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUGameInstance, LevelsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USTUGameInstance_Statics::NewProp_LevelsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameInstance_Statics::NewProp_LevelsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGameInstance_Statics::NewProp_MenuLevelName_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/STUGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTUGameInstance_Statics::NewProp_MenuLevelName = { "MenuLevelName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUGameInstance, MenuLevelName), METADATA_PARAMS(Z_Construct_UClass_USTUGameInstance_Statics::NewProp_MenuLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameInstance_Statics::NewProp_MenuLevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGameInstance_Statics::NewProp_MasterSoundClass_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/STUGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUGameInstance_Statics::NewProp_MasterSoundClass = { "MasterSoundClass", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUGameInstance, MasterSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUGameInstance_Statics::NewProp_MasterSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameInstance_Statics::NewProp_MasterSoundClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUGameInstance_Statics::NewProp_LevelsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUGameInstance_Statics::NewProp_LevelsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUGameInstance_Statics::NewProp_MenuLevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUGameInstance_Statics::NewProp_MasterSoundClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUGameInstance_Statics::ClassParams = {
		&USTUGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USTUGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUGameInstance, 2181313396);
	template<> SHOOTER_API UClass* StaticClass<USTUGameInstance>()
	{
		return USTUGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUGameInstance(Z_Construct_UClass_USTUGameInstance, &USTUGameInstance::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
