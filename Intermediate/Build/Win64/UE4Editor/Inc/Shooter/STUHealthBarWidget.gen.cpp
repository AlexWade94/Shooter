// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/STUHealthBarWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUHealthBarWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUHealthBarWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUHealthBarWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void USTUHealthBarWidget::StaticRegisterNativesUSTUHealthBarWidget()
	{
	}
	UClass* Z_Construct_UClass_USTUHealthBarWidget_NoRegister()
	{
		return USTUHealthBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_USTUHealthBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentVisibilityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentVisibilityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentColorThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentColorThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoodColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoodColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BadColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUHealthBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUHealthBarWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/STUHealthBarWidget.h" },
		{ "ModuleRelativePath", "Public/UI/STUHealthBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/STUHealthBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUHealthBarWidget, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_HealthProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_HealthProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_PercentVisibilityThreshold_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUHealthBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_PercentVisibilityThreshold = { "PercentVisibilityThreshold", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUHealthBarWidget, PercentVisibilityThreshold), METADATA_PARAMS(Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_PercentVisibilityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_PercentVisibilityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_PercentColorThreshold_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUHealthBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_PercentColorThreshold = { "PercentColorThreshold", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUHealthBarWidget, PercentColorThreshold), METADATA_PARAMS(Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_PercentColorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_PercentColorThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_GoodColor_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUHealthBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_GoodColor = { "GoodColor", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUHealthBarWidget, GoodColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_GoodColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_GoodColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_BadColor_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUHealthBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_BadColor = { "BadColor", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUHealthBarWidget, BadColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_BadColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_BadColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUHealthBarWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_HealthProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_PercentVisibilityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_PercentColorThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_GoodColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUHealthBarWidget_Statics::NewProp_BadColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUHealthBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUHealthBarWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUHealthBarWidget_Statics::ClassParams = {
		&USTUHealthBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUHealthBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthBarWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUHealthBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUHealthBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUHealthBarWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUHealthBarWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUHealthBarWidget, 1842494008);
	template<> SHOOTER_API UClass* StaticClass<USTUHealthBarWidget>()
	{
		return USTUHealthBarWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUHealthBarWidget(Z_Construct_UClass_USTUHealthBarWidget, &USTUHealthBarWidget::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUHealthBarWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUHealthBarWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
