// Link to the leetcode problem
// https://leetcode.com/problems/third-maximum-number/

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    int thirdMax(vector<int>& nums)
    {
        sort(nums.begin(), nums.end(), std::greater<int>());
		if (nums.size() < 3)
			return (nums[0]);
		int count = 0;
		int last = nums[0];
		int i = 0;
		while (i < nums.size() && count != 2)
		{
			if (nums[i] != last)
			{
				last = nums[i];
				count++;
			}
			i++;
		}
		if (count != 2)
			return (nums[0]);
		return (last);
    }
};

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	string nums(av[1]);
	vector<int> numvec;
	for (int i = 0; i < nums.length(); i++)
	{
		numvec.push_back(nums[i] - '0');
	}
	Solution s;
	cout << s.thirdMax(numvec) << endl;
	return (0);
}