#include <map>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
	std::unordered_map<int, int> prevVals;

	for (int i = 0; i < nums.size(); i++)
	{
		int diff = target - nums[i];

		if (prevVals.find(diff) != prevVals.end())
		{
			return {prevVals[diff], i};
		}

		prevVals.insert({ nums[i], i });
	}

	return {};
}