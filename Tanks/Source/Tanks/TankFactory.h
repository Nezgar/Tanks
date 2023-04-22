// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TargetPoint.h"
#include "GameFramework/Actor.h"
#include "HealthComponent.h"
#include "DamageTaker.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "TankPawn.h"
#include "MapLoader.h"

#include "TankFactory.generated.h"

class AMapLoader;

UCLASS()
class TANKS_API ATankFactory : public AActor, public IDamageTaker
{
	GENERATED_BODY()

protected:
		UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
		UStaticMeshComponent* ActivatedBuildingMesh;
		UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
			UStaticMeshComponent* DeactivatedBuildingMesh;



	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
		UArrowComponent* TankSpawnPoint;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
		UBoxComponent* HitCollider;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
		UHealthComponent* HealthComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn tanks params")
		TSubclassOf<ATankPawn> SpawnTankClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Spawn tanks params")
		float SpawnTankRate = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn tanks params")
		TArray<ATargetPoint*> TankWayPoints;

	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn tanks params")
		AMapLoader* LinkedMapLoader;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Load level name")
			FName LoadLevelName;
public:
	// Sets default values for this actor's properties
	ATankFactory();
	UFUNCTION()
		void TakeDamage(FDamageData DamageData);
		FTimerHandle _targetingTimerHandle;

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void SpawnNewTank();
	UFUNCTION()
		void Die();
	UFUNCTION()
		void DamageTaked(float DamageValue);
};


