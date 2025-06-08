#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ICompositeInterfaz.h"
#include "BloquesIndividuales.generated.h"

// Definir el enum como enum class derivado de uint8
UENUM(BlueprintType)
enum class EBlockType : uint8
{
    BT_Vacio      UMETA(DisplayName = "Vacio"),
    BT_Acero      UMETA(DisplayName = "Acero"),
    BT_Madera     UMETA(DisplayName = "Madera"),
    BT_Concreto   UMETA(DisplayName = "Concreto"),
    BT_Ladrillo   UMETA(DisplayName = "Ladrillo"),
    BT_Burbuja    UMETA(DisplayName = "Burbuja")
};

UCLASS()
class LAB_10_COMPOSITE_API ABloquesIndividuales : public AActor, public IICompositeInterfaz
{
    GENERATED_BODY()

public:
    ABloquesIndividuales();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Execute() override;

    UFUNCTION(BlueprintCallable, Category = "Block")
    void SetBlockType(EBlockType NewBlockType);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Block Properties")
    EBlockType BlockType;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* CubeMesh;

private:
    // Función para aplicar el material según el tipo
    void ApplyMaterialForBlockType();

    // Referencias a los materiales
    UPROPERTY()
    UMaterial* MatAcero;

    UPROPERTY()
    UMaterial* MatMadera;

    UPROPERTY()
    UMaterial* MatConcreto;

    UPROPERTY()
    UMaterial* MatLadrillo;

    UPROPERTY()
    UMaterial* MatBurbuja;
};