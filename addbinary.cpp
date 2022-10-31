/*
Link to the leetcode problem
https://leetcode.com/problems/add-binary/
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::reverse;

class Solution {
public:
    string addBinary(string a, string b)
	{
		int i = a.length();
		int j = b.length();
		string result;
		while (i >= 0 || j >= 0)
		{
			if (a[i] == '1' && b[j] == '1')
				result += '10';
		}
		
    }
};

void	runcode(void)
{
	string s2 = "10010101110001";
	string s1 = "101100011010111001101";
	Solution s;
	cout << s.addBinary(s1, s2) << endl;
}

int	main(void)
{
	runcode();
	return (0);
}