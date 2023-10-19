#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaHUDFeedbackLine.AthenaHUDFeedbackLine_C
// (None)

class UClass* UAthenaHUDFeedbackLine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaHUDFeedbackLine_C");

	return Clss;
}


// AthenaHUDFeedbackLine_C AthenaHUDFeedbackLine.Default__AthenaHUDFeedbackLine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaHUDFeedbackLine_C* UAthenaHUDFeedbackLine_C::GetDefaultObj()
{
	static class UAthenaHUDFeedbackLine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaHUDFeedbackLine_C*>(UAthenaHUDFeedbackLine_C::StaticClass()->DefaultObject);

	return Default;
}

}


