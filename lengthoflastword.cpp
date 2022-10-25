/*
Link to the leetcode problem
https://leetcode.com/problems/length-of-last-word/
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::string;


class Solution {
public:
    int lengthOfLastWord(string s)
	{
		int count = 0;
        int i = s.length() - 1;
		while (s[i] <= 32)
			i--;
		while (i >= 0 && s[i] > 32)
		{
			i--;
			count++;
		}
		return (count);
    }
};

void	runcode(void)
{
	string test = "catto   ";
	Solution s;
	cout << s.lengthOfLastWord(test) << endl;
}

int	main(void)
{
	runcode();
	return (0);
}