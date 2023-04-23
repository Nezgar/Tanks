// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "MachinePawn.h"
#include "Cannon.h"
#include "DamageTaker.h"
#include "HealthComponent.h"
#include "TankPawn.h"

#include "Turret.generated.h"

UCLASS()
class TANKS_API ATurret : public AMachinePawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurret();

	FVector GetEyesPosition();

protected:

	
	
	UPROPERTY()
		APawn* PlayerPawn;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Targeting")
		float TargetingRange = 1000;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Targeting")
		float TargetingSpeed = 0.1f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Targeting")
		float TargetingRate = 0.005f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Targeting")
		float Accurency = 30;

	const FString BodyMeshPath ="StaticMesh'/Game/CSC/Meshes/SM_CSC_Tower1.SM_CSC_Tower1'";
	const FString TurretMeshPath ="StaticMesh'/Game/CSC/Meshes/SM_CSC_Gun1.SM_CSC_Gun1'";

	


protected:
	virtual void BeginPlay() override;
	virtual void Destroyed() override;
	void Targeting();
	void RotateToPlayer();
	bool IsPlayerInRange();
	bool CanFire();
	bool IsPlayerSeen();

	virtual void PostInitializeComponents() override;


};
