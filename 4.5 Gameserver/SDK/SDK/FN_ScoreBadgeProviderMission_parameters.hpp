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

// 0x8 (0x8 - 0x0)
// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetTotalScore
struct IScoreBadgeProviderMission_C_GetTotalScore_Params
{
public:
	enum class EStatCategory                     ScoreCategory;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4907[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Score;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetScoreBadgeInfos
struct IScoreBadgeProviderMission_C_GetScoreBadgeInfos_Params
{
public:
	enum class EStatCategory                     ScoreCategory;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4908[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCollectionMissionBadgeDisplayInfo> BadgeInfos;                                        // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
};

}
}


