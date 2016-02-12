// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ScrollFusion.h"
#include "ScrollFusionGameMode.h"
#include "ScrollFusionHUD.h"
#include "ScrollFusionCharacter.h"

AScrollFusionGameMode::AScrollFusionGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AScrollFusionHUD::StaticClass();
}
