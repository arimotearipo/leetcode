#include <iostream>
#include <string>
#include <stdio.h>

using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    bool isPalindrome(int x)
	{
        std::string s = std::to_string(x);
		unsigned middle = s.length() / 2;
		unsigned start ,end;
		start = 0;
		end = s.length() - 1;
		while (start != middle)
		{
			if (s[start] != s[end]) {return (false);}
			start++;
			end--;
		}
		return (true);
    }
};

void	runcode(void)
{
	Solution 	test;
	string 		result;
	bool x = test.isPalindrome(121);
	result = (x == true) ? "true" : "false";
	cout << result << endl;
}

int	main(void)
{
	runcode();
	return (0);
}