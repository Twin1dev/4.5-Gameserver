#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x7D8 - 0x7B8)
// BlueprintGeneratedClass B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C
class AB_Prj_Bullet_Sniper_C : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7B8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Sniper_Bullet_Trail;                             // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sniper_Rifle_SurfaceImpactSound;                   // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sniper_Rifle_PlayerImpactSound;                    // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Prj_Bullet_Sniper_C* GetDefaultObj();

	void UserConstructionScript();
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap);
	void ExecuteUbergraph_B_Prj_Bullet_Sniper(int32 EntryPoint, bool Temp_bool_Variable, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_bIsOverlap, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class USoundBase* K2Node_Select_Default, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


