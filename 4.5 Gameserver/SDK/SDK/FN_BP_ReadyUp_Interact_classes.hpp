#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xC40 - 0xBB0)
// BlueprintGeneratedClass BP_ReadyUp_Interact.BP_ReadyUp_Interact_C
class ABP_ReadyUp_Interact_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB0(0x8)(Transient, DuplicateTransient)
	class FText                                  InteractText;                                      // 0xBB8(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                         CanInteract;                                       // 0xBD0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_377C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UUserWidget>             MissionControlWidgetRef;                           // 0xBD8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                MissionControlWidget;                              // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 PlayerController;                                  // 0xC08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 PlayerWhoOpenedMissionControl;                     // 0xC10(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              ItemToDeposit;                                     // 0xC18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BluGloMissionActivationQty;                        // 0xC20(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_377D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortObjectiveBase*                    ReadyUpObjectiveRef;                               // 0xC28(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 MissionGuid;                                       // 0xC30(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ReadyUp_Interact_C* GetDefaultObj();

	void ReturnBluGloToPlayer(TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner, int32 NumberBGtoReturn);
	void TakeBluGloFromPlayer(class AFortPlayerController* PlayerController, int32 NumberBGtoTake, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue);
	void OnRep_CanInteract();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void UserConstructionScript();
	void OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE(class UClass* Loaded);
	void ReceiveBeginPlay();
	void OpenMissionControl();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void VoteCalled(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters);
	void ExecuteUbergraph_BP_ReadyUp_Interact(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UClass* K2Node_CustomEvent_Loaded, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UCommonActivatablePanel* K2Node_DynamicCast_AsCommon_Activatable_Panel, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IFortInitializeFromObjectInterface> K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess3, enum class EFortVoteType K2Node_CustomEvent_VoteType, enum class EFortVoteStatus K2Node_CustomEvent_VoteStatus, int32 K2Node_CustomEvent_VoteResult, TArray<struct FVoter>& K2Node_CustomEvent_Voters, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput, class AGameStateBase* CallFunc_GetGameState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
};

}


