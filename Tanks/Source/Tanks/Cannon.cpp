// Fill out your copyright notice in the Description page of Project Settings.


#include "Cannon.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"

// Sets default values
ACannon::ACannon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = SceneComp;

	CannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CannonMesh"));
	CannonMesh->SetupAttachment(SceneComp);

	ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	ProjectileSpawnPoint->SetupAttachment(CannonMesh);
}

void ACannon::Fire()
{
	if (!IsReadyToFire()) {
		return;
	}

	if (IsEmptyAmmo() != true) {

		switch (CannonType) {
		case ECannonType::FireProjectile:
			if (AltFire == false ) {
				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, "Fire projectile, -1 ammo");
				Ammo -= 1;
				bReadyToFire = false;
				GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
				break;
			}
			else {
				bReadyToFire = false;
				GetWorld()->GetTimerManager().SetTimer(FireDelayTimer, this, &ACannon::FireAlternative, FireDelayTime, true, 0.0f);
				Ammo -= 1;
				break;
				
			}

		case ECannonType::FireTrace:
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, "Fire trace, -10 ammo");
			Ammo -= 10;
			bReadyToFire = false;
			GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
			break;
		case ECannonType::FireSpecial:
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Black, "Fire special, -3 ammo");
			Ammo -= 3;
			bReadyToFire = false;
			GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
			break;
		}

	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "Ammo is empty!!!!!!!!!!! Start Reload(5sec)");
		
		GetWorld()->GetTimerManager().SetTimer(FullReloadTimer, this, &ACannon::ReloadFullAmmo, FullAmmoReloadTime , false);
	}
	

	
}


void ACannon::SetFireAlternative() {
	if (AltFire == false) { 
		AltFire = true; 
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "Alt on"); 
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "Alt off");
		AltFire = false;
	}
}

 // Multiply shots
void  ACannon::FireAlternative() {
	switch (CannonType) {
	case ECannonType::FireProjectile:
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, "Fire projectile");
		BulletCount++;
		if (BulletCount >= 3) {
			GetWorldTimerManager().ClearTimer(FireDelayTimer);
			Reload();
			BulletCount = 0;
		}
		break;
	case ECannonType::FireTrace:
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, "Fire trace");
		break;
	case ECannonType::FireSpecial:
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Black, "Fire special");
		break;
	}
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, "Alternative fire projectile ended");
}


void ACannon::FireTypeChange()
{
	if (CannonType == ECannonType::FireProjectile) {
		CannonType = ECannonType::FireSpecial;
		
	}
	else if(CannonType == ECannonType::FireSpecial){
		CannonType = ECannonType::FireTrace;
		
	}
	else {
		CannonType = ECannonType::FireProjectile;
		
	}

	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, "Fire changed");
	
}

bool ACannon::IsReadyToFire()
{
	
	return bReadyToFire; // && Ammo > 0;
}

void ACannon::Reload()
{
	
	bReadyToFire = true;
}

void ACannon::ReloadFullAmmo()
{
	Ammo = 100.0f;
	EmptyAmmo = false;
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Silver, "Full ammo reloaded");
}

bool ACannon::IsEmptyAmmo()
{
	if (Ammo <= 0) { return EmptyAmmo = true; }
	else { return EmptyAmmo = false; } // && Ammo > 0;
}

// Called when the game starts or when spawned
void ACannon::BeginPlay()
{
	Super::BeginPlay();
	bReadyToFire;
	
}


