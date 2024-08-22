modded class SCR_DefenderSpawnerComponent : SCR_SlotServiceComponent
{	
	override protected void HandleGroup()
	{
		super.HandleGroup();
		GetGame().GetAIWorld().SetAILimit(1500);
	}
};
