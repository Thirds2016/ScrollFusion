// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "CanvasItem.h"
#include "ScrollFusionHUD.generated.h"

UCLASS()
class AScrollFusionHUD : public AHUD
{
	GENERATED_BODY()

public:
	AScrollFusionHUD();

	virtual void DrawHUD() override;

private:
	TArray<FCanvasTileItem*>* canvasTileItems;
	UTexture2D* crosshairTex;
	FVector2D screenCentre;
};

