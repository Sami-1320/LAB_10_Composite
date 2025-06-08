// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ICompositeInterfaz.h"
#include "BloquesIndividuales.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloquesComposite.generated.h" 

UCLASS()
class LAB_10_COMPOSITE_API ABloquesComposite : public AActor, public IICompositeInterfaz
{
    GENERATED_BODY()
public:
    // Sets default values for this actor's properties
    ABloquesComposite();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    virtual void Execute() override;

    void Add(IICompositeInterfaz* Component);
    void Remove(IICompositeInterfaz* Component);
    TArray<IICompositeInterfaz*> GetChildren() const;

private:
    UPROPERTY()
    USceneComponent* RootScene;

    TArray<IICompositeInterfaz*> Children;
};