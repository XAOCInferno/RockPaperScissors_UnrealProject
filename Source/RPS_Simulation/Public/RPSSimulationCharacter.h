// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIStateMachine.h"
#include "ECombatTypes.h"
#include "Components/SphereComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RPSSimulationCharacter.generated.h"

UCLASS()
class RPS_SIMULATION_API ARPSSimulationCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARPSSimulationCharacter();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Vision") USphereComponent* VisionDetectionCollider;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Behaviour") UAIStateMachine* AIController;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") int32 CurrentAge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vision") int32 VisionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat") TMap<ECombatTypes, int32> CombatTendancies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Food") int32 MaxHunger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement") int32 MaxSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement") int32 MinSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement") int32 MaxSpeed_MultiplierFromReproductiveDrive;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement") FVector DesiredPosition;


private:
	int32 CurrentHunger;
	int32 CurrentSpeed;

	const double RequiredDistanceToBeInRangeOfDestination = 1.0f;
	const int32 RequiredPercentageOfHungerToBeHungry = 0.4f;
	const int32 RequiredAgeToMate = 10;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Movement", meta = (DisplayName = "SetMove")) void SetMoveDestination(FVector Destination);
	UFUNCTION(BlueprintCallable, Category = "Movement", meta = (DisplayName = "GetIfFinishedMove")) bool GetHasReachedDestination();
	UFUNCTION(BlueprintCallable, Category = "Food", meta = (DisplayName = "IsHungry")) bool GetIfHungry();
	UFUNCTION(BlueprintCallable, Category = "Reproduction", meta = (DisplayName = "CanMate")) bool GetIfCanMate();

};
