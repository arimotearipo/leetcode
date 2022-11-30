// Link to the leetcode problem
// https://leetcode.com/problems/single-number/description/

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using std::string;
using std::vector;
using std::unordered_map;

class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        unordered_map<int, int> mymap;
        int ret;
        for (unsigned i = 0; i < nums.size(); i++)
        {
            if (mymap.count(nums[i]) == 0)
            {
                mymap[nums[i]] = 1;
            }
            else
                mymap[nums[i]] += 1;
        }
        for (auto &x: mymap)
        {
            if (x.second == 1)
			{
                ret = x.first;
				break ;
			}
        }
        return (ret);
    }
};

void	runcode(string s)
{
	Solution sol;
	vector<int> n;
	for (unsigned i = 0; i < s.length(); i++)
	{
		n.push_back(s[i] - '0');
	}
	std::cout << sol.singleNumber(n) << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	string s(av[1]);
	runcode(s);
	return (0);
}