// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PaperCharacter.h"
#include "PaperFlipbookComponent.h" // Must have if using UPaperFlipbook*
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

	

private:
	void MoveForward(float value);

	// Character Name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", meta = (AllowPrivateAccess = "true"))
	//Defines character name in conversations etc
	FName CharacterName = "DefaultName";

	// Set Character Movement Speed.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", meta = (AllowPrivateAccess = "true"))
	float MovementSpeed = 0.25;

	// Character Sprite
	// Set Character Flipbook Aka Sprite
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes", meta = (AllowPrivateAccess = "true"))
	UPaperFlipbook* FlipBookToUse;


	
	
};
