class JRDX_Utils
{
	static bool isCIV(string resourceName)
	{
		/* Check if the string contains the word civ
		*
		* :param resourceName: string: name of the resource
		* :returns bool:
		*/
		resourceName.ToLower();
		if (resourceName.Contains("civ"))
		{
			Print(("JRDX_Utils.isCIV => CIV catched: " + resourceName), LogLevel.DEBUG);
			return true;
		}
		return false;
	}
};
