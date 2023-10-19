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

// 0x199 (0x199 - 0x0)
// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.UpdateBundle
struct UChallengeBundleCategoryHeader_C_UpdateBundle_Params
{
public:
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMcpProfileAthena*                 CallFunc_GetAthenaProfile_ReturnValue;             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasPurchasedSeasonBook_ReturnValue;       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortChallengeBundleInfo*              CallFunc_GetChallengeBundleInfo_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortChallengeBundleItemDefinition*    CallFunc_GetBundleDefinition_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EChallengeBundleVisualStyle       CallFunc_GetVisualStyle_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortChallengeBundleCategoryInfo*      CallFunc_GetOwningBundleCategoryInfo_ReturnValue;  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortChallengeBundleScheduleDefinition* CallFunc_GetFirstScheduleDefinition_ReturnValue;   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCategoryName_ReturnValue;              // 0x48(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x60(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x80(0x88)(None)
	bool                                         Temp_bool_Variable;                                // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush1;                     // 0x110(0x88)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.PreConstruct
struct UChallengeBundleCategoryHeader_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ChallengeBundleCategoryHeader.ChallengeBundleCategoryHeader_C.ExecuteUbergraph_ChallengeBundleCategoryHeader
struct UChallengeBundleCategoryHeader_C_ExecuteUbergraph_ChallengeBundleCategoryHeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


