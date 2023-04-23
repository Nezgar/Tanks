// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cannon.h"
#include "DamageTaker.h"

#include "Projectile.generated.h"


UCLASS()
class TANKS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AProjectile();

	virtual void Start();
	bool inUse(ACannon Cannon);
	void Explode();
	void doDamage(IDamageTaker* damageTakerActor);

	bool isHitEnemy(AActor* OtherActor);
	bool isPushMesh(AActor* OtherActor);

	

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Damage")
		float PushForce = 1000;


	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Components");
	class UStaticMeshComponent* ProjectileMesh;
	 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement");
	float MoveSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement");
	float MoveRate = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components");
	float Damage = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fire type");
	bool isExplodeOn = false;

	FTimerHandle MovementTimer;

	UFUNCTION()
		void OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, 
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
			bool bFromSweep, const FHitResult& SweepResult);

	float ExplodeRadius = 100;

	UFUNCTION()
		virtual void Move();
};
