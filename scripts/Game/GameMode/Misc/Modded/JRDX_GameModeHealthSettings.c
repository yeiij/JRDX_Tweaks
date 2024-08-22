modded class SCR_GameModeHealthSettings : ScriptComponent
{	
	override protected void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		SetBleedingScale(0.25);
		SetRegenScale(1.75);
		SetResilienceHzRegenScale(0.5);
		SetUnconsciousnessPermitted(true);
		SetUnconsciousVONPermitted(true);
	}
};
