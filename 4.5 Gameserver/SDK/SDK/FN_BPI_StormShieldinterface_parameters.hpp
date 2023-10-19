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
// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.GetOutpostReadyState
struct IBPI_StormShieldInterface_C_GetOutpostReadyState_Params
{
public:
	bool                                         ReadyToExpand;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReadyToInstallAmplifier;                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.CanLeaveOutpost
struct IBPI_StormShieldInterface_C_CanLeaveOutpost_Params
{
public:
	bool                                         AllowedToLeave;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


