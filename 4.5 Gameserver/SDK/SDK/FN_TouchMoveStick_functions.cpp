#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TouchMoveStick.TouchMoveStick_C
// (None)

class UClass* UTouchMoveStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TouchMoveStick_C");

	return Clss;
}


// TouchMoveStick_C TouchMoveStick.Default__TouchMoveStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTouchMoveStick_C* UTouchMoveStick_C::GetDefaultObj()
{
	static class UTouchMoveStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTouchMoveStick_C*>(UTouchMoveStick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TouchMoveStick.TouchMoveStick_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTouchMoveStick_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TouchMoveStick_C", "PreConstruct");

	Params::UTouchMoveStick_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchMoveStick.TouchMoveStick_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTouchMoveStick_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TouchMoveStick_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TouchMoveStick.TouchMoveStick_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTouchMoveStick_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TouchMoveStick_C", "Tick");

	Params::UTouchMoveStick_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchMoveStick.TouchMoveStick_C.SetStickPosition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewPosition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTouchMoveStick_C::SetStickPosition(const struct FVector2D& NewPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TouchMoveStick_C", "SetStickPosition");

	Params::UTouchMoveStick_C_SetStickPosition_Params Parms{};

	Parms.NewPosition = NewPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchMoveStick.TouchMoveStick_C.SetMovementLockStatus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MovementIsLocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTouchMoveStick_C::SetMovementLockStatus(bool MovementIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TouchMoveStick_C", "SetMovementLockStatus");

	Params::UTouchMoveStick_C_SetMovementLockStatus_Params Parms{};

	Parms.MovementIsLocked = MovementIsLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchMoveStick.TouchMoveStick_C.HandleTouchStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTouchMoveStick_C::HandleTouchStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TouchMoveStick_C", "HandleTouchStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TouchMoveStick.TouchMoveStick_C.HandleTouchEnded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTouchMoveStick_C::HandleTouchEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TouchMoveStick_C", "HandleTouchEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TouchMoveStick.TouchMoveStick_C.ExecuteUbergraph_TouchMoveStick
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Event_NewPosition                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_MovementIsLocked                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTouchMoveStick_C::ExecuteUbergraph_TouchMoveStick(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& K2Node_Event_NewPosition, bool K2Node_Event_MovementIsLocked, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TouchMoveStick_C", "ExecuteUbergraph_TouchMoveStick");

	Params::UTouchMoveStick_C_ExecuteUbergraph_TouchMoveStick_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_NewPosition = K2Node_Event_NewPosition;
	Parms.K2Node_Event_MovementIsLocked = K2Node_Event_MovementIsLocked;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


