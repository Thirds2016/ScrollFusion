// This code is intellectual property of Thirds, 2016. You may distribute this content as long as you obey the APACHE LICENSE 2.0.

#pragma once
#include "CanvasItem.h"

/**
 * Drawable HUD Canvas Tile item.
 */
class SCROLLFUSION_API CanvasTileItem
{
public:
	CanvasTileItem(FString path);
	~CanvasTileItem();
	FVector2D getTexCentre();
	FCanvasTileItem* tile;
	UTexture2D* texture;
	bool bDrawTile;
};
