#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMatchmakingTile.AthenaMatchmakingTile_C
// (None)

class UClass* UAthenaMatchmakingTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMatchmakingTile_C");

	return Clss;
}


// AthenaMatchmakingTile_C AthenaMatchmakingTile.Default__AthenaMatchmakingTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMatchmakingTile_C* UAthenaMatchmakingTile_C::GetDefaultObj()
{
	static class UAthenaMatchmakingTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMatchmakingTile_C*>(UAthenaMatchmakingTile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlayIntroOrOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayIntro                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingTile_C::PlayIntroOrOutro(bool PlayIntro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "PlayIntroOrOutro");

	Params::UAthenaMatchmakingTile_C_PlayIntroOrOutro_Params Parms{};

	Parms.PlayIntro = PlayIntro;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.UpdateTileAvailability
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Available                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingTile_C::UpdateTileAvailability(bool Available)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "UpdateTileAvailability");

	Params::UAthenaMatchmakingTile_C_UpdateTileAvailability_Params Parms{};

	Parms.Available = Available;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetTileSize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               UseLargeSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingTile_C::SetTileSize(bool UseLargeSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "SetTileSize");

	Params::UAthenaMatchmakingTile_C_SetTileSize_Params Parms{};

	Parms.UseLargeSize = UseLargeSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlaylistChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*         PlaylistToRepresent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingTile_C::PlaylistChanged(class UFortPlaylistAthena* PlaylistToRepresent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "PlaylistChanged");

	Params::UAthenaMatchmakingTile_C_PlaylistChanged_Params Parms{};

	Parms.PlaylistToRepresent = PlaylistToRepresent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.TilePlaylistSetAsMatchmakingPlaylist
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::TilePlaylistSetAsMatchmakingPlaylist()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "TilePlaylistSetAsMatchmakingPlaylist");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnImageLoadingComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::OnImageLoadingComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "OnImageLoadingComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::SetDefaultImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "SetDefaultImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.ExecuteUbergraph_AthenaMatchmakingTile
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Available                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_UseLargeSize                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlaylistAthena*         K2Node_Event_PlaylistToRepresent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue1                       (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaMatchmakingTile_C::ExecuteUbergraph_AthenaMatchmakingTile(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool K2Node_Event_Available, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_UseLargeSize, class UFortPlaylistAthena* K2Node_Event_PlaylistToRepresent, float K2Node_Select1_Default, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Variable4, float K2Node_Select4_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingTile_C", "ExecuteUbergraph_AthenaMatchmakingTile");

	Params::UAthenaMatchmakingTile_C_ExecuteUbergraph_AthenaMatchmakingTile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Event_Available = K2Node_Event_Available;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_UseLargeSize = K2Node_Event_UseLargeSize;
	Parms.K2Node_Event_PlaylistToRepresent = K2Node_Event_PlaylistToRepresent;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue1 = CallFunc_MakeBrushFromTexture_ReturnValue1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


