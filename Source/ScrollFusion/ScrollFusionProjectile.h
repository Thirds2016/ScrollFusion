// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Actor.h"
#include "ScrollFusionProjectile.generated.h"

UENUM(BlueprintType)
enum class ESpellType : uint8
{
	// ST_ prefix means 'Spell Type'
	ST_None		UMETA(DisplayName = "No Spell"),
	ST_Water 	UMETA(DisplayName = "Rank 1: Water"),
	ST_Fire 	UMETA(DisplayName = "Rank 1: Fire"),
};

UCLASS(config=Game)
class AScrollFusionProjectile : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	class USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovement;

public:
	AScrollFusionProjectile();

	/** called when projectile hits something */
	UFUNCTION()
	virtual void OnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	FORCEINLINE class USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	FORCEINLINE class UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

