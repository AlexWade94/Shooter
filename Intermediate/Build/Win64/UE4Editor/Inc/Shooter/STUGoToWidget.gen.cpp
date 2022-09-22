// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/STUGoToWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUGoToWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUGoToWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUGoToWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USTUGoToWidget::execOnGoToMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGoToMenu();
		P_NATIVE_END;
	}
	void USTUGoToWidget::StaticRegisterNativesUSTUGoToWidget()
	{
		UClass* Class = USTUGoToWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGoToMenu", &USTUGoToWidget::execOnGoToMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTUGoToWidget_OnGoToMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUGoToWidget_OnGoToMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/STUGoToWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUGoToWidget_OnGoToMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUGoToWidget, nullptr, "OnGoToMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUGoToWidget_OnGoToMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUGoToWidget_OnGoToMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUGoToWidget_OnGoToMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUGoToWidget_OnGoToMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTUGoToWidget_NoRegister()
	{
		return USTUGoToWidget::StaticClass();
	}
	struct Z_Construct_UClass_USTUGoToWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoToMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoToMenuButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUGoToWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTUGoToWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTUGoToWidget_OnGoToMenu, "OnGoToMenu" }, // 4090269040
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGoToWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/STUGoToWidget.h" },
		{ "ModuleRelativePath", "Public/UI/STUGoToWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGoToWidget_Statics::NewProp_GoToMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/STUGoToWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUGoToWidget_Statics::NewProp_GoToMenuButton = { "GoToMenuButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUGoToWidget, GoToMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUGoToWidget_Statics::NewProp_GoToMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGoToWidget_Statics::NewProp_GoToMenuButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUGoToWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUGoToWidget_Statics::NewProp_GoToMenuButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUGoToWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUGoToWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUGoToWidget_Statics::ClassParams = {
		&USTUGoToWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USTUGoToWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUGoToWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUGoToWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGoToWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUGoToWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUGoToWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUGoToWidget, 1311190567);
	template<> SHOOTER_API UClass* StaticClass<USTUGoToWidget>()
	{
		return USTUGoToWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUGoToWidget(Z_Construct_UClass_USTUGoToWidget, &USTUGoToWidget::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUGoToWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUGoToWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
