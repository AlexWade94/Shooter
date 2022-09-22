// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/Service/STUChangeWeaponService.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUChangeWeaponService() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUChangeWeaponService_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUChangeWeaponService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USTUChangeWeaponService::StaticRegisterNativesUSTUChangeWeaponService()
	{
	}
	UClass* Z_Construct_UClass_USTUChangeWeaponService_NoRegister()
	{
		return USTUChangeWeaponService::StaticClass();
	}
	struct Z_Construct_UClass_USTUChangeWeaponService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Probability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUChangeWeaponService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUChangeWeaponService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AI/Service/STUChangeWeaponService.h" },
		{ "ModuleRelativePath", "Public/AI/Service/STUChangeWeaponService.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUChangeWeaponService_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "AI" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/AI/Service/STUChangeWeaponService.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTUChangeWeaponService_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUChangeWeaponService, Probability), METADATA_PARAMS(Z_Construct_UClass_USTUChangeWeaponService_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUChangeWeaponService_Statics::NewProp_Probability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUChangeWeaponService_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUChangeWeaponService_Statics::NewProp_Probability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUChangeWeaponService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUChangeWeaponService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUChangeWeaponService_Statics::ClassParams = {
		&USTUChangeWeaponService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUChangeWeaponService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUChangeWeaponService_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUChangeWeaponService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUChangeWeaponService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUChangeWeaponService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUChangeWeaponService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUChangeWeaponService, 1120506652);
	template<> SHOOTER_API UClass* StaticClass<USTUChangeWeaponService>()
	{
		return USTUChangeWeaponService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUChangeWeaponService(Z_Construct_UClass_USTUChangeWeaponService, &USTUChangeWeaponService::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUChangeWeaponService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUChangeWeaponService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
