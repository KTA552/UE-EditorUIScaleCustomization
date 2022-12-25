// Copyright Epic Games, Inc. All Rights Reserved.

#include "EditorUIScaleCustomization.h"

#include "Editor.h"
#include "EditorUIScaleCustomizationSettings.h"

#define LOCTEXT_NAMESPACE "FEditorUIScaleCustomizationModule"

void FEditorUIScaleCustomizationModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	if (!IsRunningCommandlet())
	{
		FSlateApplication::Get().SetApplicationScale(GetDefault<UEditorUIScaleCustomizationSettings>()->UIScale);
	}
}

void FEditorUIScaleCustomizationModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEditorUIScaleCustomizationModule, EditorUIScaleCustomization)