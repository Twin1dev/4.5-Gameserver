#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x58 - 0x30)
// ScriptStruct LiveLink.AnimNode_LiveLinkPose
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
public:
	class FName                                  SubjectName;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRetargetAsset>    RetargetAsset;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x640 - 0x5E0)
// ScriptStruct LiveLink.LiveLinkInstanceProxy
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_3FB[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
struct FLiveLinkRetargetAssetReference
{
public:
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LiveLink.LiveLinkVirtualSubject
struct FLiveLinkVirtualSubject
{
public:
	TArray<class FName>                          Subjects;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Source;                                            // 0x20(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


