// Link to the leetcode problem
// https://leetcode.com/problems/power-of-two/

#include <string>
#include <iostream>

class Solution {
public:
    bool isPowerOfTwo(int n)
	{
		long sum = 1;
		while (sum <= n)
		{
			if (sum == n)
				return (true);
			sum *= 2;
		}
		return (false);
    }
};

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	int n = std::stoi(av[1]);
	Solution s;
	std::cout << s.isPowerOfTwo(n) << std::endl;
	return (0);
}