#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0xF7C - 0xF0C)
// BlueprintGeneratedClass B_Minigun_Athena.B_Minigun_Athena_C
class AB_Minigun_Athena_C : public AB_Ranged_Generic_C
{
public:
	uint8                                        Pad_57DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF10(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  BarrelGlowFX;                                      // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SpinUpSound;                                       // 0xF20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SpinDownSound;                                     // 0xF28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_MinigunChargeUp;                                 // 0xF30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SpinAudioVolumeTimeline_Volume_18EF57D9444836E65E22B6A5DFE3BF4A; // 0xF38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                SpinAudioVolumeTimeline__Direction_18EF57D9444836E65E22B6A5DFE3BF4A; // 0xF3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    SpinAudioVolumeTimeline;                           // 0xF40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BarrelGlow_MuzzleGlowOpacity_6AA244864FFB6D03BB4DAA82CADCA13E; // 0xF48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BarrelGlow__Direction_6AA244864FFB6D03BB4DAA82CADCA13E; // 0xF4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BarrelGlow;                                        // 0xF50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MuzzleGlowMID;                                     // 0xF58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasPlayedSpinUpSound;                             // 0xF60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpinUpAudioVolumeMultiplier;                       // 0xF64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CurrentSpinAudioComponent;                         // 0xF68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentAmmo;                                       // 0xF70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayedSpinUpAudio;                                // 0xF74(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPlayedSpinDownAudio;                              // 0xF75(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57ED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpinVolumeMultiplier;                              // 0xF78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Minigun_Athena_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void BarrelGlow__FinishedFunc();
	void BarrelGlow__UpdateFunc();
	void SpinAudioVolumeTimeline__FinishedFunc();
	void SpinAudioVolumeTimeline__UpdateFunc();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnChargeUp();
	void OnChargeDown();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void MakeBarrelGlow();
	void StopBarrelGlow();
	void OnAmmoCountChanged();
	void Start_Spin_Up_Audio();
	void Start_Spin_Down_Audio();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_Minigun_Athena(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UMaterialInstanceDynamic* K2Node_Event_DynamicMaterialInstance, bool CallFunc_IsDedicatedServer_ReturnValue1, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2);
};

}


