#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x218 - 0x210)
// WidgetBlueprintGeneratedClass AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C
class UAthenaBroadcastScoreboardListView_C : public UCommonUserWidget
{
public:
	class UCommonListView*                       List;                                              // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaBroadcastScoreboardListView_C* GetDefaultObj();

	void ResetFocus(class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


