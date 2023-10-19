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

// 0xDB (0xDB - 0x0)
// Function MissionVoter.MissionVoter_C.SetVoterData
struct UMissionVoter_C_SetVoterData_Params
{
public:
	struct FVoter                                Voter;                                             // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UFortRegisteredPlayerInfo*             CallFunc_GetPlayerInfoFromUniqueID_ReturnValue;    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x60(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor1;                     // 0x88(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor2;                     // 0xB0(0x28)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue2;           // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


