// Fill out your copyright notice in the Description page of Project Settings.


#include "MachinePawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "HealthComponent.h"
#include "Cannon.h"

// Sets default values
AMachinePawn::AMachinePawn()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RootComponent"));
	RootComponent = BoxCollision;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	BodyMesh->SetupAttachment(BoxCollision);


	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	TurretMesh->SetupAttachment(BodyMesh);


	CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("CannonSetupPoint"));
	CannonSetupPoint->SetupAttachment(TurretMesh);
	/**/

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health component"));

	HealthComponent->OnDie.AddUObject(this, &AMachinePawn::Die);
	HealthComponent->OnDamaged.AddUObject(this, &AMachinePawn::DamageTaked);
}

void AMachinePawn::Fire()
{
	if (Cannon) {
		Cannon->Fire();
	}
}

void AMachinePawn::FireTypeChange()
{
	/*
	if (Cannon) {
		Cannon->FireTypeChange(this);
	}*/
}

void AMachinePawn::SetFireAlternative()
{
	if (Cannon) {
		Cannon->SetFireAlternative();
	}
}

TSubclassOf<ACannon> AMachinePawn::GetCannonClass()
{
	return CannonClass;
}

void AMachinePawn::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
}

void AMachinePawn::Die()
{
	Destroy();
}

void AMachinePawn::DamageTaked(float DamageValue)
{
	UE_LOG(LogTemp, Warning, TEXT("Tank %s taked damage:%f Health:%f"), *GetName(), DamageValue, HealthComponent->GetHealth());
}

void AMachinePawn::BeginPlay()
{
	Super::BeginPlay();

	//SetupCannon(CannonClass);
}

