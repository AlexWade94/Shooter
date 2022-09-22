// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Menu/UI/STULevelItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTULevelItemWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTULevelItemWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTULevelItemWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USTULevelItemWidget::execOnLevelItemUnhovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelItemUnhovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTULevelItemWidget::execOnLevelItemHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelItemHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTULevelItemWidget::execOnLevelItemClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelItemClicked();
		P_NATIVE_END;
	}
	void USTULevelItemWidget::StaticRegisterNativesUSTULevelItemWidget()
	{
		UClass* Class = USTULevelItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelItemClicked", &USTULevelItemWidget::execOnLevelItemClicked },
			{ "OnLevelItemHovered", &USTULevelItemWidget::execOnLevelItemHovered },
			{ "OnLevelItemUnhovered", &USTULevelItemWidget::execOnLevelItemUnhovered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu/UI/STULevelItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTULevelItemWidget, nullptr, "OnLevelItemClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemHovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu/UI/STULevelItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTULevelItemWidget, nullptr, "OnLevelItemHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemUnhovered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Menu/UI/STULevelItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTULevelItemWidget, nullptr, "OnLevelItemUnhovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTULevelItemWidget_NoRegister()
	{
		return USTULevelItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_USTULevelItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSelectButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSelectButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelNameTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelNameTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrameImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTULevelItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTULevelItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemClicked, "OnLevelItemClicked" }, // 1678406440
		{ &Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemHovered, "OnLevelItemHovered" }, // 2024768705
		{ &Z_Construct_UFunction_USTULevelItemWidget_OnLevelItemUnhovered, "OnLevelItemUnhovered" }, // 2336278446
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTULevelItemWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Menu/UI/STULevelItemWidget.h" },
		{ "ModuleRelativePath", "Public/Menu/UI/STULevelItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelSelectButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/UI/STULevelItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelSelectButton = { "LevelSelectButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTULevelItemWidget, LevelSelectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelSelectButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelSelectButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelNameTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/UI/STULevelItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelNameTextBlock = { "LevelNameTextBlock", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTULevelItemWidget, LevelNameTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelNameTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelNameTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/UI/STULevelItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelImage = { "LevelImage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTULevelItemWidget, LevelImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_FrameImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Menu/UI/STULevelItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_FrameImage = { "FrameImage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTULevelItemWidget, FrameImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_FrameImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_FrameImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTULevelItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelSelectButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelNameTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_LevelImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTULevelItemWidget_Statics::NewProp_FrameImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTULevelItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTULevelItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTULevelItemWidget_Statics::ClassParams = {
		&USTULevelItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USTULevelItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USTULevelItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTULevelItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTULevelItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTULevelItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTULevelItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTULevelItemWidget, 3753091779);
	template<> SHOOTER_API UClass* StaticClass<USTULevelItemWidget>()
	{
		return USTULevelItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTULevelItemWidget(Z_Construct_UClass_USTULevelItemWidget, &USTULevelItemWidget::StaticClass, TEXT("/Script/Shooter"), TEXT("USTULevelItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTULevelItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
