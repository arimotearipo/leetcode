// Link to the leetcode problem
// https://leetcode.com/problems/contains-duplicate-ii/description/

#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::unordered_map;

// This function will return the index of the previous occurence of k from index i
int	myfind(vector<int> &nums, int k, int i)
{
	while (--i >= 0)
	{
		if (nums[i] == k)
			return (i);
	}
	return (-1);
}

// This solution has less code and does not require the myfind helper function
// but somehow the runtime is slower than my second solution according to leetcode.
// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k)
//     {
//         unordered_map<int, int> mymap;
// 		for (int i = 0; i < nums.size(); i++)
// 		{
// 			// If the element has already existed before, check the distance of i with the saved
// 			// index of the previous occurence of that element in the map
// 			if (mymap.count(nums[i]) == 1 && abs(mymap[nums[i]] - i) <= k) 
// 			{
// 				return (true);
// 			}
// 			mymap[nums[i]] = i; // This will update the index of the latest occurence of the element in nums
// 		}
// 		return (false);
//     }
// };



// My second solution. Requires the myfind helper function.
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_map<int, int> mymap;
		int idx;
		for (int i = 0; i < nums.size(); i++)
		{
			if (mymap.count(nums[i])) // Check to see if the element has already been recorded before
			{
				idx = myfind(nums, nums[i], i); // Save the index where the element has last occurred prior to current occurrence
			}
			mymap[nums[i]]++; // Increment the value of that element
			if (mymap[nums[i]] > 1 && abs(i - idx) <= k) // If the element has appeared more than once, check the distance between current occurrence and previous occurence and compare with k
			{
				return (true);
			}
		}
		return (false);
    }
};

int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	vector<int> nums;
	string arg1(av[1]), arg2(av[2]);
	for (int i = 0; i < arg1.length(); i++)
	{
		nums.push_back(arg1[i] - '0');
	}
	int k = stoi(arg2);
	Solution s;
	cout << s.containsNearbyDuplicate(nums, k) << endl;
	return (0);
}