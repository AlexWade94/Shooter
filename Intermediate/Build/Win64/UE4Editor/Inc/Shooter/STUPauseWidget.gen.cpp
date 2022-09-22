// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/STUPauseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUPauseWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUPauseWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUPauseWidget();
	SHOOTER_API UClass* Z_Construct_UClass_USTUBaseWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USTUPauseWidget::execOnClearPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClearPause();
		P_NATIVE_END;
	}
	void USTUPauseWidget::StaticRegisterNativesUSTUPauseWidget()
	{
		UClass* Class = USTUPauseWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClearPause", &USTUPauseWidget::execOnClearPause },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTUPauseWidget_OnClearPause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPauseWidget_OnClearPause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/STUPauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPauseWidget_OnClearPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPauseWidget, nullptr, "OnClearPause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPauseWidget_OnClearPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPauseWidget_OnClearPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPauseWidget_OnClearPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPauseWidget_OnClearPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTUPauseWidget_NoRegister()
	{
		return USTUPauseWidget::StaticClass();
	}
	struct Z_Construct_UClass_USTUPauseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearPauseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClearPauseButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUPauseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USTUBaseWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTUPauseWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTUPauseWidget_OnClearPause, "OnClearPause" }, // 4287876122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUPauseWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/STUPauseWidget.h" },
		{ "ModuleRelativePath", "Public/UI/STUPauseWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUPauseWidget_Statics::NewProp_ClearPauseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/STUPauseWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUPauseWidget_Statics::NewProp_ClearPauseButton = { "ClearPauseButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUPauseWidget, ClearPauseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUPauseWidget_Statics::NewProp_ClearPauseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUPauseWidget_Statics::NewProp_ClearPauseButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUPauseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUPauseWidget_Statics::NewProp_ClearPauseButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUPauseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUPauseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUPauseWidget_Statics::ClassParams = {
		&USTUPauseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USTUPauseWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUPauseWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUPauseWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUPauseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUPauseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUPauseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUPauseWidget, 319535734);
	template<> SHOOTER_API UClass* StaticClass<USTUPauseWidget>()
	{
		return USTUPauseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUPauseWidget(Z_Construct_UClass_USTUPauseWidget, &USTUPauseWidget::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUPauseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUPauseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
