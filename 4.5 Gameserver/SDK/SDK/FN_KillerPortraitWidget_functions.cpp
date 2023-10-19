#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KillerPortraitWidget.KillerPortraitWidget_C
// (None)

class UClass* UKillerPortraitWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KillerPortraitWidget_C");

	return Clss;
}


// KillerPortraitWidget_C KillerPortraitWidget.Default__KillerPortraitWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKillerPortraitWidget_C* UKillerPortraitWidget_C::GetDefaultObj()
{
	static class UKillerPortraitWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKillerPortraitWidget_C*>(UKillerPortraitWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KillerPortraitWidget.KillerPortraitWidget_C.Init
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortKillerVisualInfo       KillerVisualInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UKillerPortraitWidget_C::Init(struct FFortKillerVisualInfo& KillerVisualInfo, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerPortraitWidget_C", "Init");

	Params::UKillerPortraitWidget_C_Init_Params Parms{};

	Parms.KillerVisualInfo = KillerVisualInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


