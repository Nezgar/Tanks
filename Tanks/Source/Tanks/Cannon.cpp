// Fill out your copyright notice in the Description page of Project Settings.


#include "Cannon.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Projectile.h"
#include "TankPawn.h"
#include "AmmoBox.h"
#include "GamePool.h"

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
		
		if (CannonType == ECannonType::FireProjectile)
		{
			FireProjectile();
		}
		else if(CannonType == ECannonType::FireTrace)
		{
			FireTrace();
		}
		else if(CannonType == ECannonType::FireSpecial)
		{
			FireSpecial();
		}
    }
	else {
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, "Ammo is empty!!!!!!!!!!! Start Reload(5sec)");
		bReadyToFire = false;
		GetWorld()->GetTimerManager().SetTimer(FullReloadTimer, this, &ACannon::ReloadFullAmmo, FullAmmoReloadTime, false);
		bReadyToFire = true;
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

	if (CannonType == ECannonType::FireProjectile)
	{
		AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
		if (Projectile) Projectile->Start();
		BulletCount++;
		if (BulletCount >= 3) {
			GetWorldTimerManager().ClearTimer(FireDelayTimer);
			Reload();
			BulletCount = 0;
		}
	}
	else if (CannonType == ECannonType::FireTrace)
	{
		FireTrace();
	}
	else if (CannonType == ECannonType::FireSpecial)
	{
		FireSpecial();
	}


	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, "Alternative fire projectile ended");
}

void ACannon::FireProjectile()
{

	///*
	if (AltFire == false) {
		AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
		if (Projectile) Projectile->Start();
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, "Fire projectile, -1 ammo");
		ProjectileAmmo -= 1;
		bReadyToFire = false;
		GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
	}
	else {
		bReadyToFire = false;
		GetWorld()->GetTimerManager().SetTimer(FireDelayTimer, this, &ACannon::FireAlternative, FireDelayTime, true, 0.0f);
		ProjectileAmmo -= 1;

	}
	//*/

	/*
	GamePool->PoolGetProjectile(ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Purple, "Fire projectile, -1 ammo");
	Ammo -= 1;
	bReadyToFire = false;
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
	//*/
}

void ACannon::FireTrace()
{
	
	FHitResult hitResult;
	FCollisionQueryParams traceParams = FCollisionQueryParams();
	traceParams.AddIgnoredActor(this);
	//traceParams.AddIgnoredActor(APawn::GetPawn());
	//traceParams.AddIgnoredActor(GetWorld()->GetLevelScriptActor());
	traceParams.bReturnPhysicalMaterial = false;
	FVector Start = ProjectileSpawnPoint->GetComponentLocation();
	FVector End = Start + ProjectileSpawnPoint->GetForwardVector() * FireRange;

	if (GetWorld()->LineTraceSingleByChannel(hitResult, Start, End, ECollisionChannel::ECC_Visibility, traceParams))
	{
		DrawDebugLine(GetWorld(), Start, hitResult.Location, FColor::Red, false, 1.0f, 0, 5);
		if (hitResult.GetActor()) {
			AActor* OverlappedActor = hitResult.GetActor();
			UE_LOG(LogTemp, Warning, TEXT("Actor: %s"), *OverlappedActor->GetName());

			// Ignore Tank 
			ATankPawn* TankPawn = Cast<ATankPawn>(OverlappedActor);
			if(!TankPawn)OverlappedActor->Destroy();
		}
	}
	else {
		DrawDebugLine(GetWorld(), Start, End, FColor::Yellow, false, 1.0f, 0, 5);
	}

	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, "Fire trace, -10 ammo");
	ProjectileAmmo -= 10;
	bReadyToFire = false;
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
}

void ACannon::FireSpecial()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Black, "Fire special, -3 ammo");
	SpecialAmmo -= 3;
	bReadyToFire = false;
	GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &ACannon::Reload, FireRate, false);
}



/*
void ACannon::FireTypeChange(ATankPawn *TankPawn)
{
	if (CannonType == ECannonType::FireProjectile) {
		TankPawn->SetupCannon(CannonType);
		//CannonType = ECannonType::FireSpecial;
		
	}
	else if(CannonType == ECannonType::FireSpecial){
		CannonType = ECannonType::FireTrace;
		
	}
	else {
		CannonType = ECannonType::FireProjectile;
		
	}

	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, "Fire changed");
	
}
*/

bool ACannon::IsReadyToFire()
{
	return bReadyToFire; 
}

void ACannon::Reload()
{
	bReadyToFire = true;
}

void ACannon::ReloadFullAmmo()
{
	if(ProjectileAmmo <= 0)	ProjectileAmmo = 100.0f;
	else if(TraceAmmo <= 0)	TraceAmmo = 100.0f;
	else if (SpecialAmmo <= 0)	SpecialAmmo = 100.0f;

	EmptyAmmo = false;
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Silver, "Full ammo reloaded");
}

bool ACannon::IsEmptyAmmo()
{
	if (ProjectileAmmo <= 0 || TraceAmmo <= 0 || SpecialAmmo <= 0) { return EmptyAmmo = true; }
	else { return EmptyAmmo = false; } 
}



// Called when the game starts or when spawned
void ACannon::BeginPlay()
{
	Super::BeginPlay();
	bReadyToFire;
	
}


