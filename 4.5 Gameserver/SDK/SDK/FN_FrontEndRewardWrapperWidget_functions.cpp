#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C
// (None)

class UClass* UFrontEndRewardWrapperWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrontEndRewardWrapperWidget_C");

	return Clss;
}


// FrontEndRewardWrapperWidget_C FrontEndRewardWrapperWidget.Default__FrontEndRewardWrapperWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFrontEndRewardWrapperWidget_C* UFrontEndRewardWrapperWidget_C::GetDefaultObj()
{
	static class UFrontEndRewardWrapperWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrontEndRewardWrapperWidget_C*>(UFrontEndRewardWrapperWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.IntroAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewardWrapperWidget_C::IntroAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "IntroAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.AddToWrapper
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewardWrapperWidget_C::AddToWrapper(class UWidget* Widget, class FText DisplayName, const struct FMargin& K2Node_MakeStruct_Margin, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "AddToWrapper");

	Params::UFrontEndRewardWrapperWidget_C_AddToWrapper_Params Parms{};

	Parms.Widget = Widget;
	Parms.DisplayName = DisplayName;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFrontEndRewardWrapperWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.Go_Trigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewardWrapperWidget_C::Go_Trigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "Go_Trigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.ExecuteUbergraph_FrontEndRewardWrapperWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewardWrapperWidget_C::ExecuteUbergraph_FrontEndRewardWrapperWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "ExecuteUbergraph_FrontEndRewardWrapperWidget");

	Params::UFrontEndRewardWrapperWidget_C_ExecuteUbergraph_FrontEndRewardWrapperWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C.EventDispatcher_Go_Trigger__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewardWrapperWidget_C::EventDispatcher_Go_Trigger__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontEndRewardWrapperWidget_C", "EventDispatcher_Go_Trigger__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


