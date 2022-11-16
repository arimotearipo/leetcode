// Link to the leetcode problem
// https://leetcode.com/problems/valid-palindrome/

#include <iostream>
#include <cctype>
#include <algorithm>
#include <stdio.h>

using std::string;


class Solution {
public:
    bool isPalindrome(string s)
	{
		string a;
		int i = 0;
        while (i < s.length())
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				a.push_back(s[i] + 32);
			else if (isalpha(s[i]) == 0 && isdigit(s[i]) == 0)
			{
				i++;
				continue ;
			}
			else
				a.push_back(s[i]);
			i++;
		}
		int x = 0, y = a.length() - 1;
		while (x <= y)
		{
			if (tolower(a[x]) != tolower(a[y]))
				return (false);
			x++;
			y--;
		}
		return (true);
    }
};

// A man, a plan, a canal: Panama
// 012345678901234567890123456789
int	main(void)
{
	string test = "race a car";
	Solution s;
	std::cout << s.isPalindrome(test) << std::endl;
	return (0);
}