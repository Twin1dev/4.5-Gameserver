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

// 0x50 (0x50 - 0x0)
// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
struct ULiveLinkRemapAsset_RemapCurveElements_Params
{
public:
	TMap<class FName, float>                     CurveItems;                                        // 0x0(0x50)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
struct ULiveLinkRemapAsset_GetRemappedCurveName_Params
{
public:
	class FName                                  CurveName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
struct ULiveLinkRemapAsset_GetRemappedBoneName_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


