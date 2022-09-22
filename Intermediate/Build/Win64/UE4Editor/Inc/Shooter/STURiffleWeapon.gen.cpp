// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/STURiffleWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTURiffleWeapon() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASTURiffleWeapon_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASTURiffleWeapon();
	SHOOTER_API UClass* Z_Construct_UClass_ASTUBaseWeapon();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUWeaponFXComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void ASTURiffleWeapon::StaticRegisterNativesASTURiffleWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASTURiffleWeapon_NoRegister()
	{
		return ASTURiffleWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASTURiffleWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponFXComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponFXComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceTargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TraceTargetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVZoomAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVZoomAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFXComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFXComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAudioComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTURiffleWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTUBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "STURiffleWeapon.h" },
		{ "ModuleRelativePath", "Public/STURiffleWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TimeBetweenShots_MetaData[] = {
		{ "Category", "STURiffleWeapon" },
		{ "ModuleRelativePath", "Public/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, TimeBetweenShots), METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TimeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TimeBetweenShots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_BulletSpread_MetaData[] = {
		{ "Category", "STURiffleWeapon" },
		{ "ModuleRelativePath", "Public/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_BulletSpread = { "BulletSpread", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, BulletSpread), METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_BulletSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "STURiffleWeapon" },
		{ "ModuleRelativePath", "Public/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, DamageAmount), METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_DamageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TraceFX_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TraceFX = { "TraceFX", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, TraceFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TraceFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TraceFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_WeaponFXComponent_MetaData[] = {
		{ "Category", "VFX" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_WeaponFXComponent = { "WeaponFXComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, WeaponFXComponent), Z_Construct_UClass_USTUWeaponFXComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_WeaponFXComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_WeaponFXComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TraceTargetName_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TraceTargetName = { "TraceTargetName", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, TraceTargetName), METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TraceTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TraceTargetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_FOVZoomAngle_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_FOVZoomAngle = { "FOVZoomAngle", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, FOVZoomAngle), METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_FOVZoomAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_FOVZoomAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_MuzzleFXComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_MuzzleFXComponent = { "MuzzleFXComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, MuzzleFXComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_MuzzleFXComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_MuzzleFXComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_FireAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STURiffleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_FireAudioComponent = { "FireAudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURiffleWeapon, FireAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_FireAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_FireAudioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTURiffleWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TimeBetweenShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_BulletSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TraceFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_WeaponFXComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_TraceTargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_FOVZoomAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_MuzzleFXComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURiffleWeapon_Statics::NewProp_FireAudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTURiffleWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTURiffleWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTURiffleWeapon_Statics::ClassParams = {
		&ASTURiffleWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTURiffleWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTURiffleWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURiffleWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTURiffleWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTURiffleWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTURiffleWeapon, 2544698344);
	template<> SHOOTER_API UClass* StaticClass<ASTURiffleWeapon>()
	{
		return ASTURiffleWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTURiffleWeapon(Z_Construct_UClass_ASTURiffleWeapon, &ASTURiffleWeapon::StaticClass, TEXT("/Script/Shooter"), TEXT("ASTURiffleWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTURiffleWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
