// Link to the leetcode problem
// https://leetcode.com/problems/valid-anagram/

#include <iostream>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;

class Solution {
public:
    bool isAnagram(string s, string t)
    {
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		if (s == t)
			return (true);
		return (false);
    }
};