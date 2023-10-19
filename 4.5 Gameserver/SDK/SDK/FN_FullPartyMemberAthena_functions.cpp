#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FullPartyMemberAthena.FullPartyMemberAthena_C
// (None)

class UClass* UFullPartyMemberAthena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullPartyMemberAthena_C");

	return Clss;
}


// FullPartyMemberAthena_C FullPartyMemberAthena.Default__FullPartyMemberAthena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullPartyMemberAthena_C* UFullPartyMemberAthena_C::GetDefaultObj()
{
	static class UFullPartyMemberAthena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullPartyMemberAthena_C*>(UFullPartyMemberAthena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.SetBannerIconAndColor
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      IconId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ColorId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::SetBannerIconAndColor(const class FString& IconId, const class FString& ColorId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "SetBannerIconAndColor");

	Params::UFullPartyMemberAthena_C_SetBannerIconAndColor_Params Parms{};

	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OpenPartyFinder
// (Event, Public, BlueprintEvent)
// Parameters:

void UFullPartyMemberAthena_C::OpenPartyFinder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "OpenPartyFinder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnFriendshipStatusDetermined
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortFriendRequestStatusRequestStatus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullPartyMemberAthena_C::OnFriendshipStatusDetermined(enum class EFortFriendRequestStatus RequestStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "OnFriendshipStatusDetermined");

	Params::UFullPartyMemberAthena_C_OnFriendshipStatusDetermined_Params Parms{};

	Parms.RequestStatus = RequestStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ExecuteUbergraph_FullPartyMemberAthena
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// class FText                        Temp_text_Variable2                                              (None)
// class FText                        Temp_text_Variable3                                              (None)
// enum class EFortFriendRequestStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_IconId                                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_ColorId                                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPartyFinder_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFriendRequestStatusTemp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUIManager_C*                K2Node_DynamicCast_AsUIManager                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTencentBuild_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusK2Node_Event_RequestStatus                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFullPartyMemberAthena_C::ExecuteUbergraph_FullPartyMemberAthena(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, const class FString& K2Node_Event_IconId, const class FString& K2Node_Event_ColorId, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1, class UPartyFinder_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class EFortFriendRequestStatus Temp_byte_Variable1, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTencentBuild_ReturnValue, enum class EFortFriendRequestStatus K2Node_Event_RequestStatus, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess1, class FText K2Node_Select_Default, bool K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullPartyMemberAthena_C", "ExecuteUbergraph_FullPartyMemberAthena");

	Params::UFullPartyMemberAthena_C_ExecuteUbergraph_FullPartyMemberAthena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Event_IconId = K2Node_Event_IconId;
	Parms.K2Node_Event_ColorId = K2Node_Event_ColorId;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue1 = CallFunc_Conv_StringToName_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_DynamicCast_AsUIManager = K2Node_DynamicCast_AsUIManager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsTencentBuild_ReturnValue = CallFunc_IsTencentBuild_ReturnValue;
	Parms.K2Node_Event_RequestStatus = K2Node_Event_RequestStatus;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


