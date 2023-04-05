// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CannonChange.generated.h"

UCLASS()
class TANKS_API ACannonChange : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties

	ACannonChange();

protected:

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Components");
	class UStaticMeshComponent*CannonChangeMesh;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Components");
	TSubclassOf<class ACannon> CannonClass;
	
	UFUNCTION()
		void OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
			bool bFromSweep, const FHitResult& SweepResult);
};
