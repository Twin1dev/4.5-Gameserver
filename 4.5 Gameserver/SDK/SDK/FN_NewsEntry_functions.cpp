#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NewsEntry.NewsEntry_C
// (None)

class UClass* UNewsEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewsEntry_C");

	return Clss;
}


// NewsEntry_C NewsEntry.Default__NewsEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNewsEntry_C* UNewsEntry_C::GetDefaultObj()
{
	static class UNewsEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewsEntry_C*>(UNewsEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NewsEntry.NewsEntry_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsEntry_C::SetFocus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsEntry_C", "SetFocus");

	Params::UNewsEntry_C_SetFocus_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsEntry.NewsEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNewsEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NewsEntry.NewsEntry_C.BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsEntry_C::BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsEntry_C", "BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature");

	Params::UNewsEntry_C_BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsEntry.NewsEntry_C.ExecuteUbergraph_NewsEntry
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsEntry_C::ExecuteUbergraph_NewsEntry(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsEntry_C", "ExecuteUbergraph_NewsEntry");

	Params::UNewsEntry_C_ExecuteUbergraph_NewsEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NewsEntry.NewsEntry_C.HandleEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UNewsEntry_C::HandleEntrySelected__DelegateSignature(class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NewsEntry_C", "HandleEntrySelected__DelegateSignature");

	Params::UNewsEntry_C_HandleEntrySelected__DelegateSignature_Params Parms{};

	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}

}


