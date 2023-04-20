// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "GameStruct.h"
#include "Cannon.generated.h"

UCLASS()
class TANKS_API ACannon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACannon();

	void Fire();
	bool IsReadyToFire();
	void Reload();
	//void FireTypeChange(ATankPawn *TankPawn);
	bool IsEmptyAmmo();
	void ReloadFullAmmo();
	void SetFireAlternative();
	void FireAlternative();

	void FireProjectile();
	void FireTrace();
	void FireSpecial();
	
	
	

protected:
	
	virtual void BeginPlay() override;

public:	
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* CannonMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
		class UArrowComponent* ProjectileSpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire params")
		ECannonType CannonType = ECannonType::FireProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire params")
		TSubclassOf<class AProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire params")
		float FireRate = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire params")
		float FullAmmoReloadTime = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire params")
		float FireRange = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire params")
		float Damage = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire params")
		float ProjectileAmmo = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire params")
		float TraceAmmo = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire params")
		float SpecialAmmo = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire params")
		float FireDelayTime = 0.5f;
	


	UPROPERTY()
		class AGamePool* GamePool;

	bool bReadyToFire = true;
	FTimerHandle ReloadTimer;
	FTimerHandle FullReloadTimer;
	FTimerHandle FireDelayTimer;
	FTimerHandle Pause;
	bool EmptyAmmo = false;
	bool AltFire = false;
	int BulletCount {0};

};
