// Fill out your copyright notice in the Description page of Project Settings.

#include "LiveToDie.h"
#include "MyBaseCharacter.h"

AMyBaseCharacter::AMyBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyBaseCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	//PlayerInputComponent->BindAction("SnapTurnLeft", IE_Pressed, this, &APlayerCharacter::SnapTurnLeft);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyBaseCharacter::MoveForward);

}

void AMyBaseCharacter::MoveForward(float value)
{
	/*
	This Function handles Character Movement Speed. In this case, it is
	from Left to Right. Default FW is player looking Right.
	*/
	FVector ActorForwardVector = GetActorForwardVector(); // Get looking direction
	float finalSpeed = value * MovementSpeed; // Set up player Speed
	AddMovementInput(ActorForwardVector, finalSpeed);
}



