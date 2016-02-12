// This code is intellectual property of Thirds, 2016. You may distribute this content as long as you obey the APACHE LICENSE 2.0.

#include "ScrollFusion.h"
#include "ElementPawn.h"


// Sets default values
AElementPawn::AElementPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AElementPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElementPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AElementPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

