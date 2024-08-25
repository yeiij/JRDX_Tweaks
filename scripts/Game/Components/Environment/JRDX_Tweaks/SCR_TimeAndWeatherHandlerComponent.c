modded class SCR_TimeAndWeatherHandlerComponent : SCR_BaseGameModeComponent
{
	override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		m_bRandomWeatherChanges = true;
	}
};
