#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x680 - 0x568)
// BlueprintGeneratedClass WindManager.WindManager_C
class AWindManager_C : public AFortWindManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              WaterInteractionParticle;                          // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  EmptyStaticMesh;                                   // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              TopDownCaptureActorOfTheWorld;                     // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D01;                         // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SmallerRenderTargetOrthoWidth;                     // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_439E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        External_Test_Actor;                               // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AFortStaticMeshActor*>          World_Terrain_Meshes;                              // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                               Camera_Height_Offset;                              // 0x5C0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Particle_Z_Offset;                                 // 0x5CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Has_Water_Interaction_Enabled_Variable_Been_Set;   // 0x5D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Water_Interaction_Enabled;                      // 0x5D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_439F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStaticMeshMaterialArrayCombo> WorldStaticMeshArray;                              // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FArrayOfWaterMeshWaterBlueprintPairs  Array_Of_Water_Assets;                             // 0x5E8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   PrototypicalStaticMeshes;                          // 0x5F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        Current_Water_Mesh_Index;                          // 0x608(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFlowMapMaterials>             WaterVectorMatToDefaultMaterialPairing;            // 0x610(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         MaterialPairingFound;                              // 0x620(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          WorldBoundsMinMax;                                 // 0x624(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Black_Scene_Capture_Material;                      // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox                                  Max_level_bounds_Minus_used_to_isolate_the_level_from_the_vista; // 0x640(0x1C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMeshComponent*>          StormCylinderMeshes;                               // 0x660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         Storm_Cyl_Mesh_Match;                              // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Wind_Cyl_Mesh_Array_Match_Index;                   // 0x674(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Wind_Falloff_in_World_Units;                 // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseHandle                NewVar_1;                                          // 0x67C(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class AWindManager_C* GetDefaultObj();

	void Find_Matching_Wind_Mesh_Index_And_Write_Bool(const struct FVector& Wind_location, bool* Storm_Cyl_Mesh_Match, int32* Wind_Cyl_Mesh_Array_Match_Index, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, bool CallFunc_EqualEqual_VectorVector_ReturnValue);
	void SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set_AnimatedCylinderCenter, const struct FVector& AnimatedCylinderCenter, bool Set_Animating_Wind_Magnitude, float Animating_Wind_Magnitude, bool Set_Static_Wind_Magnitude, float Static_Wind_Magnitude, bool Set_CylinderCenter, const struct FVector& CylinderCenter, bool Set_WindVector, const struct FVector& WindVector, bool Set_WindCrossVector, const struct FVector& WindCrossVector, bool Set_OverallOuterRadius, float OverallOuterRadius, bool Set_OverallInnerRadius, float OverallInnerRadius, bool Set_Wind_Still_0_or_Animating_1, float Wind_Still_0_or_Animating_1, bool Set_Circular_Shader_, float Circular_Shader_, bool* NewParam, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue2, class FName CallFunc_MakeLiteralName_ReturnValue3, class FName CallFunc_MakeLiteralName_ReturnValue4, class FName CallFunc_MakeLiteralName_ReturnValue5, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue6, class FName CallFunc_MakeLiteralName_ReturnValue7, class FName CallFunc_MakeLiteralName_ReturnValue8, class FName CallFunc_MakeLiteralName_ReturnValue9, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue3);
	void UpdateWindDeltaCyl(float Static_Cylinder_Outer_Radius, float Duration, class UMaterialInstanceDynamic* Mid, bool Is_Wind_Circular_, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select1_Default, float K2Node_Select2_Default, float K2Node_Select3_Default);
	void RemoveWindCylinder(struct FFortWindImpulseCylinder& WindImpulseCylinder, class UStaticMeshComponent* CurrentStormCylinder, bool Temp_bool_True_if_break_was_hit_Variable, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, bool CallFunc_EqualEqual_VectorVector_ReturnValue);
	void UpdateStormWindCylinder(const struct FFortWindImpulseCylinder& Wind_Impulse, const struct FFortWindImpulseCylinderDelta& Wind_Delta, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaCenter, bool CallFunc_BreakWindImpulseCylinderDelta_bWindImpulseInitialized, bool CallFunc_BreakWindImpulseCylinderDelta_bWindRipplesOutward, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionWidth, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerSectionRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterSectionRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaMaximumRadius, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredOverallBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentBlendTime, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaPreviousMagnitude, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaSectionCurrentMagnitude, float CallFunc_BreakWindImpulseCylinderDelta_WindDeltaDesiredMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaOuterWorldBounds, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindDeltaInnerWorldBounds, const struct FBox& CallFunc_BreakWindImpulseCylinderDelta_WindImpulseBounds, const struct FFortWindImpulseHandle& CallFunc_BreakWindImpulseCylinderDelta_WindImpulseHandleToModify, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, bool CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match, int32 CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_SetWindMatVariables_NewParam, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetWindMatVariables_NewParam1);
	struct FVector Calculate_Camera_Position(float Scale, class USceneCaptureComponent2D* Scene_Capture, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FCeil_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue3, int32 CallFunc_FCeil_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue4, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1);
	void SetRenderOnlyAssets(class UPrimitiveComponent* InComponent);
	void InitializeOrthoSettings();
	void UserConstructionScript(float CallFunc_GetScalarParameterValue_ReturnValue, const struct FTransform& Temp_struct_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue);
	void Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, struct FTransform& InTransform);
	void OnWorldReady();
	void ReceiveTick(float DeltaSeconds);
	void Register_player_for_render_to_texture_purposes(class UPrimitiveComponent* Effect_Water_Interaction_FX, class UPrimitiveComponent* Gameplay_Wind_INteraction_Effects);
	void AddWindParticleSystemComponent(class UParticleSystemComponent* ParticleSystemComponent);
	void OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder& WindImpulseCylinder, struct FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta);
	void OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder& WindImpulseCylinder);
	void OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder& WindImpulseCylinder);
	void SpawnTestWind(float Radius, float ImpulseMagnitude);
	void Play_Water_Splash_Particle_System_At_Location(const struct FTransform& Particle_Transform);
	void Add_Wind_Component(class UPrimitiveComponent* InComponent);
	void ReceiveBeginPlay();
	void Update_Test(float NewMagnitude);
	void ExecuteUbergraph_WindManager(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class AFortStaticMeshActor*>& CallFunc_GetAllActorsOfClass_OutActors, class UParticleSystem* K2Node_CustomEvent_EmitterTemplate, const struct FTransform& K2Node_CustomEvent_InTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable2, float CallFunc_GetScalarParameterValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_CustomEvent_Effect_Water_Interaction_FX, class UPrimitiveComponent* K2Node_CustomEvent_Gameplay_Wind_INteraction_Effects, int32 Temp_int_Array_Index_Variable1, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable2, const struct FStaticMeshMaterialArrayCombo& CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue2, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_IsDedicatedServer_ReturnValue1, const struct FWaterMeshAssetsToReplace& CallFunc_Array_Get_Item2, const struct FWaterMeshAssetsToReplace& CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue5, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue1, int32 Temp_int_Loop_Counter_Variable4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue4, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, int32 CallFunc_Add_IntInt_ReturnValue4, int32 Temp_int_Array_Index_Variable3, int32 Temp_int_Array_Index_Variable4, const struct FFlowMapMaterials& CallFunc_Array_Get_Item4, class AFortStaticMeshActor* CallFunc_Array_Get_Item5, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue6, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, int32 CallFunc_Array_Length_ReturnValue7, float CallFunc_FMin_ReturnValue, float CallFunc_FMin_ReturnValue1, const struct FStaticMeshMaterialArrayCombo& K2Node_MakeStruct_StaticMeshMaterialArrayCombo, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_FMax_ReturnValue1, int32 CallFunc_Array_Find_ReturnValue, float CallFunc_FMax_ReturnValue2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, const struct FVector& CallFunc_Calculate_Camera_Position_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult1, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue5, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue5, bool Temp_bool_True_if_break_was_hit_Variable1, int32 Temp_int_Array_Index_Variable5, bool CallFunc_Not_PreBool_ReturnValue1, int32 Temp_int_Loop_Counter_Variable5, class UStaticMesh* Temp_object_Variable, bool CallFunc_Less_IntInt_ReturnValue5, int32 CallFunc_Add_IntInt_ReturnValue5, int32 Temp_int_Array_Index_Variable6, int32 Temp_int_Loop_Counter_Variable6, class AActor* CallFunc_Array_Get_Item6, bool CallFunc_Less_IntInt_ReturnValue6, bool CallFunc_BooleanAND_ReturnValue6, int32 CallFunc_Add_IntInt_ReturnValue6, class UParticleSystemComponent* K2Node_Event_ParticleSystemComponent, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder2, const struct FFortWindImpulseCylinderDelta& K2Node_Event_WindImpulseCylinderDelta, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder1, const struct FFortWindImpulseCylinder& K2Node_Event_WindImpulseCylinder, float CallFunc_GetGlobalWindIntensityAndDirection_WindIntensity, const struct FVector& CallFunc_GetGlobalWindIntensityAndDirection_WindDirection, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindLocation, float CallFunc_BreakWindImpulseCylinderAdvanced_WindInnerRadius, float CallFunc_BreakWindImpulseCylinderAdvanced_WindOuterRadius, const struct FVector& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldDirection, float CallFunc_BreakWindImpulseCylinderAdvanced_WindMagnitude, const struct FBox& CallFunc_BreakWindImpulseCylinderAdvanced_WindWorldBounds, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChanging, bool CallFunc_BreakWindImpulseCylinderAdvanced_bIsWindChangePending, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Storm_Cyl_Mesh_Match, int32 CallFunc_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Wind_Cyl_Mesh_Array_Match_Index, bool CallFunc_SetWindMatVariables_NewParam, float K2Node_CustomEvent_Radius, float K2Node_CustomEvent_ImpulseMagnitude, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTransform& K2Node_CustomEvent_Particle_Transform, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, float CallFunc_MakeLiteralFloat_ReturnValue, class UPrimitiveComponent* K2Node_CustomEvent_InComponent, const struct FVector& CallFunc_MakeVector_ReturnValue2, float K2Node_CustomEvent_NewMagnitude, const struct FFortWindImpulseCylinder& CallFunc_MakeWindImpulseCylinder_ReturnValue, const struct FFortWindImpulseHandle& CallFunc_AddWindImpulseCylinder_ReturnValue, bool CallFunc_SetWindImpulseCylinderMagnitude_ReturnValue, int32 Temp_int_Loop_Counter_Variable7, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue7, int32 CallFunc_Add_IntInt_ReturnValue7, class FName CallFunc_MakeLiteralName_ReturnValue1, class FName CallFunc_MakeLiteralName_ReturnValue2, int32 Temp_int_Array_Index_Variable7, class UMaterialInterface* CallFunc_Array_Get_Item7, class UStaticMeshComponent* CallFunc_Array_Get_Item8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1);
};

}


