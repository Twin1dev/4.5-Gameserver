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

// 0x4 (0x4 - 0x0)
// Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.GetHeightEstimate
struct IMissionObjectiveContentWidgetInterface_C_GetHeightEstimate_Params
{
public:
	float                                        Height;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function MissionObjectiveContentWidgetInterface.MissionObjectiveContentWidgetInterface_C.Setup
struct IMissionObjectiveContentWidgetInterface_C_Setup_Params
{
public:
	class AFortObjectiveBase*                    Objective;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInConfigureAsHUD;                                 // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


