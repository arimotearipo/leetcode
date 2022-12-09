// Link to the leetcode problem
// https://leetcode.com/problems/first-unique-character-in-a-string/

#include <iostream>
#include <unordered_map>

using std::string;
using std::cout;
using std::endl;
using std::unordered_map;

class Solution
{
	public:
	    int firstUniqChar(string s)
		{
			unordered_map<char, int> mymap;

			for (char c: s)
				mymap[c]++;
			for (int i = 0; i < s.length(); i++)
			{
				if (mymap[s[i]] == 1)
					return (i);
			}
			return (-1);
	    }
};

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	string s(av[1]);
	Solution sol;
	cout << sol.firstUniqChar(s) << endl;
	return (0);
}