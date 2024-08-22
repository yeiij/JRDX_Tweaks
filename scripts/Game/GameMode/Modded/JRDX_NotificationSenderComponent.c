modded class SCR_NotificationSenderComponent : SCR_BaseGameModeComponent
{
	override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		SetKillFeedType(EKillFeedType.FULL);
		SetReceiveKillFeedType(EKillFeedReceiveType.ALL);
	}
};
