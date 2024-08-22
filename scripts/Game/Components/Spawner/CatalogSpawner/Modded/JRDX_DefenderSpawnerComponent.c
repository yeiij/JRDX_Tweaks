modded class SCR_DefenderSpawnerComponent : SCR_SlotServiceComponent
{
	override protected void HandleGroup()
	{
		super.HandleGroup();
		
		AIWorld aiWorld = GetGame().GetAIWorld();
		aiWorld.SetAILimit(1500);
	}
}
