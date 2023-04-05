// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AmmoBox.generated.h"


UCLASS()
class TANKS_API AAmmoBox : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY()
		class ACannon* Cannon;

	AAmmoBox();
	void AmmoAdd(ACannon *CannonActor,float ProjectileAmmoBuf, float TraceAmmoBuf, float SpecialAmmoBuf);
	
protected:
	
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Components");
	class UStaticMeshComponent* AmmoMesh;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Components");
	TSubclassOf<class ACannon> CannonClass;
	/*
	UFUNCTION()
		void OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
			bool bFromSweep, const FHitResult& SweepResult);
			*/
	UFUNCTION()
		void OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
			bool bFromSweep, const FHitResult& SweepResult);

	float quantity = { 20 };
};
