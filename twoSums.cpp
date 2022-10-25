#include <vector>
#include <iostream>

using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
		vector<int> res;
        for (unsigned i = 0; i < nums.size(); i++)
		{
			for (unsigned j = i + 1; j < nums.size(); j++)
			{
				int sum = nums[i] + nums[j];
				if (sum == target)
				{
					res.push_back(i);
					res.push_back(j);
					return (res);
				}
			}
		}
		return (res);
    }
};

int	main(void)
{
	Solution a;

	vector<int> arr = {2, 7, 11, 15};

	vector<int> result = a.twoSum(arr, 9);
	std::cout << result[0] << " " << result[1] << std::endl;
	return (0);
}