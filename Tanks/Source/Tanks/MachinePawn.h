// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DamageTaker.h"
#include "Cannon.h"
#include "AmmoBox.h"
#include "HealthComponent.h"

#include "MachinePawn.generated.h"

class UStaticMeshComponent;
class ACannon;

UCLASS()
class TANKS_API AMachinePawn : public APawn ,public IDamageTaker
{
	GENERATED_BODY()

public:
	
	AMachinePawn();

	void Fire();
	void FireTypeChange();
	void SetFireAlternative();
	TSubclassOf<ACannon> GetCannonClass();
	

	UFUNCTION()
		void TakeDamage(FDamageData DamageData);

	UFUNCTION()
		void Die();
	UFUNCTION()
		void DamageTaked(float DamageValue);

	UPROPERTY()
		ACannon* Cannon;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* BodyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* TurretMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UBoxComponent* BoxCollision;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
		UHealthComponent* HealthComponent;


	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannon")
		TSubclassOf<ACannon> CannonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannon")
		class UArrowComponent* CannonSetupPoint;

	float ProjectileAmmoBuf{ 0 };
	float TraceAmmoBuf{ 0 };
	float SpecialAmmoBuf{ 0 };



};
