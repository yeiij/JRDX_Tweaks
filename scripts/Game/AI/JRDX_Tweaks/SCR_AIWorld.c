modded class SCR_AIWorld : AIWorld
{
	override void EOnInit(IEntity owner)
	{
		super.EOnInit(owner);
		SetAILimit(1500);
		SetLimitOfActiveAIs(256);
	}
};
