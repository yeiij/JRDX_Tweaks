modded class SCR_CommandingManagerComponent : SCR_BaseGameModeComponent
{
	override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		SetMaxAIPerGroup(0);
	}
};
