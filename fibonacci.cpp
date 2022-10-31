/*
Link to the leetcode problem
https://leetcode.com/problems/fibonacci-number/
*/

#include <iostream>
#include <stdlib.h>

using std::string;
using std::cout;
using std::endl;

int	fibrecursion(int n)
{
	if (n <= 1)
		return (n);
	return (fibrecursion(n - 1) + fibrecursion(n - 2));
}

class Solution {
public:
    int fib(int n)
	{
        if (n <= 1)
			return (n);
		int	prevprev = 0;
		int prev = 1;
		int num = 0;
		for (int i = 2; i <= n; i++)
		{
			num = prev + prevprev;
			prevprev = prev;
			prev = num;
		}
		return (num);
    }
};

void	runcode(char *str)
{
	int n = atoi(str);
	Solution test;
	cout << test.fib(n) << endl;
	cout << fibrecursion(n) << endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	runcode(av[1]);
	return (0);
}