// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/Decorators/STUNeedAmmoDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUNeedAmmoDecorator() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUNeedAmmoDecorator_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUNeedAmmoDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ASTUBaseWeapon_NoRegister();
// End Cross Module References
	void USTUNeedAmmoDecorator::StaticRegisterNativesUSTUNeedAmmoDecorator()
	{
	}
	UClass* Z_Construct_UClass_USTUNeedAmmoDecorator_NoRegister()
	{
		return USTUNeedAmmoDecorator::StaticClass();
	}
	struct Z_Construct_UClass_USTUNeedAmmoDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Decorators/STUNeedAmmoDecorator.h" },
		{ "ModuleRelativePath", "Public/AI/Decorators/STUNeedAmmoDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Decorators/STUNeedAmmoDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUNeedAmmoDecorator, WeaponType), Z_Construct_UClass_ASTUBaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::NewProp_WeaponType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::NewProp_WeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUNeedAmmoDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::ClassParams = {
		&USTUNeedAmmoDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUNeedAmmoDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUNeedAmmoDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUNeedAmmoDecorator, 4294787113);
	template<> SHOOTER_API UClass* StaticClass<USTUNeedAmmoDecorator>()
	{
		return USTUNeedAmmoDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUNeedAmmoDecorator(Z_Construct_UClass_USTUNeedAmmoDecorator, &USTUNeedAmmoDecorator::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUNeedAmmoDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUNeedAmmoDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
