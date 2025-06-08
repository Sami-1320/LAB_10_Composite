#include "ClienteComposite.h"
#include "BloquesComposite.h"
#include "BloquesIndividuales.h"

AClienteComposite::AClienteComposite()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AClienteComposite::BeginPlay()
{
    Super::BeginPlay();

    // Definir el punto inicial del mapa
    const float XInicial = 100.0f;
    const float YInicial = 100.0f;
    const float Espaciado = 200.0f; // Espaciado de 200 unidades

    // Generar un mapa 20x20 con borde de acero y interior aleatorio con posibilidad de vacío
    for (int32 X = 0; X < 20; ++X)
    {
        for (int32 Y = 0; Y < 20; ++Y)
        {
            FVector Location = FVector(XInicial + X * Espaciado, YInicial + Y * Espaciado, 0.0f);
            ABloquesIndividuales* Block = GetWorld()->SpawnActor<ABloquesIndividuales>(Location, FRotator::ZeroRotator);

            if (Block)
            {
                EBlockType NewBlockType;

                // Definir el tipo de bloque según la posición
                if (X == 0 || X == 19 || Y == 0 || Y == 19) // Borde exterior
                {
                    NewBlockType = EBlockType::BT_Acero; // Borde de acero
                }
                else // Interior
                {
                    // Generar aleatoriamente SOLO entre los tipos disponibles (SIN ACERO en el interior)
                    int32 RandomType = FMath::RandRange(0, 4); // 0 a 4 para los 5 tipos (excluyendo acero)

                    switch (RandomType)
                    {
                    case 0: NewBlockType = EBlockType::BT_Vacio; break;    // 20% probabilidad de espacio vacío
                    case 1: NewBlockType = EBlockType::BT_Madera; break;   // 20% probabilidad
                    case 2: NewBlockType = EBlockType::BT_Concreto; break; // 20% probabilidad
                    case 3: NewBlockType = EBlockType::BT_Ladrillo; break; // 20% probabilidad
                    case 4: NewBlockType = EBlockType::BT_Burbuja; break;  // 20% probabilidad
                    default: NewBlockType = EBlockType::BT_Vacio; break;   // Fallback
                    }
                }

                // Establecer el tipo de bloque (esto aplicará el material correcto)
                Block->SetBlockType(NewBlockType);

                // Asignar CurrentComponent solo al primer bloque como referencia (opcional)
                if (X == 0 && Y == 0)
                {
                    CurrentComponent = Block;
                }
            }
        }
    }

    // Mensaje de debug para confirmar la generación
    UE_LOG(LogTemp, Warning, TEXT("Laberinto generado con %d x %d bloques"), 20, 20);
}

void AClienteComposite::InteractWithComponent(TScriptInterface<IICompositeInterfaz> Component)
{
    if (Component.GetInterface())
    {
        Component->Execute();
    }
}