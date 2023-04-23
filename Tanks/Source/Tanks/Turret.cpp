// Fill out your copyright notice in the Description page of Project Settings.
#include "Turret.h"
#include "TankPlayerController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Cannon.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ATurret::ATurret()
{
	PrimaryActorTick.bCanEverTick = true;
	
	//BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret body"));
	//RootComponent = BodyMesh;


	//TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret	turret"));
		//TurretMesh->AttachToComponent(BodyMesh,		FAttachmentTransformRules::KeepRelativeTransform);
	//CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Cannon setup point"));
		//CannonSetupPoint->AttachToComponent(TurretMesh,		FAttachmentTransformRules::KeepRelativeTransform);
		

	UStaticMesh* turretMeshTemp = LoadObject<UStaticMesh>(this, *TurretMeshPath);
	if (turretMeshTemp)
		TurretMesh->SetStaticMesh(turretMeshTemp);
	UStaticMesh* bodyMeshTemp = LoadObject<UStaticMesh>(this, *BodyMeshPath);
	if (bodyMeshTemp)
		BodyMesh->SetStaticMesh(bodyMeshTemp);
	

	
}
// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();

	///*
	//FActorSpawnParameters params;
	//params.Owner = this;
	//Cannon = GetWorld()->SpawnActor<ACannon>(CannonClass, params);
	//Cannon->AttachToComponent(CannonSetupPoint,	FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	//*/

	FActorSpawnParameters spawnParams;
	spawnParams.Instigator = this;
	spawnParams.Owner = this;


	Cannon = GetWorld()->SpawnActor<ACannon>(CannonClass, spawnParams);
	Cannon->AttachToComponent(CannonSetupPoint, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	FTimerHandle _targetingTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(_targetingTimerHandle, this,	&ATurret::Targeting, TargetingRate, true, TargetingRate);
}

void ATurret::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	UStaticMesh* turretMeshTemp = LoadObject<UStaticMesh>(this, *TurretMeshPath);
	if (turretMeshTemp)
		TurretMesh->SetStaticMesh(turretMeshTemp);
	UStaticMesh* bodyMeshTemp = LoadObject<UStaticMesh>(this, *BodyMeshPath);
	if (bodyMeshTemp)
		BodyMesh->SetStaticMesh(bodyMeshTemp);
}


void ATurret::Destroyed()
{
	if (Cannon)
		Cannon->Destroy();
}
void ATurret::Targeting()
{
	if (IsPlayerInRange() )
	{
		RotateToPlayer();

		if (CanFire() && IsPlayerSeen())
		{
			Fire();
		}
	}
	
}
void ATurret::RotateToPlayer()
{
	FRotator targetRotation =	UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), PlayerPawn->GetActorLocation());
	FRotator currRotation = TurretMesh->GetComponentRotation();
	targetRotation.Pitch = currRotation.Pitch;
	targetRotation.Roll = currRotation.Roll;
	TurretMesh->SetWorldRotation(FMath::Lerp(currRotation, targetRotation, TargetingSpeed));
}
bool ATurret::IsPlayerInRange()
{
	return FVector::Distance(PlayerPawn->GetActorLocation(), GetActorLocation()) <=	TargetingRange;
}

bool ATurret::CanFire()
{
	FVector targetingDir = TurretMesh->GetForwardVector();
	FVector dirToPlayer = PlayerPawn->GetActorLocation() - GetActorLocation();
	dirToPlayer.Normalize();
	float aimAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(targetingDir, dirToPlayer)));
	return aimAngle <= Accurency; 
}

bool ATurret::IsPlayerSeen() {
	FVector playerPos = PlayerPawn->GetActorLocation();
	FVector eyesPos = this->GetEyesPosition();
	FHitResult hitResult;
	FCollisionQueryParams traceParams =	FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);
	traceParams.bTraceComplex = true;
	traceParams.AddIgnoredActor(this);
	traceParams.bReturnPhysicalMaterial = false;
	if (GetWorld()->LineTraceSingleByChannel(hitResult, eyesPos, playerPos,	ECollisionChannel::ECC_Visibility, traceParams))
	{
		if (hitResult.GetActor())
		{
			DrawDebugLine(GetWorld(), eyesPos, hitResult.Location, FColor::Cyan, false, 0.5f, 0, 10);
			return hitResult.GetActor() == PlayerPawn;
		}
	}
	DrawDebugLine(GetWorld(), eyesPos, playerPos, FColor::Cyan, false, 0.5f, 0, 10);
	return false;
};

FVector ATurret::GetEyesPosition()
{
	return CannonSetupPoint->GetComponentLocation();
}

/*
void ATurret::TakeDamage(FDamageData DamageData)
{
	UE_LOG(LogTemp, Warning, TEXT("Turret %s taked damage:%f "), *GetName(),
		DamageData.DamageValue);
}*/

