// Shoot Them Up Game


#include "AI/Service/STUChangeWeaponService.h"
#include "STUWeaponComponent.h"
#include "STUUtils.h"
#include "AIController.h"

USTUChangeWeaponService::USTUChangeWeaponService()
{
    NodeName = "Change Weapon";
}

void USTUChangeWeaponService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    const auto Controller = OwnerComp.GetAIOwner();
    if (Controller)
    {
        const auto WeaponComponent = STUUtils::GetSTUPlayerComponent<USTUWeaponComponent>(Controller->GetPawn());    
        if (WeaponComponent && Probability > 0 && FMath::FRand() <= Probability)
        {
            WeaponComponent->NextWeapon();
        }
    }
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}
