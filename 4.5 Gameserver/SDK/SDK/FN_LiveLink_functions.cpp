#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLink.LiveLinkDrivenComponent
// (None)

class UClass* ULiveLinkDrivenComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkDrivenComponent");

	return Clss;
}


// LiveLinkDrivenComponent LiveLink.Default__LiveLinkDrivenComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkDrivenComponent* ULiveLinkDrivenComponent::GetDefaultObj()
{
	static class ULiveLinkDrivenComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkDrivenComponent*>(ULiveLinkDrivenComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkInstance
// (None)

class UClass* ULiveLinkInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkInstance");

	return Clss;
}


// LiveLinkInstance LiveLink.Default__LiveLinkInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkInstance* ULiveLinkInstance::GetDefaultObj()
{
	static class ULiveLinkInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkInstance*>(ULiveLinkInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkRetargetAsset
// (None)

class UClass* ULiveLinkRetargetAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkRetargetAsset");

	return Clss;
}


// LiveLinkRetargetAsset LiveLink.Default__LiveLinkRetargetAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkRetargetAsset* ULiveLinkRetargetAsset::GetDefaultObj()
{
	static class ULiveLinkRetargetAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkRetargetAsset*>(ULiveLinkRetargetAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkRemapAsset
// (None)

class UClass* ULiveLinkRemapAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkRemapAsset");

	return Clss;
}


// LiveLinkRemapAsset LiveLink.Default__LiveLinkRemapAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkRemapAsset* ULiveLinkRemapAsset::GetDefaultObj()
{
	static class ULiveLinkRemapAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkRemapAsset*>(ULiveLinkRemapAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TMap<class FName, float>           CurveItems                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULiveLinkRemapAsset::RemapCurveElements(TMap<class FName, float>& CurveItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkRemapAsset", "RemapCurveElements");

	Params::ULiveLinkRemapAsset_RemapCurveElements_Params Parms{};

	Parms.CurveItems = CurveItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                        CurveName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULiveLinkRemapAsset::GetRemappedCurveName(class FName CurveName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedCurveName");

	Params::ULiveLinkRemapAsset_GetRemappedCurveName_Params Parms{};

	Parms.CurveName = CurveName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULiveLinkRemapAsset::GetRemappedBoneName(class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedBoneName");

	Params::ULiveLinkRemapAsset_GetRemappedBoneName_Params Parms{};

	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


