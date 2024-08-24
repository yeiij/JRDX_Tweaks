modded class SCR_CampaignSuppliesComponent : ScriptComponent
{	
	override void OnPostInit(IEntity owner)
	{
		super.OnPostInit(owner);
		m_fOperationalRadius = 75.0;
	}
};
