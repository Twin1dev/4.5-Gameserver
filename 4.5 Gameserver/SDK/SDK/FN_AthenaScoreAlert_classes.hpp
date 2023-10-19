#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x294 - 0x258)
// WidgetBlueprintGeneratedClass AthenaScoreAlert.AthenaScoreAlert_C
class UAthenaScoreAlert_C : public UAthenaWinConditionMsgBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Exclamation;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Outro;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Content;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        MESSAGE;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        TestMessageType;                                   // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDisplayingCriticalMsg;                            // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NonCriticalOffset;                                 // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaScoreAlert_C* GetDefaultObj();

	void PlaySoundFromType(enum class EAthenaWinConditionMsgType Type, enum class EAthenaWinConditionMsgType Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* Temp_object_Variable2, class USoundBase* Temp_object_Variable3, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void OnWinConditionMsgEvent(class FText& MESSAGE, enum class EAthenaWinConditionMsgType MsgType);
	void CustomEvent();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_AthenaScoreAlert(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, bool Temp_bool_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable1, const struct FVector2D& Temp_struct_Variable1, class FText K2Node_Event_Message, enum class EAthenaWinConditionMsgType K2Node_Event_MsgType, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_NotEqual_ByteByte_ReturnValue1, const struct FVector2D& K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue2, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float Temp_float_Variable3, bool CallFunc_BooleanOR_ReturnValue, enum class EAthenaWinConditionMsgType Temp_byte_Variable, class FText Temp_text_Variable, float K2Node_Select1_Default, class FText Temp_text_Variable1, bool CallFunc_BooleanAND_ReturnValue, class FText Temp_text_Variable2, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, class FText K2Node_Select2_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Conv_IntToFloat_ReturnValue1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue1, const struct FVector2D& K2Node_Select3_Default);
};

}


