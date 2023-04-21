// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MachinePawn.h"
#include "AmmoBox.h"
#include "DamageTaker.h"
#include "HealthComponent.h"
#include "Components/BoxComponent.h"
#include "Cannon.h"

#include "TankPawn.generated.h"

class UStaticMeshComponent;
class ACannon;

UCLASS()
class TANKS_API ATankPawn : public AMachinePawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATankPawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//void GetPosition(float Value);

	void MoveForward(float Value); 
	void MoveRight(float Value);
	void RotateRight(float Value);
	void TurretDirection();
	void TankRotation(float DeltaTime);
	void SetupCannon(TSubclassOf<ACannon> NewCannonClass, AAmmoBox* AmmoBox = nullptr);
	void AIChangeCannon();

/*
	UPROPERTY()
		ACannon* Cannon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannon")
		TSubclassOf<ACannon> CannonClass;
	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannon")
		TSubclassOf<AProjectile> Projectile_;
		*/

	UPROPERTY()
		class AProjectile* Projectile;


	//AiTank
	UFUNCTION()
		FVector GetTurretForwardVector();
	UFUNCTION()
		void RotateTurretTo(FVector TargetPosition);

	FVector GetEyesPosition();


protected:
	// Called when the game starts or when spawned
	
	virtual void BeginPlay() override;

	

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UCameraComponent* Camera;

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movements")
		float MoveSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movements")
		float RotationSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movements | Rotation")
		float TurretRotationInterpolationKey = 0.1f;

	UPROPERTY()
		class ATankPlayerController* TankController;
	UPROPERTY()
		class AGamePool* GamePool;

	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
		UBoxComponent* HitCollider;



	float targetForwardAxisValue = 0.0f;
	float targetRightAxisValue = 0.0f;
	float targetRotateRightAxisValue = 0.0f;

	float ProjectileAmmoBuf{ 0 };
	float TraceAmmoBuf{ 0 };
	float SpecialAmmoBuf{ 0 };
	/**/



		// Tank AI
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Move params|Patrol points", Meta = (MakeEditWidget = true))
		TArray<FVector> PatrollingPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Move params | Accurency")
		float MovementAccurency = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|Fire Change")
		float WeaponChangeDelay = 5;

public:

	UFUNCTION()
		TArray<FVector> GetPatrollingPoints() { return PatrollingPoints; };
	UFUNCTION()
		float GetMovementAccurency() { return MovementAccurency; };
		

	
};

