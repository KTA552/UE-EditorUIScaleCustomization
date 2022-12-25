// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EditorUIScaleCustomizationSettings.generated.h"

/**
 * 
 */
UCLASS(Config=EditorPerProjectUserSettings)
class EDITORUISCALECUSTOMIZATION_API UEditorUIScaleCustomizationSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	explicit UEditorUIScaleCustomizationSettings(const FObjectInitializer& Initializer)
		: UIScale(1.0f)
	{
	}

	virtual FName GetCategoryName() const override { return "Plugins"; }
	
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	
	UPROPERTY(Config, EditAnywhere, BlueprintReadWrite, meta=(ConfigRestartRequired = 1.0f, UIMin=0.5f, UIMax=3.0f))
	float UIScale;
};
