#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Party.Chatroom
// (None)

class UClass* UChatroom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chatroom");

	return Clss;
}


// Chatroom Party.Default__Chatroom
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatroom* UChatroom::GetDefaultObj()
{
	static class UChatroom* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatroom*>(UChatroom::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.Party
// (None)

class UClass* UParty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Party");

	return Clss;
}


// Party Party.Default__Party
// (Public, ClassDefaultObject, ArchetypeObject)

class UParty* UParty::GetDefaultObj()
{
	static class UParty* Default = nullptr;

	if (!Default)
		Default = static_cast<UParty*>(UParty::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.PartyGameState
// (None)

class UClass* UPartyGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyGameState");

	return Clss;
}


// PartyGameState Party.Default__PartyGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class UPartyGameState* UPartyGameState::GetDefaultObj()
{
	static class UPartyGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartyGameState*>(UPartyGameState::StaticClass()->DefaultObject);

	return Default;
}


// Class Party.PartyMemberState
// (None)

class UClass* UPartyMemberState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PartyMemberState");

	return Clss;
}


// PartyMemberState Party.Default__PartyMemberState
// (Public, ClassDefaultObject, ArchetypeObject)

class UPartyMemberState* UPartyMemberState::GetDefaultObj()
{
	static class UPartyMemberState* Default = nullptr;

	if (!Default)
		Default = static_cast<UPartyMemberState*>(UPartyMemberState::StaticClass()->DefaultObject);

	return Default;
}


// Function Party.PartyMemberState.IsPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPartyMemberState::IsPartyLeader()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyMemberState", "IsPartyLeader");

	Params::UPartyMemberState_IsPartyLeader_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Party.PartyMemberState.IsLocalPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPartyMemberState::IsLocalPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PartyMemberState", "IsLocalPlayer");

	Params::UPartyMemberState_IsLocalPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


