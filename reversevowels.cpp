// Link to the leetcode problem
// https://leetcode.com/problems/reverse-vowels-of-a-string/

#include <iostream>
#include <stdio.h>

using std::string;

bool	isVowel(char c)
{
	char vowels[11] = "aeiouAEIOU";
	for (int i = 0; i < 10; i++)
	{
		if (vowels[i] == c)
			return (true);
	}
	return (false);
}

class Solution {
public:
    string reverseVowels(string s)
	{
		string a;
		char temp;
		int mid = s.length() / 2, j = s.length(), len = s.length();
		for (unsigned i = 0; i != j; i++)
		{
			if (isVowel(s[i]))
			{
				while (!isVowel(s[j]))
					j--;
				printf("i: %c j: %c\n", s[i], s[j]);
				a.push_back(s[j]);
			}
			else
			{
				a.push_back(s[i]);
			}
		}
		return (a);
    }
};

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	Solution s;
	string str(av[1]);
	s.reverseVowels(str);
	std::cout << str << std::endl;
	return (0);
}