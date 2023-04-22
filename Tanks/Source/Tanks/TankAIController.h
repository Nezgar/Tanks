// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankPawn.h"

#include "TAnkAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANKS_API ATAnkAIController : public AAIController
{
	GENERATED_BODY()
public:

	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;

	UPROPERTY()
		ATankPawn* TankPawn;

	UPROPERTY()
		APawn* PlayerPawn;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Move params|Patrol points" , Meta = (MakeEditWidget = true))
		TArray<FVector> PatrollingPoints;

	int32 CurrentPatrolPointIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Move params|Accurency")
		float MovementAccurency = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Fire Change")
		float WeaponChangeDelay = 5;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Targeting")
		float TargetingRange = 1000;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Targeting")
		float TargetingSpeed = 0.1f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Targeting")
		float Accurency = 10;

	

	float GetRotationgValue();
	void Targeting();
	void RotateToPlayer();
	bool IsPlayerInRange();
	bool CanFire();
	void Fire();

	bool IsPlayerSeen();

	void WeaponChange();

	void Initialize();

	
	FTimerHandle WeaponChangeTimerLoop;

};
