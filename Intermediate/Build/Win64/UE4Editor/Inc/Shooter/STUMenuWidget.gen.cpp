// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Menu/UI/STUMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUMenuWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUMenuWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUMenuWidget();
	SHOOTER_API UClass* Z_Construct_UClass_USTUBaseWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTULevelItemWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USTUMenuWidget::execOnQuitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUMenuWidget::execOnStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartGame();
		P_NATIVE_END;
	}
	void USTUMenuWidget::StaticRegisterNativesUSTUMenuWidget()
	{
		UClass* Class = USTUMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQuitGame", &USTUMenuWidget::execOnQuitGame },
			{ "OnStartGame", &USTUMenuWidget::execOnStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTUMenuWidget_OnQuitGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUMenuWidget_OnQuitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu/UI/STUMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUMenuWidget_OnQuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUMenuWidget, nullptr, "OnQuitGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUMenuWidget_OnQuitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUMenuWidget_OnQuitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUMenuWidget_OnQuitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUMenuWidget_OnQuitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUMenuWidget_OnStartGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUMenuWidget_OnStartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu/UI/STUMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUMenuWidget_OnStartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUMenuWidget, nullptr, "OnStartGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUMenuWidget_OnStartGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUMenuWidget_OnStartGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUMenuWidget_OnStartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUMenuWidget_OnStartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTUMenuWidget_NoRegister()
	{
		return USTUMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_USTUMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartGameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartGameButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitGameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitGameButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelItemsBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelItemsBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelItemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LevelItemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartGameSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartGameSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HideAnimation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelItemWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelItemWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelItemWidgets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USTUBaseWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTUMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTUMenuWidget_OnQuitGame, "OnQuitGame" }, // 1245547784
		{ &Z_Construct_UFunction_USTUMenuWidget_OnStartGame, "OnStartGame" }, // 1664847855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Menu/UI/STUMenuWidget.h" },
		{ "ModuleRelativePath", "Public/Menu/UI/STUMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_StartGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/UI/STUMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_StartGameButton = { "StartGameButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUMenuWidget, StartGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_StartGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_StartGameButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_QuitGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/UI/STUMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_QuitGameButton = { "QuitGameButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUMenuWidget, QuitGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_QuitGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_QuitGameButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemsBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/UI/STUMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemsBox = { "LevelItemsBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUMenuWidget, LevelItemsBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemsBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Menu/UI/STUMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgetClass = { "LevelItemWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUMenuWidget, LevelItemWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_StartGameSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Menu/UI/STUMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_StartGameSound = { "StartGameSound", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUMenuWidget, StartGameSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_StartGameSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_StartGameSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_HideAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/Menu/UI/STUMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_HideAnimation = { "HideAnimation", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUMenuWidget, HideAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_HideAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_HideAnimation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgets_Inner = { "LevelItemWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USTULevelItemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/UI/STUMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgets = { "LevelItemWidgets", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUMenuWidget, LevelItemWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_StartGameButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_QuitGameButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemsBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_StartGameSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_HideAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUMenuWidget_Statics::NewProp_LevelItemWidgets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUMenuWidget_Statics::ClassParams = {
		&USTUMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USTUMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUMenuWidget, 300018624);
	template<> SHOOTER_API UClass* StaticClass<USTUMenuWidget>()
	{
		return USTUMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUMenuWidget(Z_Construct_UClass_USTUMenuWidget, &USTUMenuWidget::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
