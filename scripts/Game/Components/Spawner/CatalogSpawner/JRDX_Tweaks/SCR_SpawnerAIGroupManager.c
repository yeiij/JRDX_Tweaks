modded class SCR_SpawnerAIGroupManagerComponent : SCR_BaseGameModeComponent
{	
	override protected void OnAgentsUpdated(AIAgent agent)
	{
		vanilla.OnAgentsUpdated(agent);
	}
};
