// Link to the leetcode problem
// https://leetcode.com/problems/reverse-vowels-of-a-string/

#include <iostream>
#include <stdio.h>

using std::string;

bool    isVowel(char n)
{
    char vowels[11] = "aeiouAEIOU";
    for (int i = 0; i < 10; i++)
    {
        if (vowels[i] == n)
            return (true);
    }
    return (false);
}

class Solution {
public:
    string reverseVowels(string s)
    {
        char temp;
        int start = 0, end = s.length() - 1;
        while (start < end)
        {
            if (isVowel(s[start]) && isVowel(s[end]))
            {
                temp = s[start];
                s[start] = s[end];
                s[end] = temp;
				start++;
				end--;
            }
            else if (!isVowel(s[start]))
            {
                start++;
            }
            else if (!isVowel(s[end]))
            {
                end--;
            }
        }
		return (s);
    }
};

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	Solution s;
	string str(av[1]);
	// s.reverseVowels(str);
	std::cout << s.reverseVowels(str) << std::endl;
	return (0);
}