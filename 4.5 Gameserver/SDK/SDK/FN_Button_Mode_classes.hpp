#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3D8 - 0x3D0)
// WidgetBlueprintGeneratedClass Button_Mode.Button_Mode_C
class UButton_Mode_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UButton_Mode_C* GetDefaultObj();

	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
	void OnBuildModeChanged_Event_0(bool bEntering);
	void Construct();
	void ExecuteUbergraph_Button_Mode(int32 EntryPoint, bool Temp_bool_Variable, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_bEntering, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPaperSprite* K2Node_Select_Default);
};

}


