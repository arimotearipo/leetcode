// Link to the leetcode problem
// https://leetcode.com/problems/word-pattern/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstring>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::unordered_map;


// Just a helper function that will split a string delimited by a space character.
// The assumption is that a whitespace will always be a single space character (ASCII: 32)
// and the there will be no trailing whitespace at the start or end of the string.
vector<string> splitString(string &s)
{
	vector<string> words;
	int start = 0, len = 0, lim = s.length();

	while (len <= lim)
	{
		if (s[len] == ' ' || s[len] == '\0')
		{
			words.push_back(s.substr(start, len - start));
			start = len + 1;
		}
		len++;
	}
	return (words);
}

class Solution
{
	public:
		bool wordPattern(string pattern, string s)
		{
			vector<string> words = splitString(s);
			if (pattern.length() != words.size()) // If the length of pattern is not the same as the number of words then it is certain that the pattern does not match
				return (false);

			// Create two unordered maps that will match one to the other
			unordered_map<char, string> charStr;
			unordered_map<string, char> strChar;
			int i = 0;

			while (i < pattern.length())
			{
				// Add both the word and the character into their respective maps if they don't exist yet.
				// The word and the character should just be the mirror of one another in their respective maps
				if (charStr.count(pattern[i]) == 0 && strChar.count(words[i]) == 0) 
				{
					charStr[pattern[i]] = words[i];
					strChar[words[i]] = pattern[i];
				}
				// If either the word or the character already exists in their maps, then we need to check if they are mirror map of another
				else if (charStr[pattern[i]] != words[i] || strChar[words[i]] != pattern[i])
				{
					return (false);
				}
				i++;
			}
			return (true);
		}
};

int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	string arg1(av[1]), arg2(av[2]);
	Solution s;
	cout << s.wordPattern(arg1, arg2) << endl;
	return (0);
}
