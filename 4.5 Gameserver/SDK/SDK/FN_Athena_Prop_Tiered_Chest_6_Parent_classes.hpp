#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0xBE4 - 0xBB0)
// BlueprintGeneratedClass Athena_Prop_Tiered_Chest_6_Parent.Athena_Prop_Tiered_Chest_6_Parent_C
class AAthena_Prop_Tiered_Chest_6_Parent_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB0(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  S_Chest_SmokeSheet;                                // 0xBB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  TrasureLight;                                      // 0xBC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Chest_Ambient_Sound;                               // 0xBC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Loot_Effect;                                       // 0xBD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SpecialChestOpenSound;                             // 0xBD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDrawDistance_ChestFX;                           // 0xBE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAthena_Prop_Tiered_Chest_6_Parent_C* GetDefaultObj();

	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerOutpost* K2Node_DynamicCast_AsFort_Player_Controller_Outpost, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOutpostOwner_ReturnValue);
	void SetLightVisibility(bool Visible, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveActorBeginCursorOver();
	void ExecuteUbergraph_Athena_Prop_Tiered_Chest_6_Parent(int32 EntryPoint);
};

}


