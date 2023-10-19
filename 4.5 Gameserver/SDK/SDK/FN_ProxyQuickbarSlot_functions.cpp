#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProxyQuickbarSlot.ProxyQuickbarSlot_C
// (None)

class UClass* UProxyQuickbarSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProxyQuickbarSlot_C");

	return Clss;
}


// ProxyQuickbarSlot_C ProxyQuickbarSlot.Default__ProxyQuickbarSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProxyQuickbarSlot_C* UProxyQuickbarSlot_C::GetDefaultObj()
{
	static class UProxyQuickbarSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProxyQuickbarSlot_C*>(UProxyQuickbarSlot_C::StaticClass()->DefaultObject);

	return Default;
}

}


