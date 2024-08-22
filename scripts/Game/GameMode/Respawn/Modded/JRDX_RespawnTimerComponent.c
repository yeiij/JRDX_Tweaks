modded class SCR_RespawnTimerComponent : SCR_BaseGameModeComponent
{
	override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		SetRespawnTime(5);
	}
};
