#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x1D0 - 0xF0)
// Class UACBase.UACNetworkComponent
class UUACNetworkComponent : public UActorComponent
{
public:
	int32                                        PlayerID;                                          // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_869[0xDC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUACNetworkComponent* GetDefaultObj();

	void SendPacketToServer(uint8 Type, TArray<uint8>& Packet);
	void SendPacketToClient(uint8 Type, TArray<uint8>& Packet);
	void SendClientHello(uint32 SessionKey);
};

}


