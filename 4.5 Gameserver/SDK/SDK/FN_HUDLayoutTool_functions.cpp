#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDLayoutTool.HUDLayoutTool_C
// (None)

class UClass* UHUDLayoutTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDLayoutTool_C");

	return Clss;
}


// HUDLayoutTool_C HUDLayoutTool.Default__HUDLayoutTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDLayoutTool_C* UHUDLayoutTool_C::GetDefaultObj()
{
	static class UHUDLayoutTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDLayoutTool_C*>(UHUDLayoutTool_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDLayoutTool.HUDLayoutTool_C.BndEvt__RecenterButton2_K2Node_ComponentBoundEvent_82_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutTool_C::BndEvt__RecenterButton2_K2Node_ComponentBoundEvent_82_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutTool_C", "BndEvt__RecenterButton2_K2Node_ComponentBoundEvent_82_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutTool_C_BndEvt__RecenterButton2_K2Node_ComponentBoundEvent_82_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutTool.HUDLayoutTool_C.Close Tool
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutTool_C::Close_Tool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutTool_C", "Close Tool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutTool.HUDLayoutTool_C.On Property State Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewlyOpen                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutTool_C::On_Property_State_Change(bool bNewlyOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutTool_C", "On Property State Change");

	Params::UHUDLayoutTool_C_On_Property_State_Change_Params Parms{};

	Parms.bNewlyOpen = bNewlyOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutTool.HUDLayoutTool_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutTool_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutTool_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutTool_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutTool.HUDLayoutTool_C.On View Offset Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewOffset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutTool_C::On_View_Offset_Update(const struct FVector2D& NewOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutTool_C", "On View Offset Update");

	Params::UHUDLayoutTool_C_On_View_Offset_Update_Params Parms{};

	Parms.NewOffset = NewOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutTool.HUDLayoutTool_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDLayoutTool_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutTool_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutTool.HUDLayoutTool_C.Tool Is Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutTool_C::Tool_Is_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutTool_C", "Tool Is Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutTool.HUDLayoutTool_C.ExecuteUbergraph_HUDLayoutTool
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FVector2D                   CallFunc_GetCurrentOffset_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNewlyOpen                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCentered_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPanning_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSelectedWidgetUnderPanel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPropertyMenuState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_NewOffset                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Get_Dynamic_Material_Ret_Material                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCurrentOffset_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutTool_C::ExecuteUbergraph_HUDLayoutTool(int32 EntryPoint, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue2, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue3, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FVector2D& CallFunc_GetCurrentOffset_ReturnValue, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue5, bool K2Node_CustomEvent_bNewlyOpen, bool CallFunc_IsCentered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsPanning_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsSelectedWidgetUnderPanel_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool Temp_bool_Variable, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue7, enum class ESlateVisibility K2Node_Select_Default, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue8, bool CallFunc_GetPropertyMenuState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, const struct FVector2D& K2Node_CustomEvent_NewOffset, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue9, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue10, class UMaterialInstanceDynamic* CallFunc_Get_Dynamic_Material_Ret_Material, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue11, const struct FVector2D& CallFunc_GetCurrentOffset_ReturnValue1, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutTool_C", "ExecuteUbergraph_HUDLayoutTool");

	Params::UHUDLayoutTool_C_ExecuteUbergraph_HUDLayoutTool_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetCurrentOffset_ReturnValue = CallFunc_GetCurrentOffset_ReturnValue;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.K2Node_CustomEvent_bNewlyOpen = K2Node_CustomEvent_bNewlyOpen;
	Parms.CallFunc_IsCentered_ReturnValue = CallFunc_IsCentered_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetIsPanning_ReturnValue = CallFunc_GetIsPanning_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsSelectedWidgetUnderPanel_ReturnValue = CallFunc_IsSelectedWidgetUnderPanel_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.CallFunc_GetPropertyMenuState_ReturnValue = CallFunc_GetPropertyMenuState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.K2Node_CustomEvent_NewOffset = K2Node_CustomEvent_NewOffset;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.CallFunc_Get_Dynamic_Material_Ret_Material = CallFunc_Get_Dynamic_Material_Ret_Material;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.CallFunc_GetCurrentOffset_ReturnValue1 = CallFunc_GetCurrentOffset_ReturnValue1;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue1 = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);

}

}


