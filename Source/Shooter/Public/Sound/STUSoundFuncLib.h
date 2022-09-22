// Shoot Them Up Game

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "STUSoundFuncLib.generated.h"

class USoundClass;
UCLASS()
class SHOOTER_API USTUSoundFuncLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SetSoundClassVolume(USoundClass* SoundClass, float Volume);

        UFUNCTION(BlueprintCallable)
    static void ToggleSoundClassVolume(USoundClass* SoundClass);


};