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

// 0x24 (0x24 - 0x0)
// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.Is Hero or Previews on Hero
struct UFrontendItemViewSettingsManager_C_Is_Hero_or_Previews_on_Hero_Params
{
public:
	class UFortItemDefinition*                   Item_Definition;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_181F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array;                            // 0x10(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class EFortItemType                     CallFunc_GetItemType_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue; // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F8 (0x1F8 - 0x0)
// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.GetItemViewSettings
struct UFrontendItemViewSettingsManager_C_GetItemViewSettings_Params
{
public:
	enum class EFrontEndCamera                   Camera;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          GameMode;                                          // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1840[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemViewSettings                 ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FFortItemViewSettings                 Return_Value;                                      // 0x38(0x28)(Edit, BlueprintVisible, NoDestructor)
	TArray<enum class EFrontEndCamera>           K2Node_MakeArray_Array;                            // 0x60(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class EFortItemType                     CallFunc_GetItemType_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetTemplateType_ReturnValue;              // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue;  // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1843[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSprayItemDefinition*            K2Node_DynamicCast_AsAthena_Spray_Item_Definition; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue1; // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1844[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSkyDiveContrailItemDefinition*  K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetItemType_ReturnValue1;                 // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetTemplateType_ReturnValue1;             // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetItemType_ReturnValue2;                 // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetItemType_ReturnValue3;                 // 0x96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetTemplateType_ReturnValue2;             // 0x97(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortItemType                     CallFunc_GetTemplateType_ReturnValue3;             // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue; // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1846[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFrontEndCamera>           K2Node_MakeArray_Array1;                           // 0xA0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue1;              // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1849[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFrontEndCamera>           K2Node_MakeArray_Array2;                           // 0xB8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue2;              // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue; // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_184B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array3;                           // 0xD0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound;                 // 0xE0(0x8)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue3;              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_184C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MakeLiteralFloat_ReturnValue;             // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound1;                // 0xF0(0x8)(HasGetValueTypeHash)
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array4;                           // 0xF8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FFloatRange                           K2Node_MakeStruct_FloatRange;                      // 0x108(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue4;              // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_184F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MakeLiteralFloat_ReturnValue1;            // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound2;                // 0x120(0x8)(HasGetValueTypeHash)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound3;                // 0x128(0x8)(HasGetValueTypeHash)
	float                                        CallFunc_MakeLiteralFloat_ReturnValue2;            // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1853[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array5;                           // 0x138(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound4;                // 0x148(0x8)(HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue5;              // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1855[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatRange                           K2Node_MakeStruct_FloatRange1;                     // 0x154(0x10)(HasGetValueTypeHash)
	struct FFloatRangeBound                      K2Node_MakeStruct_FloatRangeBound5;                // 0x164(0x8)(HasGetValueTypeHash)
	struct FFloatRange                           K2Node_MakeStruct_FloatRange2;                     // 0x16C(0x10)(HasGetValueTypeHash)
	uint8                                        Pad_1857[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array6;                           // 0x180(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue6;              // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1858[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array7;                           // 0x198(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue7;              // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1859[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array8;                           // 0x1B0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue8;              // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_185A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array9;                           // 0x1C8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue9;              // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_185C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EFortItemType>             K2Node_MakeArray_Array10;                          // 0x1E0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue10;             // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_185F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


