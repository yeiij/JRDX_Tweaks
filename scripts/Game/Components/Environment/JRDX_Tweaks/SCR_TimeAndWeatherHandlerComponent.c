modded class SCR_TimeAndWeatherHandlerComponent : SCR_BaseGameModeComponent
{
	override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		m_fDayTimeAcceleration = 1.0;
		m_fNightTimeAcceleration = 10.0;
		m_bRandomWeatherChanges = true;
	}
};
