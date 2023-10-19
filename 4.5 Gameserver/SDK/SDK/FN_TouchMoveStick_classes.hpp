#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x3A4 - 0x378)
// WidgetBlueprintGeneratedClass TouchMoveStick.TouchMoveStick_C
class UTouchMoveStick_C : public UFortTouchMoveStick
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_Move_Thumb;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Move_Thumb_BG;                               // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        ThumbstickMoveScale;                               // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AlphaInterpSpeed;                                  // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetOpacity;                                     // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TouchedOpacity;                                    // 0x39C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UntouchedOpacity;                                  // 0x3A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTouchMoveStick_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetStickPosition(const struct FVector2D& NewPosition);
	void SetMovementLockStatus(bool MovementIsLocked);
	void HandleTouchStarted();
	void HandleTouchEnded();
	void ExecuteUbergraph_TouchMoveStick(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& K2Node_Event_NewPosition, bool K2Node_Event_MovementIsLocked, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float K2Node_Select_Default);
};

}


