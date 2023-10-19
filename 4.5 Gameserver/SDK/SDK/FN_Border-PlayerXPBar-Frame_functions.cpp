#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-PlayerXPBar-Frame.Border-PlayerXPBar-Frame_C
// (None)

class UClass* UBorderMinusPlayerXPBarMinusFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-PlayerXPBar-Frame_C");

	return Clss;
}


// Border-PlayerXPBar-Frame_C Border-PlayerXPBar-Frame.Default__Border-PlayerXPBar-Frame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusPlayerXPBarMinusFrame_C* UBorderMinusPlayerXPBarMinusFrame_C::GetDefaultObj()
{
	static class UBorderMinusPlayerXPBarMinusFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusPlayerXPBarMinusFrame_C*>(UBorderMinusPlayerXPBarMinusFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


