/*
Link to the leetcode problem
https://leetcode.com/problems/climbing-stairs/
*/

#include <stdlib.h>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    int climbStairs(int n)
	{
        if (n == 0) return (0);
		if (n == 1) return (1);
		if (n == 2) return (2);

		int onestepbefore = 2;
		int twostepbefore = 1;
		int ways = 0;
		for (int i = 2; i < n; i++)
		{
			ways = onestepbefore + twostepbefore;
			twostepbefore = onestepbefore;
			onestepbefore = ways;
		}
		return (ways);
    }
};

void	runcode(char *s)
{
	int n = atoi(s);
	Solution test;
	cout << test.climbStairs(n) << endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	runcode(av[1]);
	return (0);
}