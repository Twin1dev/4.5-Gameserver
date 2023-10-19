#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x196 (0xB88 - 0x9F2)
// BlueprintGeneratedClass GA_AirStrike.GA_AirStrike_C
class UGA_AirStrike_C : public UGAT_GenericActiveAbilityNoCommit_C
{
public:
	uint8                                        Pad_515B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F8(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          EventComplete;                                     // 0xA00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventActivation;                                   // 0xA08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortAbilityDecoTool*                  DecoTool;                                          // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Prj_Bomb;                                          // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Prj_SpawnDirection;                                // 0xA20(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Prj_Gravity;                                       // 0xA2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetweenBombs;                                 // 0xA30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeightToSpawnBombs;                                // 0xA34(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionRadius;                                   // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_515C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BombInitTransform;                                 // 0xA40(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        AbilityMultiplier;                                 // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_515D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          EC_Explode;                                        // 0xA78(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      EC_ExplodeReturn;                                  // 0xA80(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                       CurrentUnprocessedPositionsArray;                  // 0xB00(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        ForLoopCounter;                                    // 0xB10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0xB14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_515E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_BombCountUpgrade_01;                            // 0xB18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_BombCountUpgrade_02;                            // 0xB38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_BombCountUpgrade_03;                            // 0xB58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        BaseBombCount;                                     // 0xB78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_515F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ActivateMontage;                                   // 0xB80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_AirStrike_C* GetDefaultObj();

	void SetupAbility(class UAbilitySystemComponent* AbilitySystemComponent, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2);
	struct FTransform GetCustomAbilitySourceTransform();
	void GetAttributeValue(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, const struct FAttributeInfo& CallFunc_FindAttributeInformation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetAttributeMagnitude_ReturnValue, int32 CallFunc_FFloor_ReturnValue);
	void Completed_48B4C8FD48399FA7A5F50D96227846DD(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_48B4C8FD48399FA7A5F50D96227846DD(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_48B4C8FD48399FA7A5F50D96227846DD(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void DidNotSpawn_6C69A64746D8F71A616C83A25170911C(class AActor* SpawnedActor);
	void Success_6C69A64746D8F71A616C83A25170911C(class AActor* SpawnedActor);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_AirStrike(int32 EntryPoint, const struct FAbilityToolSpawnParameters& CallFunc_GetSpawnParameters_OutSpawnParamters, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* K2Node_CustomEvent_SpawnedActor1, class AActor* K2Node_CustomEvent_SpawnedActor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* Temp_object_Variable, class UAbilityTask_SpawnActor* CallFunc_SpawnActor_ReturnValue, class AActor* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AB_AirStrike_Bomb_Spawner_C* K2Node_DynamicCast_AsB_Air_Strike_Bomb_Spawner, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AAbilityDecoTool_AirStrike_C* K2Node_DynamicCast_AsAbility_Deco_Tool_Air_Strike, bool K2Node_DynamicCast_bSuccess1, int32 Temp_int_Array_Index_Variable, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, int32 CallFunc_Array_Length_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2, class AFortAbilityDecoTool* K2Node_DynamicCast_AsFort_Ability_Deco_Tool, bool K2Node_DynamicCast_bSuccess3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


