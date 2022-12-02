// Link to the leetcode problem
// https://leetcode.com/problems/fizz-buzz/description/

#include <vector>
#include <iostream>

using std::vector;
using std::to_string;
using std::string;


// This solution requires if-else statements and also involves modulus operation
// The runtime is fast but costs more on memory
class Solution {
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> ret;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
                ret.push_back("FizzBuzz");
            else if (i % 3 == 0)
                ret.push_back("Fizz");
            else if (i % 5 == 0)
                ret.push_back("Buzz");
            else
                ret.push_back(to_string(i));    
        }
        return (ret);
    }
};

// This solution totally avoids if-else statements and does not use the modulus operation
// Slow runtime but cheap on memory
// class Solution
// {
//     public:
//         vector<string> fizzBuzz(int n)
//         {
//             vector<string> ret(n);
//             for (int i = 1; i <= n; i++)
//                 ret[i - 1] = to_string(i);
//             for (int i = 2; i <= n; i += 3)
//                 ret[i] = "Fizz";
//             for (int i = 4; i <= n; i += 5)
//                 ret[i] = "Buzz";
//             for (int i = 14; i <= n; i += 15)
//                 ret[i] = "FizzBuzz";
//             return (ret);
//         }
// };

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	Solution s;
	vector<string> result = s.fizzBuzz(stoi(string(av[1])));
	for (auto x: result)
		std::cout << x << std::endl;
	return (0);
}