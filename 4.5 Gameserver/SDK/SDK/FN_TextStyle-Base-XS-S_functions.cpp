#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-S.TextStyle-Base-XS-S_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-S_C");

	return Clss;
}


// TextStyle-Base-XS-S_C TextStyle-Base-XS-S.Default__TextStyle-Base-XS-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusS_C* UTextStyleMinusBaseMinusXSMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusS_C*>(UTextStyleMinusBaseMinusXSMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


