// Link to the leetcode problem
// https://leetcode.com/problems/is-subsequence/

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Solution {
public:
	bool isSubsequence(string s, string t)
	{
		int count = 0;
		int tlen = t.length();
		for (int i = 0; i < tlen; i++)
		{
			if (t[i] == s[count])
				count++;
		}
		return (count == s.length());
	}
};

int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	string s(av[1]), t(av[2]);
	Solution sol;
	cout << sol.isSubsequence(s, t) << endl;
	return (0);
}	