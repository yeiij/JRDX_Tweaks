modded class SCR_SpawnerAIGroupManagerComponent : SCR_BaseGameModeComponent
{
	override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		GetGame().GetAIWorld().SetAILimit(1500);
	}
	
	override protected void OnAgentsUpdated(AIAgent agent)
	{
		super.OnAgentsUpdated(agent);
		GetGame().GetAIWorld().SetAILimit(1500);
	}
};
