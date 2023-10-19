#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3D0 - 0x3D0)
// WidgetBlueprintGeneratedClass Button_Zoom.Button_Zoom_C
class UButton_Zoom_C : public UCommonBacchusButton_C
{
public:

	static class UClass* StaticClass();
	static class UButton_Zoom_C* GetDefaultObj();

	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
};

}


