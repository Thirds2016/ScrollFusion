// This code is intellectual property of Thirds, 2016. You may distribute this content as long as you obey the APACHE LICENSE 2.0.

#include "ScrollFusion.h"
#include "ProjectileElementFire.h"

AProjectileElementFire::AProjectileElementFire() : AScrollFusionProjectile() {

	ConstructorHelpers::FObjectFinder<UParticleSystem> FireFinder(TEXT("/Game/StarterContent/Particles/P_Fire"));
	Fire = FireFinder.Object;
	if (GetWorld() != nullptr)
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Fire, FVector(0, 0, 100));
	else {}
}

void AProjectileElementFire::OnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {

	AScrollFusionProjectile::OnHit(OtherActor, OtherComp, NormalImpulse, Hit);
}