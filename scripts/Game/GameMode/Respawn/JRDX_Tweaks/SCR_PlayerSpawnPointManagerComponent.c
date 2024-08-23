modded class SCR_PlayerSpawnPointManagerComponent : SCR_BaseGameModeComponent
{
	
	override protected void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		m_bEnablePlayerSpawnPoints = true;
		m_bDeployableSpawnPointsEnabled = true;
		m_bRadioVehicleSpawningEnabled = true;
		SetDeployableSpawnPointBudgetType(SCR_ESpawnPointBudgetType.NONE);
	}
};
