// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Sound/STUSoundFuncLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUSoundFuncLib() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUSoundFuncLib_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUSoundFuncLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USTUSoundFuncLib::execToggleSoundClassVolume)
	{
		P_GET_OBJECT(USoundClass,Z_Param_SoundClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		USTUSoundFuncLib::ToggleSoundClassVolume(Z_Param_SoundClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USTUSoundFuncLib::execSetSoundClassVolume)
	{
		P_GET_OBJECT(USoundClass,Z_Param_SoundClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		USTUSoundFuncLib::SetSoundClassVolume(Z_Param_SoundClass,Z_Param_Volume);
		P_NATIVE_END;
	}
	void USTUSoundFuncLib::StaticRegisterNativesUSTUSoundFuncLib()
	{
		UClass* Class = USTUSoundFuncLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSoundClassVolume", &USTUSoundFuncLib::execSetSoundClassVolume },
			{ "ToggleSoundClassVolume", &USTUSoundFuncLib::execToggleSoundClassVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics
	{
		struct STUSoundFuncLib_eventSetSoundClassVolume_Parms
		{
			USoundClass* SoundClass;
			float Volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUSoundFuncLib_eventSetSoundClassVolume_Parms, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUSoundFuncLib_eventSetSoundClassVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::NewProp_SoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/STUSoundFuncLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUSoundFuncLib, nullptr, "SetSoundClassVolume", nullptr, nullptr, sizeof(STUSoundFuncLib_eventSetSoundClassVolume_Parms), Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics
	{
		struct STUSoundFuncLib_eventToggleSoundClassVolume_Parms
		{
			USoundClass* SoundClass;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(STUSoundFuncLib_eventToggleSoundClassVolume_Parms, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics::NewProp_SoundClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/STUSoundFuncLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USTUSoundFuncLib, nullptr, "ToggleSoundClassVolume", nullptr, nullptr, sizeof(STUSoundFuncLib_eventToggleSoundClassVolume_Parms), Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USTUSoundFuncLib_NoRegister()
	{
		return USTUSoundFuncLib::StaticClass();
	}
	struct Z_Construct_UClass_USTUSoundFuncLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUSoundFuncLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USTUSoundFuncLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USTUSoundFuncLib_SetSoundClassVolume, "SetSoundClassVolume" }, // 100776871
		{ &Z_Construct_UFunction_USTUSoundFuncLib_ToggleSoundClassVolume, "ToggleSoundClassVolume" }, // 3525846927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUSoundFuncLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sound/STUSoundFuncLib.h" },
		{ "ModuleRelativePath", "Public/Sound/STUSoundFuncLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUSoundFuncLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUSoundFuncLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUSoundFuncLib_Statics::ClassParams = {
		&USTUSoundFuncLib::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUSoundFuncLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUSoundFuncLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUSoundFuncLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUSoundFuncLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUSoundFuncLib, 3765064415);
	template<> SHOOTER_API UClass* StaticClass<USTUSoundFuncLib>()
	{
		return USTUSoundFuncLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUSoundFuncLib(Z_Construct_UClass_USTUSoundFuncLib, &USTUSoundFuncLib::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUSoundFuncLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUSoundFuncLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
