/*
Link to the leetcode problem
https://leetcode.com/problems/plus-one/
*/

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::reverse;

void	increment(vector<int>& digits, int i)
{
	if (i == digits.size() - 1 && digits[i] == 9)
	{
		digits[i] = 0;
		digits.push_back(1);
	}
	else if (digits[i] < 9)
		digits[i] += 1;
	else
	{
		digits[i] = 0;
		increment(digits, i + 1);
	}
}

class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
	{
		reverse(digits.begin(), digits.end());
		increment(digits, 0);
		reverse(digits.begin(), digits.end());
		return (digits);
    }
};

void	printvector(vector<int>& digits)
{
	for (unsigned i = 0; i < digits.size(); i++)
		cout << digits[i] << " ";
	cout << endl;
}

void	runcode(void)
{
	vector<int> digits;
	string str = "999";
	for (int i = 0; i < str.length(); i++)
		digits.push_back(str[i] - '0');
	Solution s;
	s.plusOne(digits);
	printvector(digits);
}

int	main(void)
{
	runcode();
	return (0);
}