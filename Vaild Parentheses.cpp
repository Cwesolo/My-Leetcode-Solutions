bool isValid(std::string s)
{
	std::stack<char> charStack;

	for (int i = 0; i < s.size(); i++)
	{
		switch (s[i])
		{
		case ')':
			if (charStack.empty())
			{
				return false;
			}

			if (charStack.top() != '(')
			{
				return false;
			}

			charStack.pop();
			break;

		case '}':
			if (charStack.empty())
			{
				return false;
			}

			if (charStack.top() != '{')
			{
				return false;
			}

			charStack.pop();
			break;

		case ']':
			if (charStack.empty())
			{
				return false;
			}

			if (charStack.top() != '[')
			{
				return false;
			}

			charStack.pop();
			break;

		default:
			charStack.push(s[i]);
			break;
		}
	}


	if (charStack.empty() == false)
	{
		return false;
	}

	return true;
}
