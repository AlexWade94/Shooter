// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/STUGameOverWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUGameOverWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUGameOverWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUGameOverWidget();
	SHOOTER_API UClass* Z_Construct_UClass_USTUBaseWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USTUGameOverWidget::execOnResetLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResetLevel();
		P_NATIVE_END;
	}
	void USTUGameOverWidget::StaticRegisterNativesUSTUGameOverWidget()
	{
		UClass* Class = USTUGameOverWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResetLevel", &USTUGameOverWidget::execOnResetLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTUGameOverWidget_OnResetLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUGameOverWidget_OnResetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/STUGameOverWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUGameOverWidget_OnResetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUGameOverWidget, nullptr, "OnResetLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUGameOverWidget_OnResetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUGameOverWidget_OnResetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUGameOverWidget_OnResetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUGameOverWidget_OnResetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTUGameOverWidget_NoRegister()
	{
		return USTUGameOverWidget::StaticClass();
	}
	struct Z_Construct_UClass_USTUGameOverWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStatBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatRowWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerStatRowWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetLevelButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResetLevelButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUGameOverWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USTUBaseWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTUGameOverWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTUGameOverWidget_OnResetLevel, "OnResetLevel" }, // 1083798223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGameOverWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/STUGameOverWidget.h" },
		{ "ModuleRelativePath", "Public/UI/STUGameOverWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_PlayerStatBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/STUGameOverWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_PlayerStatBox = { "PlayerStatBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUGameOverWidget, PlayerStatBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_PlayerStatBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_PlayerStatBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_PlayerStatRowWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUGameOverWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_PlayerStatRowWidgetClass = { "PlayerStatRowWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUGameOverWidget, PlayerStatRowWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_PlayerStatRowWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_PlayerStatRowWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_ResetLevelButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/STUGameOverWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_ResetLevelButton = { "ResetLevelButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUGameOverWidget, ResetLevelButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_ResetLevelButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_ResetLevelButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUGameOverWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_PlayerStatBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_PlayerStatRowWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUGameOverWidget_Statics::NewProp_ResetLevelButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUGameOverWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUGameOverWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUGameOverWidget_Statics::ClassParams = {
		&USTUGameOverWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USTUGameOverWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameOverWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUGameOverWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameOverWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUGameOverWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUGameOverWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUGameOverWidget, 3255666023);
	template<> SHOOTER_API UClass* StaticClass<USTUGameOverWidget>()
	{
		return USTUGameOverWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUGameOverWidget(Z_Construct_UClass_USTUGameOverWidget, &USTUGameOverWidget::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUGameOverWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUGameOverWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
