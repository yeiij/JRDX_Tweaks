modded class SCR_DefenderSpawnerComponent : SCR_SlotServiceComponent
{
	protected override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		GetGame().GetAIWorld().SetAILimit(1500);
	}
	
	override protected void HandleGroup()
	{
		super.HandleGroup();
		GetGame().GetAIWorld().SetAILimit(1500);
	}
};
