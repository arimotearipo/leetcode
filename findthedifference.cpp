// Link to the leetcode problem
// https://leetcode.com/problems/find-the-difference/

#include <iostream>
#include <unordered_map>
#include <algorithm>

using std::string;
using std::cout;
using std::endl;
using std::unordered_map;

class Solution {
public:
    char findTheDifference(string s, string t)
	{
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		int i = 0;
		while (i < t.length())
		{
			if (s[i] != t[i])
				return (t[i]);
			i++;
		}
		return (t[i]);
    }
};

// class Solution {
// public:
//     char findTheDifference(string s, string t)
// 	{
// 		s = s + t;
// 		int c = 0;
// 		for (char x: s)
// 		{
// 			c ^= x;
// 		}
// 		return (c);
// 	}
// };

int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	Solution sol;
	string s1(av[1]), s2(av[2]);
	cout << sol.findTheDifference(s1, s2) << endl;
	return (0);
}