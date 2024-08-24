modded class SCR_NightModeGameModeComponent : SCR_BaseGameModeComponent
{
	override void EOnInit(IEntity owner)
	{
		super.EOnInit(owner);
		m_bAllowGlobalNightMode = true;
		EnableGlobalNightMode(true);
	}
};
