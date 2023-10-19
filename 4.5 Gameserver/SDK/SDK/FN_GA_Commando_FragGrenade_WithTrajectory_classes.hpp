#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x35A (0xD4C - 0x9F2)
// BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
class UGA_Commando_FragGrenade_WithTrajectory_C : public UGAT_CommandoActiveAbility_C
{
public:
	uint8                                        Pad_5686[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F8(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          EventActivation;                                   // 0xA00(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventComplete;                                     // 0xA08(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Prj_Grenade;                                       // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedMin;                                   // 0xA18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedMax;                                   // 0xA1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravityScale;                                      // 0xA20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5687[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            GrenadeSound;                                      // 0xA28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_ClusterBomb;                                    // 0xA30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MaxClusterGrenades;                                // 0xA50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5688[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Prj_Cluster;                                       // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClusterSpeedMax;                                   // 0xA60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5689[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_BiggerIsBetter;                                 // 0xA68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EC_DefaultExplosion;                               // 0xA88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_IncreasedRadius;                                // 0xA90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      EC_ReturnedEffect;                                 // 0xA98(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ExplosionRadius;                                   // 0xB18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditionalThrowAngle;                              // 0xB1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClusterMinPitch;                                   // 0xB20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClusterMaxPitch;                                   // 0xB24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_ClusterExplosion;                               // 0xB28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        ClusterSpeedMin;                                   // 0xB30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_568A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortFeedbackHandle                   GrenadeDialogFeedback;                             // 0xB38(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameplayTagContainer                 TC_KeepOut;                                        // 0xB50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EC_KeepOut;                                        // 0xB70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AOE_KeepOut;                                       // 0xB78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BiggerIsBetter;                                    // 0xB80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ClusterBomb;                                       // 0xB81(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         KeepOut;                                           // 0xB82(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_568B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_GrenadeAmmo;                                    // 0xB88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_GrenadeCost;                                    // 0xBA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_GrenadeDamage;                                  // 0xBC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         GrenadeAmmo;                                       // 0xBE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         GrenadeCost;                                       // 0xBE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         GrenadeDamage;                                     // 0xBEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_568C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GrenadeAmmoUpgrade;                                // 0xBEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GrenadeAmmoDefault;                                // 0xBF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxGrenadeAmmo;                                    // 0xBF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionRadiusTooltip;                            // 0xBF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionRadiusDefault;                            // 0xBFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionRadiusUpgrade;                            // 0xC00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_568D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_PlasmaGrenades;                                 // 0xC08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         PlasmaGrenades;                                    // 0xC28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_568E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_Flashbang;                                      // 0xC30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Flashbang;                                         // 0xC50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_568F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GrenadeTargetingOriginOffset;                      // 0xC54(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   DummyProjectile;                                   // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DummyShouldBounce;                                 // 0xC68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5690[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DummyBounciness;                                   // 0xC6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyFriction;                                     // 0xC70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrajectoryUpdateInterval;                          // 0xC74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyMaxSpeed;                                     // 0xC78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyGravity;                                      // 0xC7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyTimeStep;                                     // 0xC80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyExtent;                                       // 0xC84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InThrowWindup;                                     // 0xC88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5691[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ProjectileTrajectory_C*            TrajectoryIndicator;                               // 0xC90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TrajectoryIndicatorClass;                          // 0xC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo       ThrowWindupMontage;                                // 0xCA0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AbilityKeyPressed;                                 // 0xD00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5692[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSpeedPitch;                                     // 0xD04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinSpeedPitch;                                     // 0xD08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTossPitch;                                      // 0xD0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTrajectoryBounces;                              // 0xD10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5693[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_Tactical_Clusterbomb;                           // 0xD18(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Tactical_Clusterbomb;                              // 0xD38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5694[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          EC_ClusterExplosion_Tactical;                      // 0xD40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        F_FrameDelay;                                      // 0xD48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Commando_FragGrenade_WithTrajectory_C* GetDefaultObj();

	void SpawnFragGrenade(class UClass* ProjectileClass, struct FVector& SpawnLocation, const struct FRotator& InputPin, const struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, float InitialSpeed, float GravityScale, class AB_Prj_Commando_FragGrenade_C* FragGrenade, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue1, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue2, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, class AB_Prj_Commando_FragGrenade_C* K2Node_DynamicCast_AsB_Prj_Commando_Frag_Grenade, bool K2Node_DynamicCast_bSuccess);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void UpdateTrajectorySpline(float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_FMax_ReturnValue, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents);
	void SetupDummyProjectile(const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_FMax_ReturnValue, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue1);
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystemComponentRef, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface3_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface4_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue4, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface5_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue5, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface6_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue6, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface7_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue7, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface8_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue8);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale, bool Temp_bool_Variable, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FFortAbilityTargetSelection& CallFunc_Array_Get_Item, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue1, float K2Node_Select_Default);
	void Completed_C3E84D8940567A046A8F48A21D386165(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C3E84D8940567A046A8F48A21D386165(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_C3E84D8940567A046A8F48A21D386165(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45();
	void OnCancelled_854170AF4268B06A435A3AA33232C5BF();
	void OnInterrupted_854170AF4268B06A435A3AA33232C5BF();
	void OnBlendOut_854170AF4268B06A435A3AA33232C5BF();
	void OnCompleted_854170AF4268B06A435A3AA33232C5BF();
	void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void CleanupTrajectoryDisplay();
	void TossGrenade();
	void K2_ActivateAbility();
	void CommitOnSever();
	void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Direction, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_HasAuthority_ReturnValue, class UClass* CallFunc_SetupGrenade_Base_Grenade, float CallFunc_SetupGrenade_Projectile_Speed, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Explosion_Gameplay_Spec, float CallFunc_SetupGrenade_Projectile_Gravity_Scale, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_K2_CommitAbility_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8);
};

}


