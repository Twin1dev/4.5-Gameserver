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

// 0x90 (0x90 - 0x0)
// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Setup
struct UAthenaPickupMessageItem_C_Setup_Params
{
public:
	class UFortItem*                             Picked_Up_Item;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x8(0x88)(None)
};

// 0x4 (0x4 - 0x0)
// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnStackSizeChanged
struct UAthenaPickupMessageItem_C_OnStackSizeChanged_Params
{
public:
	int32                                        OldStackSize;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.ExecuteUbergraph_AthenaPickupMessageItem
struct UAthenaPickupMessageItem_C_ExecuteUbergraph_AthenaPickupMessageItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_OldStackSize;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


