#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class Party.Chatroom
class UChatroom : public UObject
{
public:
	class FString                                CurrentChatRoomId;                                 // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxChatRoomRetries;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumChatRoomRetries;                                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_427[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChatroom* GetDefaultObj();

};

// 0x208 (0x230 - 0x28)
// Class Party.Party
class UParty : public UObject
{
public:
	uint8                                        Pad_428[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DefaultMaxPartySize;                               // 0x98(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_429[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLeavingPersistentParty;                           // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42A[0x17F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UParty* GetDefaultObj();

};

// 0x298 (0x2C0 - 0x28)
// Class Party.PartyGameState
class UPartyGameState : public UObject
{
public:
	class UScriptStruct*                         PartyStateRefDef;                                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_42C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      OwningUserId;                                      // 0x38(0x28)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_42D[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDebugAcceptingMembers;                            // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_42E[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bStayWithPartyOnDisconnect;                        // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_431[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UPartyMemberState>         PartyMemberStateClass;                             // 0xD8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_434[0x108];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class APartyBeaconClient>        ReservationBeaconClientClass;                      // 0x1E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APartyBeaconClient*                    ReservationBeaconClient;                           // 0x1F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_436[0xC8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartyGameState* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class Party.PartyMemberState
class UPartyMemberState : public UObject
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x28(0x28)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class UScriptStruct*                         MemberStateRefDef;                                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_43E[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHasAnnouncedJoin;                                 // 0x80(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPartyMemberState* GetDefaultObj();

	bool IsPartyLeader();
	bool IsLocalPlayer();
};

}


