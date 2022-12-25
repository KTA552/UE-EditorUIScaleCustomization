// Fill out your copyright notice in the Description page of Project Settings.


#include "EditorUIScaleCustomizationSettings.h"

void UEditorUIScaleCustomizationSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetPropertyName() == "UIScale")
	{
		FSlateApplication::Get().SetApplicationScale(UIScale);
	}
}
