// Shoot Them Up Game

using UnrealBuildTool;

public class Shooter : ModuleRules
{
    public Shooter(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] 
        { "Core", 
            "CoreUObject", 
            "Engine", 
            "InputCore", 
            "UMG",
            "Niagara", 
            "PhysicsCore",
            "GameplayTasks",
            "NavigationSystem"
        });
        PrivateDependencyModuleNames.AddRange(new string[] { });

        PublicIncludePaths.AddRange(new string[]
        {
            "Shooter/Public/Player",
            "Shooter/Public/AI/Task",
             "Shooter/Public/AI/Decorators",
             "Shooter/Public/Menu",
             "Shooter/Public/Menu/UI",
             "Shooter/Public/UI"
        });
        // Uncomment if you are using Slate UI
        //PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
