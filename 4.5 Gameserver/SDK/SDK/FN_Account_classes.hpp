#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x678 (0x6A0 - 0x28)
// Class Account.OnlineAccountCommon
class UOnlineAccountCommon : public UObject
{
public:
	uint8                                        Pad_C33[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AvailabilityServiceGameName;                       // 0x38(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireLightswitchAtStartup;                      // 0x48(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C36[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EulaKey;                                           // 0x50(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FWebEnvUrl>                    WebCreateEpicAccountUrl;                           // 0x60(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bAllowLocalLogout;                                 // 0x70(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C38[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkipRedeemOfflinePurchasesChance;                  // 0x74(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldGrantFreeAccess;                            // 0x78(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C39[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseGameSubAccessRedemption;                       // 0x7A(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowHomeSharingAccess;                           // 0x7B(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireUGCPrivilege;                              // 0x7C(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C3B[0x29B];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaitingRoomState*                     WaitingRoomState;                                  // 0x318(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C3D[0x380];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineAccountCommon* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Account.ExternalAccountProvider
class UExternalAccountProvider : public UObject
{
public:
	TArray<struct FExternalAccountServiceConfig> Services;                                          // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UExternalAccountProvider* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class Account.WaitingRoomState
class UWaitingRoomState : public UObject
{
public:
	uint8                                        Pad_C40[0x34];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GracePeriodMins;                                   // 0x5C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C41[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaitingRoomState* GetDefaultObj();

};

}


