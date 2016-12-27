// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PaperCharacter.h"
#include "MyBaseCharacter.generated.h"

/**
 * 
 */
UCLASS()
class LIVETODIE_API AMyBaseCharacter : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	AMyBaseCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Set Character Movement Speed.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed = 0.25;

private:
	void MoveForward(float value);
	
	
};
