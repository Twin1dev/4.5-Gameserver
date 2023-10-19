#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass XpReasonFeedItem.XpReasonFeedItem_C
// (None)

class UClass* UXpReasonFeedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XpReasonFeedItem_C");

	return Clss;
}


// XpReasonFeedItem_C XpReasonFeedItem.Default__XpReasonFeedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UXpReasonFeedItem_C* UXpReasonFeedItem_C::GetDefaultObj()
{
	static class UXpReasonFeedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UXpReasonFeedItem_C*>(UXpReasonFeedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function XpReasonFeedItem.XpReasonFeedItem_C.SetXpText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UXpReasonFeedItem_C::SetXpText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeedItem_C", "SetXpText");

	Params::UXpReasonFeedItem_C_SetXpText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeedItem.XpReasonFeedItem_C.PlayPresentEffectAndRemove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UXpReasonFeedItem_C::PlayPresentEffectAndRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeedItem_C", "PlayPresentEffectAndRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function XpReasonFeedItem.XpReasonFeedItem_C.BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UXpReasonFeedItem_C::BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeedItem_C", "BndEvt__Present_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function XpReasonFeedItem.XpReasonFeedItem_C.ExecuteUbergraph_XpReasonFeedItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpReasonFeedItem_C::ExecuteUbergraph_XpReasonFeedItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XpReasonFeedItem_C", "ExecuteUbergraph_XpReasonFeedItem");

	Params::UXpReasonFeedItem_C_ExecuteUbergraph_XpReasonFeedItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


