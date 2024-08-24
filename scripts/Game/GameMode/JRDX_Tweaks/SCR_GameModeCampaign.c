modded class SCR_GameModeCampaign : SCR_BaseGameMode
{	
	override void OnStarted()
	{
		super.OnStarted();
		m_iSuppliesReplenishThreshold = 1500;
	}
};
