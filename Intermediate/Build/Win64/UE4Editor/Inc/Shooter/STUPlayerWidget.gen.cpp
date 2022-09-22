// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/STUPlayerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUPlayerWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUPlayerWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUPlayerWidget();
	SHOOTER_API UClass* Z_Construct_UClass_USTUBaseWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(USTUPlayerWidget::execFormatBullets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BulletsNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->FormatBullets(Z_Param_BulletsNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUPlayerWidget::execGetKillsNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKillsNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUPlayerWidget::execIsPlayerSpectating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerSpectating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUPlayerWidget::execIsPlayerAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUPlayerWidget::execGetCurrentWeaponAmmoData)
	{
		P_GET_STRUCT_REF(FAmmoData,Z_Param_Out_AmmoData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentWeaponAmmoData(Z_Param_Out_AmmoData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUPlayerWidget::execGetCurrentWeaponUIData)
	{
		P_GET_STRUCT_REF(FWeaponUIData,Z_Param_Out_UIData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentWeaponUIData(Z_Param_Out_UIData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUPlayerWidget::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	static FName NAME_USTUPlayerWidget_OnTakeDamage = FName(TEXT("OnTakeDamage"));
	void USTUPlayerWidget::OnTakeDamage()
	{
		ProcessEvent(FindFunctionChecked(NAME_USTUPlayerWidget_OnTakeDamage),NULL);
	}
	void USTUPlayerWidget::StaticRegisterNativesUSTUPlayerWidget()
	{
		UClass* Class = USTUPlayerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FormatBullets", &USTUPlayerWidget::execFormatBullets },
			{ "GetCurrentWeaponAmmoData", &USTUPlayerWidget::execGetCurrentWeaponAmmoData },
			{ "GetCurrentWeaponUIData", &USTUPlayerWidget::execGetCurrentWeaponUIData },
			{ "GetHealthPercent", &USTUPlayerWidget::execGetHealthPercent },
			{ "GetKillsNum", &USTUPlayerWidget::execGetKillsNum },
			{ "IsPlayerAlive", &USTUPlayerWidget::execIsPlayerAlive },
			{ "IsPlayerSpectating", &USTUPlayerWidget::execIsPlayerSpectating },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics
	{
		struct STUPlayerWidget_eventFormatBullets_Parms
		{
			int32 BulletsNum;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BulletsNum;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::NewProp_BulletsNum = { "BulletsNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUPlayerWidget_eventFormatBullets_Parms, BulletsNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUPlayerWidget_eventFormatBullets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::NewProp_BulletsNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerWidget, nullptr, "FormatBullets", nullptr, nullptr, sizeof(STUPlayerWidget_eventFormatBullets_Parms), Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerWidget_FormatBullets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerWidget_FormatBullets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics
	{
		struct STUPlayerWidget_eventGetCurrentWeaponAmmoData_Parms
		{
			FAmmoData AmmoData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::NewProp_AmmoData = { "AmmoData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUPlayerWidget_eventGetCurrentWeaponAmmoData_Parms, AmmoData), Z_Construct_UScriptStruct_FAmmoData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUPlayerWidget_eventGetCurrentWeaponAmmoData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(STUPlayerWidget_eventGetCurrentWeaponAmmoData_Parms), &Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::NewProp_AmmoData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerWidget, nullptr, "GetCurrentWeaponAmmoData", nullptr, nullptr, sizeof(STUPlayerWidget_eventGetCurrentWeaponAmmoData_Parms), Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics
	{
		struct STUPlayerWidget_eventGetCurrentWeaponUIData_Parms
		{
			FWeaponUIData UIData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUPlayerWidget_eventGetCurrentWeaponUIData_Parms, UIData), Z_Construct_UScriptStruct_FWeaponUIData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUPlayerWidget_eventGetCurrentWeaponUIData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(STUPlayerWidget_eventGetCurrentWeaponUIData_Parms), &Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::NewProp_UIData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerWidget, nullptr, "GetCurrentWeaponUIData", nullptr, nullptr, sizeof(STUPlayerWidget_eventGetCurrentWeaponUIData_Parms), Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics
	{
		struct STUPlayerWidget_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUPlayerWidget_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerWidget, nullptr, "GetHealthPercent", nullptr, nullptr, sizeof(STUPlayerWidget_eventGetHealthPercent_Parms), Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics
	{
		struct STUPlayerWidget_eventGetKillsNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUPlayerWidget_eventGetKillsNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerWidget, nullptr, "GetKillsNum", nullptr, nullptr, sizeof(STUPlayerWidget_eventGetKillsNum_Parms), Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics
	{
		struct STUPlayerWidget_eventIsPlayerAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUPlayerWidget_eventIsPlayerAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(STUPlayerWidget_eventIsPlayerAlive_Parms), &Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerWidget, nullptr, "IsPlayerAlive", nullptr, nullptr, sizeof(STUPlayerWidget_eventIsPlayerAlive_Parms), Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics
	{
		struct STUPlayerWidget_eventIsPlayerSpectating_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((STUPlayerWidget_eventIsPlayerSpectating_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(STUPlayerWidget_eventIsPlayerSpectating_Parms), &Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerWidget, nullptr, "IsPlayerSpectating", nullptr, nullptr, sizeof(STUPlayerWidget_eventIsPlayerSpectating_Parms), Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUPlayerWidget_OnTakeDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUPlayerWidget_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUPlayerWidget_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUPlayerWidget, nullptr, "OnTakeDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUPlayerWidget_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUPlayerWidget_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUPlayerWidget_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUPlayerWidget_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTUPlayerWidget_NoRegister()
	{
		return USTUPlayerWidget::StaticClass();
	}
	struct Z_Construct_UClass_USTUPlayerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageAnimation;
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
	UObject* (*const Z_Construct_UClass_USTUPlayerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USTUBaseWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTUPlayerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTUPlayerWidget_FormatBullets, "FormatBullets" }, // 4006096047
		{ &Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponAmmoData, "GetCurrentWeaponAmmoData" }, // 3714246493
		{ &Z_Construct_UFunction_USTUPlayerWidget_GetCurrentWeaponUIData, "GetCurrentWeaponUIData" }, // 3341445032
		{ &Z_Construct_UFunction_USTUPlayerWidget_GetHealthPercent, "GetHealthPercent" }, // 936842670
		{ &Z_Construct_UFunction_USTUPlayerWidget_GetKillsNum, "GetKillsNum" }, // 3090507455
		{ &Z_Construct_UFunction_USTUPlayerWidget_IsPlayerAlive, "IsPlayerAlive" }, // 1735054482
		{ &Z_Construct_UFunction_USTUPlayerWidget_IsPlayerSpectating, "IsPlayerSpectating" }, // 4278198801
		{ &Z_Construct_UFunction_USTUPlayerWidget_OnTakeDamage, "OnTakeDamage" }, // 3595153138
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUPlayerWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/STUPlayerWidget.h" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUPlayerWidget, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_HealthProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_HealthProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_DamageAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_DamageAnimation = { "DamageAnimation", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUPlayerWidget, DamageAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_DamageAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_DamageAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_PercentColorThreshold_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_PercentColorThreshold = { "PercentColorThreshold", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUPlayerWidget, PercentColorThreshold), METADATA_PARAMS(Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_PercentColorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_PercentColorThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_GoodColor_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_GoodColor = { "GoodColor", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUPlayerWidget, GoodColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_GoodColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_GoodColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_BadColor_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/STUPlayerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_BadColor = { "BadColor", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUPlayerWidget, BadColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_BadColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_BadColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUPlayerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_HealthProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_DamageAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_PercentColorThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_GoodColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUPlayerWidget_Statics::NewProp_BadColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUPlayerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUPlayerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUPlayerWidget_Statics::ClassParams = {
		&USTUPlayerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USTUPlayerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUPlayerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUPlayerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUPlayerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUPlayerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUPlayerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUPlayerWidget, 1052222306);
	template<> SHOOTER_API UClass* StaticClass<USTUPlayerWidget>()
	{
		return USTUPlayerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUPlayerWidget(Z_Construct_UClass_USTUPlayerWidget, &USTUPlayerWidget::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUPlayerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUPlayerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
