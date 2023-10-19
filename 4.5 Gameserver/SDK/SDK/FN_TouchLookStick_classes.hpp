#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x3F0 - 0x3A0)
// WidgetBlueprintGeneratedClass TouchLookStick.TouchLookStick_C
class UTouchLookStick_C : public UFortTouchLookStick
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Look_Thumb;                                  // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        ThumbstickMoveScale;                               // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5089[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperSprite*                          LookIcon;                                          // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSkydiving;                                       // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_508A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperSprite*                          Place_Icon;                                        // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          Consume_Icon;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          Disengage_Icon;                                    // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          Fire_Icon;                                         // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTouchLookStick_C* GetDefaultObj();

	void SetBrushForStatus(bool InBuild_or_Edit_Mode, bool Is_RC_Pawn, bool* Found_Context, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion1_CastInput, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion2_CastInput, bool CallFunc_CheckForTag_HasTag, bool CallFunc_CheckForTag_HasTag1, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion3_CastInput, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion4_CastInput, bool CallFunc_CheckForTag_HasTag2, bool CallFunc_BooleanOR_ReturnValue);
	void CheckForTag(const struct FGameplayTag& TagToCheck, bool* HasTag, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void HandleWeaponChanged(bool In_Build_or_Edit_Mode, bool RC_Pawn, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SetBrushForStatus_Found_Context, bool CallFunc_UseTapToShoot_ReturnValue);
	bool IsFireButtonUnderTouch(const struct FVector2D& TouchPosition, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, bool CallFunc_IsUnderLocation_ReturnValue);
	void HandleTouchEnded();
	void HandleTouchStarted();
	void SetStickPosition(const struct FVector2D& NewPosition, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetFiringState(bool IsFiring);
	void Weapon_Change(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	void ExecuteUbergraph_TouchLookStick(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FFortHUDState& CallFunc_GetCurrentHUDState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Event_IsFiring, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, const struct FFortHUDState& K2Node_Event_NewState, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_UseTapToShoot_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


