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

// 0x68 (0x68 - 0x0)
// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.SetParams
struct UGen_ReadyUp_StartObjective_C_SetParams_Params
{
public:
	float                                        ReadyUpTimerLength;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36B7[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InteractSpawnLocation;                             // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class FText                                  InteractText;                                      // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BluGloMissionActivationQty;                        // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGen_ReadyUp_StartObjective_C*         ThisObject;                                        // 0x60(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.BreakParams
struct UGen_ReadyUp_StartObjective_C_BreakParams_Params
{
public:
	float                                        ReadyUpTimerLength;                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36B9[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InteractSpawnLocation;                             // 0x10(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	class FText                                  InteractText;                                      // 0x40(0x18)(Parm, OutParm)
	int32                                        BluGloMissionActivationQty;                        // 0x58(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


