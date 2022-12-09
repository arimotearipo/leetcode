// Link to the leetcode problem
// https://leetcode.com/problems/add-strings/description/
// Link to my solution
// https://leetcode.com/problems/add-strings/solutions/2872049/c-runtime-23ms-beats-31-36-memory-55-7mb-beats-26-6/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cstring>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::to_string;

class Solution
{
	public:
		string addStrings(string num1, string num2)
		{
			int i = num1.length() - 1, j = num2.length() - 1;
			int carry = 0, add, a, b;
			string total;

			while (i >= 0 || j >= 0 || carry)	
			{
				a = (i >= 0) ? num1[i] - '0' : 0;
				b = (j >= 0) ? num2[j] - '0' : 0;
				add = a + b + carry;
				carry = add / 10; // Save the value to be carried forward
				total = to_string(add % 10) + total;
				i--;
				j--;
			}
			return (total);
		}
};


// 6913259244 71103343
int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	string num1(av[1]), num2(av[2]);
	Solution s;
	cout << s.addStrings(num1, num2) << endl;
	return (0);
}