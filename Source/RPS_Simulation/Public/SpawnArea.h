// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "RPSSimulationCharacter.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "SpawnArea.generated.h"

UCLASS()
class RPS_SIMULATION_API ASpawnArea : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnArea();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Area") int32 SpawnAreaRadius;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Area") USphereComponent* SpawnAreaCollider;

public:
	UFUNCTION(BlueprintCallable, Category = "Spawning", meta = (DisplayName = "SpawnAnActor")) void SpawnAActor(AActor* ActorToSpawn);
	UFUNCTION(BlueprintCallable, Category = "Spawning", meta = (DisplayName = "SpawnAnActor")) void SpawnARPSSimulationCharacter();

private:
	const FVector GetSpawnablePosition();
};
