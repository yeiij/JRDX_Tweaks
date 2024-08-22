modded class SCR_AIGroup : ChimeraAIGroup
{
	override void EOnInit(IEntity owner)
	{
		super.EOnInit(owner);
		SetMaxMembers(12);
	}
	
	override protected bool SpawnGroupMember(bool snapToTerrain, int index, ResourceName res, bool editMode, bool isLast)
	{
		string resourceName = string.ToString(res);
		resourceName.ToLower();
		if (resourceName.Contains("civ"))
			return true;
		
		return super.SpawnGroupMember(snapToTerrain, index, res, editMode, isLast);
	}
};
