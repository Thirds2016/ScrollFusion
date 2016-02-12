// This code is intellectual property of Thirds, 2016. You may distribute this content as long as you obey the APACHE LICENSE 2.0.

#include "ScrollFusion.h"
#include "CanvasTileItem.h"

CanvasTileItem::CanvasTileItem(FString path) : bDrawTile(true)
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> object(path.GetCharArray().GetData());
	texture = object.Object;
	tile = new FCanvasTileItem(FVector2D(), texture->Resource, FLinearColor::White);
}

CanvasTileItem::~CanvasTileItem()
{
	delete tile;
}

FVector2D CanvasTileItem::getTexCentre()
{
	return FVector2D(texture->GetSurfaceWidth() * 0.5f, texture->GetSurfaceHeight() * 0.5f);
}
