modded class SCR_SpawnerAIGroupManagerComponent : SCR_BaseGameModeComponent
{	
	override protected void OnAgentsUpdated(AIAgent agent)
	{
		super.OnAgentsUpdated(agent);
		GetGame().GetAIWorld().SetAILimit(1500);
	}
};
