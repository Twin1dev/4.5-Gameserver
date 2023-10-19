#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-MessageCenter-Description.TextStyle-MessageCenter-Description_C
// (None)

class UClass* UTextStyleMinusMessageCenterMinusDescription_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-MessageCenter-Description_C");

	return Clss;
}


// TextStyle-MessageCenter-Description_C TextStyle-MessageCenter-Description.Default__TextStyle-MessageCenter-Description_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusMessageCenterMinusDescription_C* UTextStyleMinusMessageCenterMinusDescription_C::GetDefaultObj()
{
	static class UTextStyleMinusMessageCenterMinusDescription_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusMessageCenterMinusDescription_C*>(UTextStyleMinusMessageCenterMinusDescription_C::StaticClass()->DefaultObject);

	return Default;
}

}


