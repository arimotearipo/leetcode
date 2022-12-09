// Link to the leetcode problem
// https://leetcode.com/problems/ransom-note/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <unordered_map>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::to_string;
using std::unordered_map;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
	{
		unordered_map<char, int> letters;

		for (char c: magazine)
			letters[c]++;
		for (char c: ransomNote)
		{
			if (letters[c] > 0)
				letters[c]--;
			else
				return (false);
		}
		return (true);
	}
};

int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	string r(av[1]), m(av[2]);
	Solution s;
	cout << s.canConstruct(r, m) << endl;
	return (0);
}