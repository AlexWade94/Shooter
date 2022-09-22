// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Components/STUWeaponFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUWeaponFXComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUWeaponFXComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUWeaponFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactData();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	void USTUWeaponFXComponent::StaticRegisterNativesUSTUWeaponFXComponent()
	{
	}
	UClass* Z_Construct_UClass_USTUWeaponFXComponent_NoRegister()
	{
		return USTUWeaponFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_USTUWeaponFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultImpactData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactDataMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ImpactDataMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUWeaponFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponFXComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/STUWeaponFXComponent.h" },
		{ "ModuleRelativePath", "Public/Components/STUWeaponFXComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_DefaultImpactData_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Components/STUWeaponFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_DefaultImpactData = { "DefaultImpactData", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUWeaponFXComponent, DefaultImpactData), Z_Construct_UScriptStruct_FImpactData, METADATA_PARAMS(Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_DefaultImpactData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_DefaultImpactData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_ImpactDataMap_ValueProp = { "ImpactDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FImpactData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_ImpactDataMap_Key_KeyProp = { "ImpactDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_ImpactDataMap_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Components/STUWeaponFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_ImpactDataMap = { "ImpactDataMap", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUWeaponFXComponent, ImpactDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_ImpactDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_ImpactDataMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUWeaponFXComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_DefaultImpactData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_ImpactDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_ImpactDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponFXComponent_Statics::NewProp_ImpactDataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUWeaponFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUWeaponFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUWeaponFXComponent_Statics::ClassParams = {
		&USTUWeaponFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUWeaponFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponFXComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USTUWeaponFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUWeaponFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUWeaponFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUWeaponFXComponent, 1903932798);
	template<> SHOOTER_API UClass* StaticClass<USTUWeaponFXComponent>()
	{
		return USTUWeaponFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUWeaponFXComponent(Z_Construct_UClass_USTUWeaponFXComponent, &USTUWeaponFXComponent::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUWeaponFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUWeaponFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
