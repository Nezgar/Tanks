// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.h"
#include "GamePool.generated.h"

UCLASS()
class TANKS_API AGamePool : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGamePool();


		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannon")
		TSubclassOf<AProjectile> ProjectileClass;
		


	UPROPERTY()
		class  AProjectile* Projectile__;
	
protected:
	static int const ProjectilePool=1;
	
	

public:
	AProjectile* ProjectilePool_[ProjectilePool];
	void PoolAdd(AActor* OtherActor);
	void PoolAddProjectile();
	void PoolGetProjectile(FVector ProjectileSpawnPointVector,FRotator ProjectileSpawnPointRotator);

	bool InUseProjectile();
	//bool 


	

};
