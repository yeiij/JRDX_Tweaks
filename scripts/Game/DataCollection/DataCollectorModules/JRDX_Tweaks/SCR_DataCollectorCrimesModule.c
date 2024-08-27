[BaseContainerProps()]
modded class SCR_DataCollectorCrimesModule : SCR_DataCollectorModule
{
	
	override void InitModule()
	{
		m_aLightBanPunishments = {5, 15};
		m_aHeavyBanPunishments = {30, 60, 120};
	}
};
