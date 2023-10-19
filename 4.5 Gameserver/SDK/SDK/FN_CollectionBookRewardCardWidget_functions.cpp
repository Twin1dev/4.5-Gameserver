#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookRewardCardWidget.CollectionBookRewardCardWidget_C
// (None)

class UClass* UCollectionBookRewardCardWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookRewardCardWidget_C");

	return Clss;
}


// CollectionBookRewardCardWidget_C CollectionBookRewardCardWidget.Default__CollectionBookRewardCardWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookRewardCardWidget_C* UCollectionBookRewardCardWidget_C::GetDefaultObj()
{
	static class UCollectionBookRewardCardWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookRewardCardWidget_C*>(UCollectionBookRewardCardWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookRewardCardWidget.CollectionBookRewardCardWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookRewardCardWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookRewardCardWidget_C", "PreConstruct");

	Params::UCollectionBookRewardCardWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookRewardCardWidget.CollectionBookRewardCardWidget_C.ExecuteUbergraph_CollectionBookRewardCardWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookRewardCardWidget_C::ExecuteUbergraph_CollectionBookRewardCardWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookRewardCardWidget_C", "ExecuteUbergraph_CollectionBookRewardCardWidget");

	Params::UCollectionBookRewardCardWidget_C_ExecuteUbergraph_CollectionBookRewardCardWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


