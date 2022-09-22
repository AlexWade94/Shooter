// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/STUGameDataWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUGameDataWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUGameDataWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUGameDataWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	DEFINE_FUNCTION(USTUGameDataWidget::execGetRoundSecondsRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRoundSecondsRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUGameDataWidget::execGetTotalRoundsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalRoundsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUGameDataWidget::execGetCurrentRoundNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentRoundNum();
		P_NATIVE_END;
	}
	void USTUGameDataWidget::StaticRegisterNativesUSTUGameDataWidget()
	{
		UClass* Class = USTUGameDataWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentRoundNum", &USTUGameDataWidget::execGetCurrentRoundNum },
			{ "GetRoundSecondsRemaining", &USTUGameDataWidget::execGetRoundSecondsRemaining },
			{ "GetTotalRoundsNum", &USTUGameDataWidget::execGetTotalRoundsNum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics
	{
		struct STUGameDataWidget_eventGetCurrentRoundNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUGameDataWidget_eventGetCurrentRoundNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUGameDataWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUGameDataWidget, nullptr, "GetCurrentRoundNum", nullptr, nullptr, sizeof(STUGameDataWidget_eventGetCurrentRoundNum_Parms), Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics
	{
		struct STUGameDataWidget_eventGetRoundSecondsRemaining_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUGameDataWidget_eventGetRoundSecondsRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUGameDataWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUGameDataWidget, nullptr, "GetRoundSecondsRemaining", nullptr, nullptr, sizeof(STUGameDataWidget_eventGetRoundSecondsRemaining_Parms), Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics
	{
		struct STUGameDataWidget_eventGetTotalRoundsNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUGameDataWidget_eventGetTotalRoundsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUGameDataWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUGameDataWidget, nullptr, "GetTotalRoundsNum", nullptr, nullptr, sizeof(STUGameDataWidget_eventGetTotalRoundsNum_Parms), Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTUGameDataWidget_NoRegister()
	{
		return USTUGameDataWidget::StaticClass();
	}
	struct Z_Construct_UClass_USTUGameDataWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUGameDataWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTUGameDataWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTUGameDataWidget_GetCurrentRoundNum, "GetCurrentRoundNum" }, // 4017768575
		{ &Z_Construct_UFunction_USTUGameDataWidget_GetRoundSecondsRemaining, "GetRoundSecondsRemaining" }, // 2343742025
		{ &Z_Construct_UFunction_USTUGameDataWidget_GetTotalRoundsNum, "GetTotalRoundsNum" }, // 2901288422
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUGameDataWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/STUGameDataWidget.h" },
		{ "ModuleRelativePath", "Public/UI/STUGameDataWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUGameDataWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUGameDataWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUGameDataWidget_Statics::ClassParams = {
		&USTUGameDataWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUGameDataWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUGameDataWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUGameDataWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUGameDataWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUGameDataWidget, 2676968832);
	template<> SHOOTER_API UClass* StaticClass<USTUGameDataWidget>()
	{
		return USTUGameDataWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUGameDataWidget(Z_Construct_UClass_USTUGameDataWidget, &USTUGameDataWidget::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUGameDataWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUGameDataWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
