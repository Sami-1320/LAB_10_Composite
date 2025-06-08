// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ICompositeInterfaz.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UICompositeInterfaz : public UInterface
{
	GENERATED_BODY()
};

class LAB_10_COMPOSITE_API IICompositeInterfaz
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Execute() PURE_VIRTUAL(IICompositeInterfaz::Execute, );
};