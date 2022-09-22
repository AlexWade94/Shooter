// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Pickups/STUAmmoPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUAmmoPickup() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASTUAmmoPickup_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASTUAmmoPickup();
	SHOOTER_API UClass* Z_Construct_UClass_ASTUBasePickup();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ASTUBaseWeapon_NoRegister();
// End Cross Module References
	void ASTUAmmoPickup::StaticRegisterNativesASTUAmmoPickup()
	{
	}
	UClass* Z_Construct_UClass_ASTUAmmoPickup_NoRegister()
	{
		return ASTUAmmoPickup::StaticClass();
	}
	struct Z_Construct_UClass_ASTUAmmoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipsAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClipsAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUAmmoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTUBasePickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUAmmoPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickups/STUAmmoPickup.h" },
		{ "ModuleRelativePath", "Public/Pickups/STUAmmoPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUAmmoPickup_Statics::NewProp_ClipsAmount_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Pickups/STUAmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASTUAmmoPickup_Statics::NewProp_ClipsAmount = { "ClipsAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUAmmoPickup, ClipsAmount), METADATA_PARAMS(Z_Construct_UClass_ASTUAmmoPickup_Statics::NewProp_ClipsAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUAmmoPickup_Statics::NewProp_ClipsAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUAmmoPickup_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Pickups/STUAmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASTUAmmoPickup_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUAmmoPickup, WeaponType), Z_Construct_UClass_ASTUBaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASTUAmmoPickup_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUAmmoPickup_Statics::NewProp_WeaponType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUAmmoPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUAmmoPickup_Statics::NewProp_ClipsAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUAmmoPickup_Statics::NewProp_WeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUAmmoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUAmmoPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTUAmmoPickup_Statics::ClassParams = {
		&ASTUAmmoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTUAmmoPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTUAmmoPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTUAmmoPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUAmmoPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTUAmmoPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTUAmmoPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTUAmmoPickup, 209875542);
	template<> SHOOTER_API UClass* StaticClass<ASTUAmmoPickup>()
	{
		return ASTUAmmoPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTUAmmoPickup(Z_Construct_UClass_ASTUAmmoPickup, &ASTUAmmoPickup::StaticClass, TEXT("/Script/Shooter"), TEXT("ASTUAmmoPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUAmmoPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
