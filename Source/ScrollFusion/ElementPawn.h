// This code is intellectual property of Thirds, 2016. You may distribute this content as long as you obey the APACHE LICENSE 2.0.

#pragma once

#include "GameFramework/Pawn.h"
#include "ElementPawn.generated.h"

UCLASS()
class SCROLLFUSION_API AElementPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AElementPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
};
