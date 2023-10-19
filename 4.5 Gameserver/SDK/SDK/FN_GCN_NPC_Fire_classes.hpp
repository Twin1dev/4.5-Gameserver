#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x420 - 0x420)
// BlueprintGeneratedClass GCN_NPC_Fire.GCN_NPC_Fire_C
class AGCN_NPC_Fire_C : public AFortGameplayCueNotify_Looping
{
public:

	static class UClass* StaticClass();
	static class AGCN_NPC_Fire_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsDedicatedServer_ReturnValue, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
};

}


