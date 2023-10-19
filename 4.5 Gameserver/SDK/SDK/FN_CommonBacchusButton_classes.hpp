#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x3D0 - 0x3A0)
// WidgetBlueprintGeneratedClass CommonBacchusButton.CommonBacchusButton_C
class UCommonBacchusButton_C : public UBacchusButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      TapAnim;                                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ButtonSizeBox;                                     // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ImageSizeBox;                                      // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPaperSprite*                          DefaultIcon;                                       // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCommonBacchusButton_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void SetButtonSprite(class UPaperSprite* NewSprite);
	void SetButtonSize(float NewButtonSize);
	void SetButtonDisplayScale(float NewDisplayScale);
	void ExecuteUbergraph_CommonBacchusButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UPaperSprite* K2Node_Event_NewSprite, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, float K2Node_Event_NewButtonSize, float K2Node_Event_NewDisplayScale, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


