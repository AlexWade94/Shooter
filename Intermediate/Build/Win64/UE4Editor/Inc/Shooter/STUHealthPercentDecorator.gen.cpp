// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/Decorators/STUHealthPercentDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUHealthPercentDecorator() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUHealthPercentDecorator_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUHealthPercentDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USTUHealthPercentDecorator::StaticRegisterNativesUSTUHealthPercentDecorator()
	{
	}
	UClass* Z_Construct_UClass_USTUHealthPercentDecorator_NoRegister()
	{
		return USTUHealthPercentDecorator::StaticClass();
	}
	struct Z_Construct_UClass_USTUHealthPercentDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUHealthPercentDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUHealthPercentDecorator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Decorators/STUHealthPercentDecorator.h" },
		{ "ModuleRelativePath", "Public/AI/Decorators/STUHealthPercentDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUHealthPercentDecorator_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Decorators/STUHealthPercentDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTUHealthPercentDecorator_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUHealthPercentDecorator, HealthPercent), METADATA_PARAMS(Z_Construct_UClass_USTUHealthPercentDecorator_Statics::NewProp_HealthPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthPercentDecorator_Statics::NewProp_HealthPercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUHealthPercentDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUHealthPercentDecorator_Statics::NewProp_HealthPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUHealthPercentDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUHealthPercentDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUHealthPercentDecorator_Statics::ClassParams = {
		&USTUHealthPercentDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUHealthPercentDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthPercentDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUHealthPercentDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthPercentDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUHealthPercentDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUHealthPercentDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUHealthPercentDecorator, 291843570);
	template<> SHOOTER_API UClass* StaticClass<USTUHealthPercentDecorator>()
	{
		return USTUHealthPercentDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUHealthPercentDecorator(Z_Construct_UClass_USTUHealthPercentDecorator, &USTUHealthPercentDecorator::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUHealthPercentDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUHealthPercentDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
