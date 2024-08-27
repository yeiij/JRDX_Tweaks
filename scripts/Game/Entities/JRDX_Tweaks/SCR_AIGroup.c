modded class SCR_AIGroup : ChimeraAIGroup
{
	override void EOnInit(IEntity owner)
	{
		super.EOnInit(owner);
		SetMaxMembers(12);
	}
	
	
	override protected void CreateUnitEntities(bool editMode, array<ResourceName> entityResourceNames)
	{
		if (entityResourceNames.Count() > 0)
		{
			if (!editMode && JRDX_Utils.isCIV(entityResourceNames[0]))
				return;
		}
		
		super.CreateUnitEntities(editMode, entityResourceNames);
		
	}
};
