modded class SCR_TimeAndWeatherHandlerComponent : SCR_BaseGameModeComponent
{
	override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		m_fDayTimeAcceleration = 4.0;
		m_fNightTimeAcceleration = 12.0;
		m_bRandomWeatherChanges = true;
	}
};
