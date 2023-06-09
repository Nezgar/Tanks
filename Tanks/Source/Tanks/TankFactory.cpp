// Fill out your copyright notice in the Description page of Project Settings.


#include "TankFactory.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

ATankFactory::ATankFactory()
{
	PrimaryActorTick.bCanEverTick = false;
	USceneComponent* sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = sceneComp;
	ActivatedBuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Activated Building Mesh"));
	ActivatedBuildingMesh->SetupAttachment(sceneComp);

	DeactivatedBuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Deactivated Building Mesh"));
	DeactivatedBuildingMesh->SetupAttachment(sceneComp);
	DeactivatedBuildingMesh->SetHiddenInGame(true);

	TankSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Cannon setup	point"));
		TankSpawnPoint->AttachToComponent(sceneComp, FAttachmentTransformRules::KeepRelativeTransform);
	HitCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Hit collider"));
	HitCollider->SetupAttachment(sceneComp);
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health	component"));
		HealthComponent->OnDie.AddUObject(this, &ATankFactory::Die);
	HealthComponent->OnDamaged.AddUObject(this, &ATankFactory::DamageTaked);


}

void ATankFactory::BeginPlay()
{
	Super::BeginPlay();
	if (LinkedMapLoader)LinkedMapLoader->SetIsActivated(false);
	

	
	GetWorld()->GetTimerManager().SetTimer(_targetingTimerHandle, this,	&ATankFactory::SpawnNewTank, SpawnTankRate, true, SpawnTankRate);
}

void ATankFactory::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
}

void ATankFactory::Die()
{
	if (LinkedMapLoader)LinkedMapLoader->SetIsActivated(true);

	ActivatedBuildingMesh->SetHiddenInGame(true);
	DeactivatedBuildingMesh->SetHiddenInGame(false);
	GetWorld()->GetTimerManager().ClearTimer(_targetingTimerHandle);

	UGameplayStatics::OpenLevel(GetWorld(), LoadLevelName);

	//Destroy();
}

void ATankFactory::DamageTaked(float DamageValue)
{
	UE_LOG(LogTemp, Warning, TEXT("Factory %s taked damage:%f Health:%f"),	*GetName(), DamageValue, HealthComponent->GetHealth());
}

void ATankFactory::SpawnNewTank()
{
	FTransform spawnTransform(TankSpawnPoint->GetComponentRotation(),
		TankSpawnPoint->GetComponentLocation(), FVector(1));
	ATankPawn* newTank = GetWorld()->SpawnActorDeferred<ATankPawn>(SpawnTankClass,
		spawnTransform, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	//
	newTank->SetPatrollingPoints(TankWayPoints);
	//
	UGameplayStatics::FinishSpawningActor(newTank, spawnTransform);
}
