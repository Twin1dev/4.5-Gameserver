#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MissionRichText.MissionRichText_C
// (None)

class UClass* UMissionRichText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionRichText_C");

	return Clss;
}


// MissionRichText_C MissionRichText.Default__MissionRichText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionRichText_C* UMissionRichText_C::GetDefaultObj()
{
	static class UMissionRichText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionRichText_C*>(UMissionRichText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MissionRichText.MissionRichText_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UMissionRichText_C::Update(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRichText_C", "Update");

	Params::UMissionRichText_C_Update_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionRichText.MissionRichText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionRichText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRichText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MissionRichText.MissionRichText_C.ExecuteUbergraph_MissionRichText
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionRichText_C::ExecuteUbergraph_MissionRichText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionRichText_C", "ExecuteUbergraph_MissionRichText");

	Params::UMissionRichText_C_ExecuteUbergraph_MissionRichText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


