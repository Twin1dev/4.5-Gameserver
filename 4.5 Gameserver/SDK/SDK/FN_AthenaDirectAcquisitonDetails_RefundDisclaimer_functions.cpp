#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaDirectAcquisitonDetails_RefundDisclaimer.AthenaDirectAcquisitonDetails_RefundDisclaimer_C
// (None)

class UClass* UAthenaDirectAcquisitonDetails_RefundDisclaimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaDirectAcquisitonDetails_RefundDisclaimer_C");

	return Clss;
}


// AthenaDirectAcquisitonDetails_RefundDisclaimer_C AthenaDirectAcquisitonDetails_RefundDisclaimer.Default__AthenaDirectAcquisitonDetails_RefundDisclaimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* UAthenaDirectAcquisitonDetails_RefundDisclaimer_C::GetDefaultObj()
{
	static class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaDirectAcquisitonDetails_RefundDisclaimer_C*>(UAthenaDirectAcquisitonDetails_RefundDisclaimer_C::StaticClass()->DefaultObject);

	return Default;
}

}


