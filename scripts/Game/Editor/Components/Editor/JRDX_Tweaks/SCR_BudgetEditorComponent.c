modded class SCR_BudgetEditorComponent : SCR_BaseEditorComponen
{
	override protected bool IsBudgetCapEnabled()
	{
		if (IsAdmin())
			return false;
		return super.IsBudgetCapEnabled();
	}
};
