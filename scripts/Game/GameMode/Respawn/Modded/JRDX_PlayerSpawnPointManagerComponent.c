modded class SCR_PlayerSpawnPointManagerComponent : SCR_BaseGameModeComponent
{
	protected bool m_bEnablePlayerSpawnPoints = true;
	protected bool m_bDeployableSpawnPointsEnabled = true;
	protected bool m_bRadioVehicleSpawningEnabled = true;
	
	protected SCR_ESpawnPointBudgetType m_eDeployableSpawnPointBudgetType = SCR_ESpawnPointBudgetType.NONE;
}
