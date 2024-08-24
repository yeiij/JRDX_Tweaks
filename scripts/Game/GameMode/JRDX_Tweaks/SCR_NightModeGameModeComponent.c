modded class SCR_NightModeGameModeComponent : SCR_BaseGameModeComponent
{
	override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		m_bAllowGlobalNightMode = true;
		EnableGlobalNightMode(true);
	}
	
	override bool CanEnableNightMode()
	{
		super.CanEnableNightMode();
		return true;
	}
};
