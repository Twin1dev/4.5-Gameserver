#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3D0 - 0x3D0)
// WidgetBlueprintGeneratedClass Button_EditReset.Button_EditReset_C
class UButton_EditReset_C : public UCommonBacchusButton_C
{
public:

	static class UClass* StaticClass();
	static class UButton_EditReset_C* GetDefaultObj();

	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
};

}


