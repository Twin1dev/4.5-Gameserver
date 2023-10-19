#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BottomBarWidget.BottomBarWidget_C
// (None)

class UClass* UBottomBarWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BottomBarWidget_C");

	return Clss;
}


// BottomBarWidget_C BottomBarWidget.Default__BottomBarWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBottomBarWidget_C* UBottomBarWidget_C::GetDefaultObj()
{
	static class UBottomBarWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBottomBarWidget_C*>(UBottomBarWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BottomBarWidget.BottomBarWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBottomBarWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BottomBarWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BottomBarWidget.BottomBarWidget_C.ExecuteUbergraph_BottomBarWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             (None)

void UBottomBarWidget_C::ExecuteUbergraph_BottomBarWidget(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BottomBarWidget_C", "ExecuteUbergraph_BottomBarWidget");

	Params::UBottomBarWidget_C_ExecuteUbergraph_BottomBarWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


