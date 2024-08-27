modded class SCR_BudgetEditorComponent : SCR_BaseEditorComponent
{
	override protected bool IsBudgetCapEnabled()
	{
		if (IsAdmin())
			return false;
		return super.IsBudgetCapEnabled();
	}
};
