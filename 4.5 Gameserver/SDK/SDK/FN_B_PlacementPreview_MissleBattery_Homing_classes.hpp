#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x4E0 - 0x490)
// BlueprintGeneratedClass B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C
class AB_PlacementPreview_MissleBattery_Homing_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Athena_BullsEye;                                 // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             FortPawn;                                          // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxAimDistance;                                    // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5664[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          UpdateAimTimer;                                    // 0x4B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector                               AimLocation;                                       // 0x4C0(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5665[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingActor*                        TargetingWidget;                                   // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Placement_Pack_MissileBattery_C*    TargetingActor;                                    // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_PlacementPreview_MissleBattery_Homing_C* GetDefaultObj();

	void GetAimLocFromPlacementPreview(struct FVector* AimLocation, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void UpdateAim(const struct FVector& LineTraceEndPoint, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit1, bool CallFunc_LineTraceSingle_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1);
	void GetPlayerController(class AFortPlayerControllerZone** Controller, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void GetGadgetItem(class UFortItem** Gadget, class AFortPlayerControllerZone* CallFunc_GetPlayerController_Controller, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class UFortItem* CallFunc_K2_GetInventoryItemWithGuid_ReturnValue);
	void UserConstructionScript();
	void PawnSetHere(class AFortPawn* FortPawn);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_B_PlacementPreview_MissleBattery_Homing(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AFortPawn* K2Node_CustomEvent_FortPawn, enum class EEndPlayReason K2Node_Event_EndPlayReason, float K2Node_Event_DeltaSeconds1, bool K2Node_Event_bSafeToPlace, float K2Node_Event_DeltaSeconds, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
};

}


