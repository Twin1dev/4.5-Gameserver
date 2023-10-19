#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x420 - 0x420)
// BlueprintGeneratedClass GCN_NPC_Lightning.GCN_NPC_Lightning_C
class AGCN_NPC_Lightning_C : public AFortGameplayCueNotify_Looping
{
public:

	static class UClass* StaticClass();
	static class AGCN_NPC_Lightning_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsDedicatedServer_ReturnValue, class AFlingerPawn_C* K2Node_DynamicCast_AsFlinger_Pawn, bool K2Node_DynamicCast_bSuccess, class ASmasherPawn_C* K2Node_DynamicCast_AsSmasher_Pawn, bool K2Node_DynamicCast_bSuccess1);
	void UserConstructionScript();
};

}


