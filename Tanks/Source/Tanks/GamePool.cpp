// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePool.h"

// Sets default values
AGamePool::AGamePool()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = SceneComp;

	

}

void AGamePool::PoolAdd(AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "FUCK1");
	AProjectile* Projectile = Cast<AProjectile>(OtherActor);
	if (!Projectile) {
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "FUCK2");
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "FUCK2");
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "FUCK2");
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "FUCK2");

		PoolAddProjectile();
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "FUCK ELSE");
	}
}

void AGamePool::PoolAddProjectile()
{
		FActorSpawnParameters spawnParamsProjectile;
		//spawnParamsProjectile.Owner = this;

		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "FUCK");
		for (int i = 0; i < ProjectilePool; i++) {
			ProjectilePool_[i] = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, spawnParamsProjectile);
			if (ProjectilePool_[i]) {
				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "Ammo is empty!!!!!!!!!!! Start Reload(5sec)");
			}
		}
	}

void AGamePool::PoolGetProjectile(FVector ProjectileSpawnPointVector, FRotator ProjectileSpawnPointRotator)
{
	for (int i = 0; i < ProjectilePool; i++) {
		if (!InUseProjectile())
		{
			//ProjectilePool_[i]->SetActorLocation(ProjectileSpawnPointVector);
		}
		//ProjectilePool_[i] = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, spawnParamsProjectile);
	}
}

bool AGamePool::InUseProjectile()
{
	return false;
}

