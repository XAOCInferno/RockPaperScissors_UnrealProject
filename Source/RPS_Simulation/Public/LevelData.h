// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SpawnArea.h"
#include "RPSSimulationCharacter.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelData.generated.h"

UCLASS()
class RPS_SIMULATION_API ALevelData : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALevelData();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelSetup") int32 NumberOfRPSCharacters;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LevelSetup") ASpawnArea* TargetSpawnAreaForRPSCharacters;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
