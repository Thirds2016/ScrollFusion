// This code is intellectual property of Thirds, 2016. You may distribute this content as long as you obey the APACHE LICENSE 2.0.

#include "ScrollFusion.h"
#include "ScrollFusionGameModeNoWeapon.h"
#include "ScrollFusionHUD.h"
#include "ScrollFusionCharacterNoWeapon.h"

AScrollFusionGameModeNoWeapon::AScrollFusionGameModeNoWeapon()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacterNoWeapon"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AScrollFusionHUD::StaticClass();
}
