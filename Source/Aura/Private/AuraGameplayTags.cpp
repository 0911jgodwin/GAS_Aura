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
		FString("Chance to double damage plus critical hit bonus")
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


	/*
	* Input Tags
	*/
	
	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.LMB"),
		FString("Input Tag for Left Mouse Button")
		);

	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.RMB"),
		FString("Input Tag for Right Mouse Button")
		);

	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.1"),
		FString("Input Tag for 1 key")
		);

	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.2"),
		FString("Input Tag for 2 key")
		);

	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.3"),
		FString("Input Tag for 3 key")
		);
	
	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.4"),
		FString("Input Tag for 4 key")
		);

	/*
	* Other Tags
	*/

	GameplayTags.Effects_HitReact = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Effects.HitReact"),
		FString("Tag granted when Hit Reacting")
		);

	/*
	* Damage Types
	*/
	GameplayTags.Damage_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Fire"),
		FString("Fire Damage Type")
		);

	GameplayTags.Damage_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Arcane"),
		FString("Arcane Damage Type")
		);

	GameplayTags.Damage_Lightning = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Lightning"),
		FString("Lightning Damage Type")
		);
    		
	GameplayTags.Damage_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Damage.Physical"),
		FString("Physical Damage Type")
		);
	/*
	* Resistances
	*/

	GameplayTags.Attributes_Resistances_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Resistances.Fire"),
		FString("Resistance to Fire Damage")
		);

	GameplayTags.Attributes_Resistances_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Resistances.Arcane"),
		FString("Resistance to Arcane Damage")
		);

	GameplayTags.Attributes_Resistances_Lightning = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Resistances.Lightning"),
		FString("Resistance to Lightning Damage")
		);
	
	GameplayTags.Attributes_Resistances_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Resistances.Physical"),
		FString("Resistance to Physical Damage")
		);
	
	/*
	* Map of damage types to resistances
	*/
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Fire, GameplayTags.Attributes_Resistances_Fire);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Arcane, GameplayTags.Attributes_Resistances_Arcane);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Lightning, GameplayTags.Attributes_Resistances_Lightning);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Physical, GameplayTags.Attributes_Resistances_Physical);
}
