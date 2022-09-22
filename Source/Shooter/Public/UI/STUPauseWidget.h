// Shoot Them Up Game

#pragma once

#include "CoreMinimal.h"
#include "UI/STUBaseWidget.h"
#include "STUPauseWidget.generated.h"

class UButton;
UCLASS()
class SHOOTER_API USTUPauseWidget : public USTUBaseWidget
{
    GENERATED_BODY()
protected:
    UPROPERTY(meta = (BindWidget))
    UButton* ClearPauseButton;

protected:
    virtual void NativeOnInitialized() override;

private:
    UFUNCTION()
    void OnClearPause();
};
