#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleSortChanged
struct USquadSlotItemPicker_C_HandleSortChanged_Params
{
public:
	enum class ESquadSlotSortType                CurrentSortType;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESquadSlotType                    NewParam;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function SquadSlotItemPicker.SquadSlotItemPicker_C.ExecuteUbergraph_SquadSlotItemPicker
struct USquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESquadSlotSortType                K2Node_CustomEvent_CurrentSortType;                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESquadSlotType                    K2Node_CustomEvent_NewParam;                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESquadSlotSortType                Temp_byte_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable1;                               // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable2;                               // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable3;                               // 0x50(0x18)(None)
	enum class ESquadSlotType                    Temp_byte_Variable1;                               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable4;                               // 0x70(0x18)(None)
	class FText                                  Temp_text_Variable5;                               // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable6;                               // 0xA0(0x18)(None)
	class FText                                  Temp_text_Variable7;                               // 0xB8(0x18)(None)
	class FText                                  Temp_text_Variable8;                               // 0xD0(0x18)(None)
	class FText                                  Temp_text_Variable9;                               // 0xE8(0x18)(None)
	class FText                                  Temp_text_Variable10;                              // 0x100(0x18)(None)
	class FText                                  Temp_text_Variable11;                              // 0x118(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x130(0x18)(None)
	class FText                                  K2Node_Select1_Default;                            // 0x148(0x18)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x160(0x10)(ZeroConstructor, NoDestructor)
};

}
}


