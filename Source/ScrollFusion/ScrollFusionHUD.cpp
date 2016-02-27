// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ScrollFusion.h"
#include "ScrollFusionHUD.h"
#include "Engine/Canvas.h"
#include "TextureResource.h"

AScrollFusionHUD::AScrollFusionHUD() : screenCentre(FVector2D())
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> crosshairTexObj(TEXT("/Game/HUD/CrosshairTex"));
	crosshairTex = crosshairTexObj.Object;
}

void AScrollFusionHUD::DrawHUD()
{
	Super::DrawHUD();

	screenCentre.Set(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

	const FVector2D CrosshairDrawPosition((screenCentre.X - (crosshairTex->GetSurfaceWidth() * 0.5)),
										   (screenCentre.Y - (crosshairTex->GetSurfaceHeight() * 0.5f)));

	FCanvasTileItem CrosshairTileItem(CrosshairDrawPosition, crosshairTex->Resource, FLinearColor::White);
	CrosshairTileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem(CrosshairTileItem);
}

