// Copyright JG


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitialiseNativeGameplayTags()
{

	/*
	 *Primary Attributes
	 */
	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Strength"),
		FString("Increases physical damage")
		);

	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Intelligence"),
		FString("Increases magical damage")
		);
	
	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Resilience"),
		FString("Increases armour and armour penetration")
		);

	GameplayTags.Attributes_Primary_Vigour = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Primary.Vigour"),
		FString("Increases health")
		);

	/*
	*Derived Attributes
	*/
	
	GameplayTags.Attributes_Derived_Armour = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Derived.Armour"),
		FString("Reduces damage taken, improves Block Chance")
		);

	GameplayTags.Attributes_Derived_ArmourPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Derived.ArmourPenetration"),
		FString("Ignores percentage of enemy armour, increases critical hit chance")
		);

	GameplayTags.Attributes_Derived_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Derived.BlockChance"),
		FString("Chance to cut incoming damage by half")
		);
	
	GameplayTags.Attributes_Derived_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Derived.CriticalHitChance"),
		FString("RChance to double damage plus critical hit bonus")
		);

	GameplayTags.Attributes_Derived_CriticalHitMagnitude = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Derived.CriticalHitMagnitude"),
		FString("Bonus damage added when a critical hit is scored")
		);

	GameplayTags.Attributes_Derived_CriticalDefence = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Derived.CriticalDefence"),
		FString("Reduces critical hit chance of attacking enemies")
		);

	GameplayTags.Attributes_Derived_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
    		FName("Attributes.Derived.HealthRegeneration"),
    		FString("Amount of health regenerated every 1 second")
    		);

	GameplayTags.Attributes_Derived_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Derived.ManaRegeneration"),
		FString("Amount of mana regenerated every 1 second")
		);
	
	GameplayTags.Attributes_Derived_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Derived.MaxHealth"),
		FString("Maximum amount of health obtainable")
		);
	
	GameplayTags.Attributes_Derived_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Derived.MaxMana"),
		FString("Maximum amount of mana obtainable")
		);
	
}
