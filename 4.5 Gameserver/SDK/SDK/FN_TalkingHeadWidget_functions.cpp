#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TalkingHeadWidget.TalkingHeadWidget_C
// (None)

class UClass* UTalkingHeadWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TalkingHeadWidget_C");

	return Clss;
}


// TalkingHeadWidget_C TalkingHeadWidget.Default__TalkingHeadWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTalkingHeadWidget_C* UTalkingHeadWidget_C::GetDefaultObj()
{
	static class UTalkingHeadWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTalkingHeadWidget_C*>(UTalkingHeadWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTalkingHeadWidget_C::HandleTalkingHeadEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalkingHeadWidget_C", "HandleTalkingHeadEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Subtitle                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EFortAnnouncementDisplayPreferenceDisplayPreference                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortAnnouncementDisplayPreferenceTemp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkingHeadWidget_C::HandleTalkingHeadBegin(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class EFortAnnouncementDisplayPreference Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalkingHeadWidget_C", "HandleTalkingHeadBegin");

	Params::UTalkingHeadWidget_C_HandleTalkingHeadBegin_Params Parms{};

	Parms.Image = Image;
	Parms.Title = Title;
	Parms.Subtitle = Subtitle;
	Parms.DisplayPreference = DisplayPreference;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Subtitle                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTalkingHeadWidget_C::SetTalkingHeadSubtitle(class FText Subtitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalkingHeadWidget_C", "SetTalkingHeadSubtitle");

	Params::UTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params Parms{};

	Parms.Subtitle = Subtitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UTalkingHeadWidget_C::SetTalkingHeadName(class FText Title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalkingHeadWidget_C", "SetTalkingHeadName");

	Params::UTalkingHeadWidget_C_SetTalkingHeadName_Params Parms{};

	Parms.Title = Title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkingHeadWidget_C::SetTalkingHeadImage(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalkingHeadWidget_C", "SetTalkingHeadImage");

	Params::UTalkingHeadWidget_C_SetTalkingHeadImage_Params Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTalkingHeadWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalkingHeadWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTalkingHeadWidget_C::ExecuteUbergraph_TalkingHeadWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalkingHeadWidget_C", "ExecuteUbergraph_TalkingHeadWidget");

	Params::UTalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


