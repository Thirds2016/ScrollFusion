// This code is intellectual property of Thirds, 2016. You may distribute this content as long as you obey the APACHE LICENSE 2.0.

#pragma once

#include "ScrollFusionProjectile.h"
#include "ParticleDefinitions.h"
#include "ProjectileElementFire.generated.h"

UCLASS(config=Game)
class SCROLLFUSION_API AProjectileElementFire : public AScrollFusionProjectile
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = Projectile)
	UParticleSystem* Fire;

public:
	AProjectileElementFire();

	void OnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
