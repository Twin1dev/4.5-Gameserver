#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ReadyUp_Interact.BP_ReadyUp_Interact_C
// (Actor)

class UClass* ABP_ReadyUp_Interact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ReadyUp_Interact_C");

	return Clss;
}


// BP_ReadyUp_Interact_C BP_ReadyUp_Interact.Default__BP_ReadyUp_Interact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ReadyUp_Interact_C* ABP_ReadyUp_Interact_C::GetDefaultObj()
{
	static class ABP_ReadyUp_Interact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ReadyUp_Interact_C*>(ABP_ReadyUp_Interact_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReturnBluGloToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortInventoryOwnerInterface>InventoryOwner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NumberBGtoReturn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::ReturnBluGloToPlayer(TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner, int32 NumberBGtoReturn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ReturnBluGloToPlayer");

	Params::ABP_ReadyUp_Interact_C_ReturnBluGloToPlayer_Params Parms{};

	Parms.InventoryOwner = InventoryOwner;
	Parms.NumberBGtoReturn = NumberBGtoReturn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.TakeBluGloFromPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumberBGtoTake                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_K2_RemoveItemFromPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::TakeBluGloFromPlayer(class AFortPlayerController* PlayerController, int32 NumberBGtoTake, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "TakeBluGloFromPlayer");

	Params::ABP_ReadyUp_Interact_C_TakeBluGloFromPlayer_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.NumberBGtoTake = NumberBGtoTake;
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_CanInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnRep_CanInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnRep_CanInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ReadyUp_Interact_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ShouldDie");

	Params::ABP_ReadyUp_Interact_C_ShouldDie_Params Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ABP_ReadyUp_Interact_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "BlueprintGetInteractionString");

	Params::ABP_ReadyUp_Interact_C_BlueprintGetInteractionString_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ReadyUp_Interact_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "BlueprintCanInteract");

	Params::ABP_ReadyUp_Interact_C_BlueprintCanInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE");

	Params::ABP_ReadyUp_Interact_C_OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OpenMissionControl
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OpenMissionControl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OpenMissionControl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "BlueprintOnInteract");

	Params::ABP_ReadyUp_Interact_C_BlueprintOnInteract_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.VoteCalled
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteStatus         VoteStatus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              VoteResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoter>              Voters                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ReadyUp_Interact_C::VoteCalled(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "VoteCalled");

	Params::ABP_ReadyUp_Interact_C_VoteCalled_Params Parms{};

	Parms.VoteType = VoteType;
	Parms.VoteStatus = VoteStatus;
	Parms.VoteResult = VoteResult;
	Parms.Voters = Voters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ExecuteUbergraph_BP_ReadyUp_Interact
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_Event_InteractingPawn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatablePanel*     K2Node_DynamicCast_AsCommon_Activatable_Panel                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInitializeFromObjectInterface>K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           K2Node_CustomEvent_VoteType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteStatus         K2Node_CustomEvent_VoteStatus                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_VoteResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoter>              K2Node_CustomEvent_Voters                                        (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortInventoryOwnerInterface>CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ReadyUp_Interact_C::ExecuteUbergraph_BP_ReadyUp_Interact(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UClass* K2Node_CustomEvent_Loaded, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UCommonActivatablePanel* K2Node_DynamicCast_AsCommon_Activatable_Panel, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IFortInitializeFromObjectInterface> K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess3, enum class EFortVoteType K2Node_CustomEvent_VoteType, enum class EFortVoteStatus K2Node_CustomEvent_VoteStatus, int32 K2Node_CustomEvent_VoteResult, TArray<struct FVoter>& K2Node_CustomEvent_Voters, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput, class AGameStateBase* CallFunc_GetGameState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ExecuteUbergraph_BP_ReadyUp_Interact");

	Params::ABP_ReadyUp_Interact_C_ExecuteUbergraph_BP_ReadyUp_Interact_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommon_Activatable_Panel = K2Node_DynamicCast_AsCommon_Activatable_Panel;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface = K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_CustomEvent_VoteType = K2Node_CustomEvent_VoteType;
	Parms.K2Node_CustomEvent_VoteStatus = K2Node_CustomEvent_VoteStatus;
	Parms.K2Node_CustomEvent_VoteResult = K2Node_CustomEvent_VoteResult;
	Parms.K2Node_CustomEvent_Voters = K2Node_CustomEvent_Voters;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput = CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput;
	Parms.CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput = CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


