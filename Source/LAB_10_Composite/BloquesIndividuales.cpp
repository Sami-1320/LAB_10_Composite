// Fill out your copyright notice in the Description page of Project Settings.

#include "BloquesIndividuales.h"
#include "Materials/Material.h"
#include "Components/StaticMeshComponent.h"

ABloquesIndividuales::ABloquesIndividuales()
{
    PrimaryActorTick.bCanEverTick = false;

    // Inicializar el tipo por defecto
    BlockType = EBlockType::BT_Vacio;

    CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
    RootComponent = CubeMesh;

    // Escala de 2 unidades
    CubeMesh->SetWorldScale3D(FVector(2.0f, 2.0f, 2.0f));

    // Asignar malla de cubo
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    if (CubeVisualAsset.Succeeded())
    {
        CubeMesh->SetStaticMesh(CubeVisualAsset.Object);
    }

    // Cargar todos los materiales en el constructor
    static ConstructorHelpers::FObjectFinder<UMaterial> FinderAcero(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
    if (FinderAcero.Succeeded()) MatAcero = FinderAcero.Object;

    static ConstructorHelpers::FObjectFinder<UMaterial> FinderMadera(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
    if (FinderMadera.Succeeded()) MatMadera = FinderMadera.Object;

    static ConstructorHelpers::FObjectFinder<UMaterial> FinderConcreto(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Concrete_Grime.M_Concrete_Grime'"));
    if (FinderConcreto.Succeeded()) MatConcreto = FinderConcreto.Object;

    static ConstructorHelpers::FObjectFinder<UMaterial> FinderLadrillo(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
    if (FinderLadrillo.Succeeded()) MatLadrillo = FinderLadrillo.Object;

    static ConstructorHelpers::FObjectFinder<UMaterial> FinderBurbuja(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Glass.M_Glass'"));
    if (FinderBurbuja.Succeeded()) MatBurbuja = FinderBurbuja.Object;
}

void ABloquesIndividuales::BeginPlay()
{
    Super::BeginPlay();
    // Aplicar el material correcto al iniciar el juego
    ApplyMaterialForBlockType();
}

void ABloquesIndividuales::Execute()
{
    // Lógica básica: por ejemplo, destruir el bloque
    Destroy();
}

void ABloquesIndividuales::SetBlockType(EBlockType NewBlockType)
{
    BlockType = NewBlockType;
    ApplyMaterialForBlockType();
}

void ABloquesIndividuales::ApplyMaterialForBlockType()
{
    if (!CubeMesh) return;

    switch (BlockType)
    {
    case EBlockType::BT_Acero:
        if (MatAcero) CubeMesh->SetMaterial(0, MatAcero);
        CubeMesh->SetVisibility(true);
        CubeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        break;

    case EBlockType::BT_Madera:
        if (MatMadera) CubeMesh->SetMaterial(0, MatMadera);
        CubeMesh->SetVisibility(true);
        CubeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        break;

    case EBlockType::BT_Concreto:
        if (MatConcreto) CubeMesh->SetMaterial(0, MatConcreto);
        CubeMesh->SetVisibility(true);
        CubeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        break;

    case EBlockType::BT_Ladrillo:
        if (MatLadrillo) CubeMesh->SetMaterial(0, MatLadrillo);
        CubeMesh->SetVisibility(true);
        CubeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        break;

    case EBlockType::BT_Burbuja:
        if (MatBurbuja) CubeMesh->SetMaterial(0, MatBurbuja);
        CubeMesh->SetVisibility(true);
        CubeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        break;

    case EBlockType::BT_Vacio:
        // Para bloques vacíos, hacerlos invisibles y sin colisión
        CubeMesh->SetVisibility(false);
        CubeMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        break;

    default:
        // Fallback al tipo vacío
        CubeMesh->SetVisibility(false);
        CubeMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        break;
    }
}