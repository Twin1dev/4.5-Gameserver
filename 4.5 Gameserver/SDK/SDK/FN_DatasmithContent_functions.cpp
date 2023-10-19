#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DatasmithContent.DatasmithAreaLightActor
// (Actor)

class UClass* ADatasmithAreaLightActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithAreaLightActor");

	return Clss;
}


// DatasmithAreaLightActor DatasmithContent.Default__DatasmithAreaLightActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ADatasmithAreaLightActor* ADatasmithAreaLightActor::GetDefaultObj()
{
	static class ADatasmithAreaLightActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ADatasmithAreaLightActor*>(ADatasmithAreaLightActor::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithObjectTemplate
// (None)

class UClass* UDatasmithObjectTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithObjectTemplate");

	return Clss;
}


// DatasmithObjectTemplate DatasmithContent.Default__DatasmithObjectTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithObjectTemplate* UDatasmithObjectTemplate::GetDefaultObj()
{
	static class UDatasmithObjectTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithObjectTemplate*>(UDatasmithObjectTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithAreaLightActorTemplate
// (None)

class UClass* UDatasmithAreaLightActorTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithAreaLightActorTemplate");

	return Clss;
}


// DatasmithAreaLightActorTemplate DatasmithContent.Default__DatasmithAreaLightActorTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithAreaLightActorTemplate* UDatasmithAreaLightActorTemplate::GetDefaultObj()
{
	static class UDatasmithAreaLightActorTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithAreaLightActorTemplate*>(UDatasmithAreaLightActorTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithAssetImportData
// (None)

class UClass* UDatasmithAssetImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithAssetImportData");

	return Clss;
}


// DatasmithAssetImportData DatasmithContent.Default__DatasmithAssetImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithAssetImportData* UDatasmithAssetImportData::GetDefaultObj()
{
	static class UDatasmithAssetImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithAssetImportData*>(UDatasmithAssetImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithStaticMeshImportData
// (None)

class UClass* UDatasmithStaticMeshImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithStaticMeshImportData");

	return Clss;
}


// DatasmithStaticMeshImportData DatasmithContent.Default__DatasmithStaticMeshImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithStaticMeshImportData* UDatasmithStaticMeshImportData::GetDefaultObj()
{
	static class UDatasmithStaticMeshImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithStaticMeshImportData*>(UDatasmithStaticMeshImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithStaticMeshCADImportData
// (None)

class UClass* UDatasmithStaticMeshCADImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithStaticMeshCADImportData");

	return Clss;
}


// DatasmithStaticMeshCADImportData DatasmithContent.Default__DatasmithStaticMeshCADImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithStaticMeshCADImportData* UDatasmithStaticMeshCADImportData::GetDefaultObj()
{
	static class UDatasmithStaticMeshCADImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithStaticMeshCADImportData*>(UDatasmithStaticMeshCADImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithSceneImportData
// (None)

class UClass* UDatasmithSceneImportData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithSceneImportData");

	return Clss;
}


// DatasmithSceneImportData DatasmithContent.Default__DatasmithSceneImportData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithSceneImportData* UDatasmithSceneImportData::GetDefaultObj()
{
	static class UDatasmithSceneImportData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithSceneImportData*>(UDatasmithSceneImportData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithCADImportSceneData
// (None)

class UClass* UDatasmithCADImportSceneData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithCADImportSceneData");

	return Clss;
}


// DatasmithCADImportSceneData DatasmithContent.Default__DatasmithCADImportSceneData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithCADImportSceneData* UDatasmithCADImportSceneData::GetDefaultObj()
{
	static class UDatasmithCADImportSceneData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithCADImportSceneData*>(UDatasmithCADImportSceneData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithAssetUserData
// (None)

class UClass* UDatasmithAssetUserData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithAssetUserData");

	return Clss;
}


// DatasmithAssetUserData DatasmithContent.Default__DatasmithAssetUserData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithAssetUserData* UDatasmithAssetUserData::GetDefaultObj()
{
	static class UDatasmithAssetUserData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithAssetUserData*>(UDatasmithAssetUserData::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// (None)

class UClass* UDatasmithCineCameraComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithCineCameraComponentTemplate");

	return Clss;
}


// DatasmithCineCameraComponentTemplate DatasmithContent.Default__DatasmithCineCameraComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithCineCameraComponentTemplate* UDatasmithCineCameraComponentTemplate::GetDefaultObj()
{
	static class UDatasmithCineCameraComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithCineCameraComponentTemplate*>(UDatasmithCineCameraComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithContentBlueprintLibrary
// (None)

class UClass* UDatasmithContentBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithContentBlueprintLibrary");

	return Clss;
}


// DatasmithContentBlueprintLibrary DatasmithContent.Default__DatasmithContentBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithContentBlueprintLibrary* UDatasmithContentBlueprintLibrary::GetDefaultObj()
{
	static class UDatasmithContentBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithContentBlueprintLibrary*>(UDatasmithContentBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(class UObject* Object, class FName Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserDataValueForKey");

	Params::UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params Parms{};

	Parms.Object = Object;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringToMatch                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                OutKeys                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserDataKeysAndValuesForValue");

	Params::UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params Parms{};

	Parms.Object = Object;
	Parms.StringToMatch = StringToMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutKeys != nullptr)
		*OutKeys = std::move(Parms.OutKeys);

	if (OutValues != nullptr)
		*OutValues = std::move(Parms.OutValues);

}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDatasmithAssetUserData*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::GetDatasmithUserData(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DatasmithContentBlueprintLibrary", "GetDatasmithUserData");

	Params::UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class DatasmithContent.DatasmithImportOptions
// (None)

class UClass* UDatasmithImportOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithImportOptions");

	return Clss;
}


// DatasmithImportOptions DatasmithContent.Default__DatasmithImportOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithImportOptions* UDatasmithImportOptions::GetDefaultObj()
{
	static class UDatasmithImportOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithImportOptions*>(UDatasmithImportOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithLightComponentTemplate
// (None)

class UClass* UDatasmithLightComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithLightComponentTemplate");

	return Clss;
}


// DatasmithLightComponentTemplate DatasmithContent.Default__DatasmithLightComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithLightComponentTemplate* UDatasmithLightComponentTemplate::GetDefaultObj()
{
	static class UDatasmithLightComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithLightComponentTemplate*>(UDatasmithLightComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithPointLightComponentTemplate
// (None)

class UClass* UDatasmithPointLightComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithPointLightComponentTemplate");

	return Clss;
}


// DatasmithPointLightComponentTemplate DatasmithContent.Default__DatasmithPointLightComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithPointLightComponentTemplate* UDatasmithPointLightComponentTemplate::GetDefaultObj()
{
	static class UDatasmithPointLightComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithPointLightComponentTemplate*>(UDatasmithPointLightComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithSceneActor
// (Actor)

class UClass* ADatasmithSceneActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithSceneActor");

	return Clss;
}


// DatasmithSceneActor DatasmithContent.Default__DatasmithSceneActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ADatasmithSceneActor* ADatasmithSceneActor::GetDefaultObj()
{
	static class ADatasmithSceneActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ADatasmithSceneActor*>(ADatasmithSceneActor::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithSceneComponentTemplate
// (None)

class UClass* UDatasmithSceneComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithSceneComponentTemplate");

	return Clss;
}


// DatasmithSceneComponentTemplate DatasmithContent.Default__DatasmithSceneComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithSceneComponentTemplate* UDatasmithSceneComponentTemplate::GetDefaultObj()
{
	static class UDatasmithSceneComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithSceneComponentTemplate*>(UDatasmithSceneComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// (None)

class UClass* UDatasmithSkyLightComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithSkyLightComponentTemplate");

	return Clss;
}


// DatasmithSkyLightComponentTemplate DatasmithContent.Default__DatasmithSkyLightComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithSkyLightComponentTemplate* UDatasmithSkyLightComponentTemplate::GetDefaultObj()
{
	static class UDatasmithSkyLightComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithSkyLightComponentTemplate*>(UDatasmithSkyLightComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// (None)

class UClass* UDatasmithSpotLightComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithSpotLightComponentTemplate");

	return Clss;
}


// DatasmithSpotLightComponentTemplate DatasmithContent.Default__DatasmithSpotLightComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithSpotLightComponentTemplate* UDatasmithSpotLightComponentTemplate::GetDefaultObj()
{
	static class UDatasmithSpotLightComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithSpotLightComponentTemplate*>(UDatasmithSpotLightComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// (None)

class UClass* UDatasmithStaticMeshComponentTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithStaticMeshComponentTemplate");

	return Clss;
}


// DatasmithStaticMeshComponentTemplate DatasmithContent.Default__DatasmithStaticMeshComponentTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithStaticMeshComponentTemplate* UDatasmithStaticMeshComponentTemplate::GetDefaultObj()
{
	static class UDatasmithStaticMeshComponentTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithStaticMeshComponentTemplate*>(UDatasmithStaticMeshComponentTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DatasmithContent.DatasmithStaticMeshTemplate
// (None)

class UClass* UDatasmithStaticMeshTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatasmithStaticMeshTemplate");

	return Clss;
}


// DatasmithStaticMeshTemplate DatasmithContent.Default__DatasmithStaticMeshTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatasmithStaticMeshTemplate* UDatasmithStaticMeshTemplate::GetDefaultObj()
{
	static class UDatasmithStaticMeshTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatasmithStaticMeshTemplate*>(UDatasmithStaticMeshTemplate::StaticClass()->DefaultObject);

	return Default;
}

}


