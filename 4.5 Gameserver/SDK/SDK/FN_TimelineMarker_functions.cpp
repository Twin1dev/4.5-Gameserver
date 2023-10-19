#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TimelineMarker.TimelineMarker_C
// (None)

class UClass* UTimelineMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimelineMarker_C");

	return Clss;
}


// TimelineMarker_C TimelineMarker.Default__TimelineMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTimelineMarker_C* UTimelineMarker_C::GetDefaultObj()
{
	static class UTimelineMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimelineMarker_C*>(UTimelineMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TimelineMarker.TimelineMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimelineMarker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimelineMarker.TimelineMarker_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimelineMarker_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimelineMarker.TimelineMarker_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimelineMarker_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimelineMarker.TimelineMarker_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimelineMarker_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimelineMarker.TimelineMarker_C.ExecuteUbergraph_TimelineMarker
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortReplayEventType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UTimelineMarker_C::ExecuteUbergraph_TimelineMarker(int32 EntryPoint, enum class EFortReplayEventType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UTexture2D* K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimelineMarker_C", "ExecuteUbergraph_TimelineMarker");

	Params::UTimelineMarker_C_ExecuteUbergraph_TimelineMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


