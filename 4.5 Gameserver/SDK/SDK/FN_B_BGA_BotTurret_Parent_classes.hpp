#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x728 - 0x6A8)
// BlueprintGeneratedClass B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C
class AB_BGA_BotTurret_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ExplosionBuildUP_Flashes;                          // 0x6B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Bot_Self_Destruct_Beep;                            // 0x6B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Bot_Turret;                                     // 0x6C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x6C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  BotFired;                                          // 0x6D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AFortAIPawn*                           Target;                                            // 0x6E0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFBotTurretData                       BotData;                                           // 0x6E8(0x15)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	uint8                                        Pad_2C1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Left_Right_Gun;                                    // 0x700(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  BotExplosionWarning;                               // 0x708(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  BotExplode;                                        // 0x718(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AB_BGA_BotTurret_Parent_C* GetDefaultObj();

	void OnRep_BotData();
	void LeftOrRightGunFired(int32 A);
	void SetGunSpawnRotFromSocket(class FName SocketName, const struct FVector& InVect);
	void UserConstructionScript();
	void PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius, float RadiusDefault, bool ExplosionUpgrade);
	void SetTarget(class AFortAIPawn* Target);
	void Ready();
	void ExecuteUbergraph_B_BGA_BotTurret_Parent(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AFortAIPawn* K2Node_CustomEvent_Target, float K2Node_CustomEvent_WarmUpTime, float K2Node_CustomEvent_BotDuration, float K2Node_CustomEvent_FireRate, float K2Node_CustomEvent_Radius, float K2Node_CustomEvent_RadiusDefault, bool K2Node_CustomEvent_ExplosionUpgrade, const struct FFBotTurretData& K2Node_MakeStruct_FBotTurretData, bool CallFunc_HasAuthority_ReturnValue1);
	void BotExplode__DelegateSignature();
	void BotExplosionWarning__DelegateSignature();
	void BotFired__DelegateSignature(int32 Left);
};

}


