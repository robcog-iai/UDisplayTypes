// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "GPUPointCloudRendererComponent.h"
#include "VisualMarker.generated.h"

UCLASS()
class UVISPACKAGE_API AVisualMarker : public AActor
{
GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVisualMarker();

	//UPROPERTY()
	//UStaticMeshComponent* StaticMeshComponent;

	//UPROPERTY()
	//UGPUPointCloudRendererComponent* PCRComponent;


	//UPROPERTY()
	//USceneComponent* Root;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	
	
};
