// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ICompositeInterfaz.h"
#include "ClienteComposite.generated.h"

UCLASS()
class LAB_10_COMPOSITE_API AClienteComposite : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AClienteComposite();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	void InteractWithComponent(TScriptInterface<IICompositeInterfaz> Component);

private:
	UPROPERTY()
	TScriptInterface<IICompositeInterfaz> CurrentComponent;
};