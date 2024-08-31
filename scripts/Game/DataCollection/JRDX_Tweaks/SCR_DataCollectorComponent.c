modded class SCR_DataCollectorComponent : SCR_BaseGameModeComponent
{
	protected int m_iOptionalKickingBanDuration;
	
	protected override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		m_iOptionalKickingFriendlyPlayerKillPenalty = 2;
		m_iOptionalKickingFriendlyAIKillPenalty = 1;
		m_iOptionalKickingBanDuration = 60;
		m_iOptionalKickingKickPenaltyLimit = 100;
	}
};
