#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XL-S.TextStyle-Header-XL-S_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXLMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XL-S_C");

	return Clss;
}


// TextStyle-Header-XL-S_C TextStyle-Header-XL-S.Default__TextStyle-Header-XL-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXLMinusS_C* UTextStyleMinusHeaderMinusXLMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXLMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXLMinusS_C*>(UTextStyleMinusHeaderMinusXLMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


