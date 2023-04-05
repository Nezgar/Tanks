// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameStruct.generated.h"



UENUM(BlueprintType)
enum class ECannonType : uint8
{
	FireProjectile = 0 UMETA(DisplayName = "Use projectile"),
	FireTrace = 1 UMETA(DisplayName = "Use Trace"),
	FireSpecial = 2  UMETA(DisplayName = "Use special")
};


UCLASS()
class TANKS_API UGameStruct : public UObject
{
	GENERATED_BODY()
	
};
