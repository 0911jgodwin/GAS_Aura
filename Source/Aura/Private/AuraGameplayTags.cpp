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

	GameplayTags.InputTag_Passive_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Passive.1"),
		FString("Input Tag Passive Ability 1")
		);

	GameplayTags.InputTag_Passive_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Passive.2"),
		FString("Input Tag Passive Ability 2")
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
	 * Meta Attributes
	 */

	GameplayTags.Attributes_Meta_IncomingXP = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Attributes.Meta.IncomingXP"),
		FString("Incoming XP Meta Attribute")
		);
	
	/*
	* Map of damage types to resistances
	*/
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Fire, GameplayTags.Attributes_Resistances_Fire);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Arcane, GameplayTags.Attributes_Resistances_Arcane);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Lightning, GameplayTags.Attributes_Resistances_Lightning);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Damage_Physical, GameplayTags.Attributes_Resistances_Physical);

	/*
	 * Abilities
	 */

	GameplayTags.Abilities_Attack = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Attack"),
		FString("Attack Ability Tag")
		);

	GameplayTags.Abilities_Summon = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Summon"),
		FString("Summon Ability Tag")
		);

	GameplayTags.Abilities_Fire_FireBolt = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Fire.FireBolt"),
		FString("FireBolt Ability Tag")
		);

	GameplayTags.Abilities_HitReact = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.HitReact"),
		FString("Hit React Ability")
		);

	GameplayTags.Abilities_Status_Eligible = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Status.Eligible"),
		FString("Eligible Status")
		);

	GameplayTags.Abilities_Status_Equipped = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Status.Equipped"),
		FString("Equipped Status")
		);

	GameplayTags.Abilities_Status_Locked = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Status.Locked"),
		FString("Locked Status")
		);

	GameplayTags.Abilities_Status_Unlocked = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Status.Unlocked"),
		FString("Unlocked Status")
		);

	GameplayTags.Abilities_Type_None = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Type.None"),
		FString("Type None")
		);

	GameplayTags.Abilities_Type_Offensive = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Type.Offensive"),
		FString("Type Offensive")
		);

	GameplayTags.Abilities_Type_Passive = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Abilities.Type.Passive"),
		FString("Type Passive")
		);

	/*
	* Cooldown
	*/

	GameplayTags.Cooldown_Fire_FireBolt = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Cooldown.Fire.FireBolt"),
		FString("FireBolt Cooldown Tag")
		);
	
	/*
	 * Combat Sockets
	 */

	GameplayTags.CombatSocket_Weapon = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.Weapon"),
		FString("Weapon")
		);

	GameplayTags.CombatSocket_RightHand = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.RightHand"),
		FString("Right Hand")
		);

	GameplayTags.CombatSocket_LeftHand = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.LeftHand"),
		FString("Left Hand")
		);

	GameplayTags.CombatSocket_Tail = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("CombatSocket.Tail"),
		FString("Tail")
		);

	/*
	 * Montage Tags
	 */

	GameplayTags.Montage_Attack_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Montage.Attack.1"),
		FString("Attack 1")
		);

	GameplayTags.Montage_Attack_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Montage.Attack.2"),
		FString("Attack 2")
		);

	GameplayTags.Montage_Attack_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Montage.Attack.3"),
		FString("Attack 3")
		);

	GameplayTags.Montage_Attack_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("Montage.Attack.4"),
		FString("Attack 4")
		);
}
