modded class SCR_SpawnerAIGroupManagerComponent : SCR_BaseGameModeComponent
{
	override protected void OnAgentsUpdated(AIAgent agent)
	{
		super.OnAgentsUpdated(agent);
		AIWorld aiWorld = GetGame().GetAIWorld();
		aiWorld.SetAILimit(1500);
	}
}