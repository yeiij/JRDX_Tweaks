[BaseContainerProps()]
modded class SCR_DataCollectorCrimesModule : SCR_DataCollectorModule
{
	
	override void InitModule()
	{
		m_aLightBanPunishments = {5, 15};
		m_aHeavyBanPunishments = {30, 60, 120};
		m_iSecondsOfReincidencyLightBan = 120;
		m_iSecondsOfReincidencyHeavyBan = 240;
	}
};
