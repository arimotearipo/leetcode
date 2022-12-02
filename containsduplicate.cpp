// Link to the leetcode problem
// https://leetcode.com/problems/contains-duplicate/

#include <vector>
#include <unordered_map>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::unordered_map;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
	{
		unordered_map<int, int> mymap;
	
		for (int i = 0; i < nums.size(); i++)
		{
			mymap[nums[i]]++;
			if (mymap[nums[i]] > 1)
				return (true);
		}
		return (false);
    }
};

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	vector<int> arr;
	string str(av[1]);
	for (int i = 0; i < str.length(); i++)
	{
		arr.push_back(str[i] - '0');
	}
	Solution s;
	cout << s.containsDuplicate(arr) << endl;
	return (0);
}