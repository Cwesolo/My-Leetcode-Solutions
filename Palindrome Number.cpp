class Solution {
public:
	bool isPalindrome(int x)
	{
		std::string number = std::to_string(x);
		std::string reversed = number;

		int j = 0;
		for (int i = number.length() - 1; i > 0; i--)
		{
			reversed[j] = number[i];
			j++;
		}

		if (reversed == number)
		{
			return true;
		}

		return false;
	}
};