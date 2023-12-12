// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRogueLike/Public/SCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASCharacter();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionRogueLike();
// End Cross Module References
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCharacter);
	UClass* Z_Construct_UClass_ASCharacter_NoRegister()
	{
		return ASCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRogueLike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCharacter.h" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCharacter_Statics::ClassParams = {
		&ASCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASCharacter()
	{
		if (!Z_Registration_Info_UClass_ASCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCharacter.OuterSingleton, Z_Construct_UClass_ASCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASCharacter.OuterSingleton;
	}
	template<> ACTIONROGUELIKE_API UClass* StaticClass<ASCharacter>()
	{
		return ASCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
	ASCharacter::~ASCharacter() {}
	struct Z_CompiledInDeferFile_FID_Projects_GitHub_ActionRogueLike_ActionRogueLike_Source_ActionRogueLike_Public_SCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_ActionRogueLike_ActionRogueLike_Source_ActionRogueLike_Public_SCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASCharacter, ASCharacter::StaticClass, TEXT("ASCharacter"), &Z_Registration_Info_UClass_ASCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCharacter), 1493221845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitHub_ActionRogueLike_ActionRogueLike_Source_ActionRogueLike_Public_SCharacter_h_3748121108(TEXT("/Script/ActionRogueLike"),
		Z_CompiledInDeferFile_FID_Projects_GitHub_ActionRogueLike_ActionRogueLike_Source_ActionRogueLike_Public_SCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GitHub_ActionRogueLike_ActionRogueLike_Source_ActionRogueLike_Public_SCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
