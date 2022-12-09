// Link to the leetcode problem
// https://leetcode.com/problems/jewels-and-stones/

#include <unordered_map>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::unordered_map;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
	{
        int sum = 0;
		for (char s: stones)
		{
			if (jewels.find(s) != -1)
				sum++;
		}
		return (sum);
    }
};

int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	
	return (0);
}