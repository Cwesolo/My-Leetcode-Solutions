class Solution
{
public:
	int romanToInt(std::string s)
	{
		int sol = 0;
		int subCount = 0;

		for (int i = s.length(); i >= 0; i--)
		{
			switch (s[i])
			{
			case'I':

				if (s[i + 1] == 'V' || s[i + 1] == 'X' || s[i + 1] == 'L' || s[i + 1] == 'C' || s[i + 1] == 'D' || s[i + 1] == 'M')
				{
					subCount++;
				}
				else
				{
					sol++;
				}
				break;
			case'V':
				sol += 5;
				break;
			case'X':

				if (s[i + 1] == 'L' || s[i + 1] == 'C' || s[i + 1] == 'D' || s[i + 1] == 'M')
				{
					subCount += 10;
				}
				else
				{
					sol += 10;
				}
				break;
			case'L':
				sol += 50;
				break;
			case'C':

				if (s[i + 1] == 'D' || s[i + 1] == 'M')
				{
					subCount += 100;
				}
				else
				{
					sol += 100;
				}
				break;
			case'D':
				sol += 500;
				break;
			case'M':
				sol += 1000;
				break;
			default:
				break;
			}
		}
		return sol - subCount;
	}
};