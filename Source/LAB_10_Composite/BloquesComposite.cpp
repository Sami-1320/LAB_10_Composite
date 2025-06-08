// Fill out your copyright notice in the Description page of Project Settings.

#include "BloquesComposite.h"

ABloquesComposite::ABloquesComposite()
{
    RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    RootComponent = RootScene;
}

void ABloquesComposite::BeginPlay()
{
    Super::BeginPlay();
}

void ABloquesComposite::Execute()
{
    // Delegar ejecución a todos los hijos
    for (IICompositeInterfaz* Child : Children)
    {
        if (Child)
        {
            Child->Execute();
        }
    }
}

void ABloquesComposite::Add(IICompositeInterfaz* Component)
{
    if (Component && !Children.Contains(Component))
    {
        Children.Add(Component);
    }
}

void ABloquesComposite::Remove(IICompositeInterfaz* Component)
{
    if (Component)
    {
        Children.Remove(Component);
    }
}

TArray<IICompositeInterfaz*> ABloquesComposite::GetChildren() const
{
    return Children;
}