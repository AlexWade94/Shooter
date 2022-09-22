// Shoot Them Up Game

#include "UI/STUBaseWidget.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
void USTUBaseWidget::Show()
{
    if (!GetWorld()) return;

    PlayAnimation(ShowAnimation);
    UGameplayStatics::PlaySound2D(GetWorld(), OpenSound);
}
