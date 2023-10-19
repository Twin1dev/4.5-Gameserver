#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Announcement_ZoneModifiers.Announcement_ZoneModifiers_C
// (None)

class UClass* UAnnouncement_ZoneModifiers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announcement_ZoneModifiers_C");

	return Clss;
}


// Announcement_ZoneModifiers_C Announcement_ZoneModifiers.Default__Announcement_ZoneModifiers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnnouncement_ZoneModifiers_C* UAnnouncement_ZoneModifiers_C::GetDefaultObj()
{
	static class UAnnouncement_ZoneModifiers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnnouncement_ZoneModifiers_C*>(UAnnouncement_ZoneModifiers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*     Announcement                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_ZoneModifiers_C::UpdateWidgetData(class AFortClientAnnouncement* Announcement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "UpdateWidgetData");

	Params::UAnnouncement_ZoneModifiers_C_UpdateWidgetData_Params Parms{};

	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnDisplayTimerFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnnouncement_ZoneModifiers_C::OnDisplayTimerFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "OnDisplayTimerFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnConversationDelayFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnnouncement_ZoneModifiers_C::OnConversationDelayFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "OnConversationDelayFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.WidgetCachingHack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAnnouncement_ZoneModifiers_C::WidgetCachingHack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "WidgetCachingHack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.ExecuteUbergraph_Announcement_ZoneModifiers
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// class AFortClientAnnouncement*     K2Node_Event_Announcement                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_ZoneModifiers*K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation        (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_ZoneModifiers_C::ExecuteUbergraph_Announcement_ZoneModifiers(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class AFortClientAnnouncement* K2Node_Event_Announcement, class AFortClientAnnouncement_ZoneModifiers* K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers, bool K2Node_DynamicCast_bSuccess, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess1, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "ExecuteUbergraph_Announcement_ZoneModifiers");

	Params::UAnnouncement_ZoneModifiers_C_ExecuteUbergraph_Announcement_ZoneModifiers_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.K2Node_Event_Announcement = K2Node_Event_Announcement;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers = K2Node_DynamicCast_AsFort_Client_Announcement_Zone_Modifiers;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation = K2Node_MakeStruct_FortClientAnnouncementData_Conversation;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


