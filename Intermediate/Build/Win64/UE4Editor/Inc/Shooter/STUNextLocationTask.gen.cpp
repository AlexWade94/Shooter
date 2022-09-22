// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/Task/STUNextLocationTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUNextLocationTask() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USTUNextLocationTask_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USTUNextLocationTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USTUNextLocationTask::StaticRegisterNativesUSTUNextLocationTask()
	{
	}
	UClass* Z_Construct_UClass_USTUNextLocationTask_NoRegister()
	{
		return USTUNextLocationTask::StaticClass();
	}
	struct Z_Construct_UClass_USTUNextLocationTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimLocationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimLocationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCenter_MetaData[];
#endif
		static void NewProp_SelfCenter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelfCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterActorKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterActorKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUNextLocationTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUNextLocationTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AI/Task/STUNextLocationTask.h" },
		{ "ModuleRelativePath", "Public/AI/Task/STUNextLocationTask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Task/STUNextLocationTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUNextLocationTask, Radius), METADATA_PARAMS(Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_AimLocationKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Task/STUNextLocationTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_AimLocationKey = { "AimLocationKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUNextLocationTask, AimLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_AimLocationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_AimLocationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_SelfCenter_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Task/STUNextLocationTask.h" },
	};
#endif
	void Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_SelfCenter_SetBit(void* Obj)
	{
		((USTUNextLocationTask*)Obj)->SelfCenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_SelfCenter = { "SelfCenter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USTUNextLocationTask), &Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_SelfCenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_SelfCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_SelfCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_CenterActorKey_MetaData[] = {
		{ "Category", "AI" },
		{ "EditCondition", "!SelfCenter" },
		{ "ModuleRelativePath", "Public/AI/Task/STUNextLocationTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_CenterActorKey = { "CenterActorKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUNextLocationTask, CenterActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_CenterActorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_CenterActorKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUNextLocationTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_AimLocationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_SelfCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUNextLocationTask_Statics::NewProp_CenterActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUNextLocationTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUNextLocationTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUNextLocationTask_Statics::ClassParams = {
		&USTUNextLocationTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUNextLocationTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUNextLocationTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUNextLocationTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUNextLocationTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUNextLocationTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUNextLocationTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUNextLocationTask, 1610326232);
	template<> SHOOTER_API UClass* StaticClass<USTUNextLocationTask>()
	{
		return USTUNextLocationTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUNextLocationTask(Z_Construct_UClass_USTUNextLocationTask, &USTUNextLocationTask::StaticClass, TEXT("/Script/Shooter"), TEXT("USTUNextLocationTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUNextLocationTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
