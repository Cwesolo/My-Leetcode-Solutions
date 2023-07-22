class Solution {
public:
	std::string longestCommonPrefix(std::vector<std::string>& strs)
	{
		if (strs.size() == 0)
		{
			return "";
		}

		std::string sol = "";

		for (int i = 0; i < strs[0].length(); i++)
		{
			int j = 1;
			while (j < strs.size())
			{
				if (strs[0][i] != strs[j][i])
				{
					break;
				}
				j++;
			}

			if (j == strs.size())
			{
				sol += strs[0][i];
			}
			else
			{
				break;
			}
		}

		return sol;
	}
};