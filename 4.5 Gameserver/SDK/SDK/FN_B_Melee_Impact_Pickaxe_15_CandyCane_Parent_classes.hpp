#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC00 - 0xBE0)
// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C
class AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C : public AB_Melee_Impact_Pickaxe_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBE0(0x8)(Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*              MeshMID;                                           // 0xBE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Kills;                                             // 0xBF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_573C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       JingleTimeFX;                                      // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C* GetDefaultObj();

	void TurnOnLights(float Kills);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void UpdateBasedOnKills();
	void K2_OnProgressiveCosmeticWatchedStatChanged(class FName StatName, int32 NewValue);
	void ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent(int32 EntryPoint, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, class FName K2Node_Event_StatName, int32 K2Node_Event_NewValue, float CallFunc_Conv_IntToFloat_ReturnValue);
};

}


