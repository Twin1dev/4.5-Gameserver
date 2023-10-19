#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMapPanel.AthenaMapPanel_C
// (None)

class UClass* UAthenaMapPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMapPanel_C");

	return Clss;
}


// AthenaMapPanel_C AthenaMapPanel.Default__AthenaMapPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMapPanel_C* UAthenaMapPanel_C::GetDefaultObj()
{
	static class UAthenaMapPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMapPanel_C*>(UAthenaMapPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMapPanel.AthenaMapPanel_C.Clear Touches
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMapPanel_C::Clear_Touches()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapPanel_C", "Clear Touches");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMapPanel.AthenaMapPanel_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UAthenaMapPanel_C::OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, bool CallFunc_IsMobileGame_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapPanel_C", "OnTouchStarted");

	Params::UAthenaMapPanel_C_OnTouchStarted_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaMapPanel.AthenaMapPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMapPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMapPanel.AthenaMapPanel_C.FlashPlayerIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMapPanel_C::FlashPlayerIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapPanel_C", "FlashPlayerIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMapPanel.AthenaMapPanel_C.ExecuteUbergraph_AthenaMapPanel
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMapPanel_C::ExecuteUbergraph_AthenaMapPanel(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMapPanel_C", "ExecuteUbergraph_AthenaMapPanel");

	Params::UAthenaMapPanel_C_ExecuteUbergraph_AthenaMapPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


