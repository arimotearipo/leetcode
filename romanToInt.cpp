#include <iostream>
#include <unordered_map>

using std::string;
using std::unordered_map;
using std::cout;
using std::endl;

class Solution {
public:
    int romanToInt(string s)
	{
		unordered_map<char, int> map = 	{{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};
		int sum = map[s.back()];
		for (int i = s.length() - 2; i >= 0; --i)
		{
			if (map[s[i]] < map[s[i + 1]])
				sum -= map[s[i]];
			else
				sum += map[s[i]];
		}
		return (sum);
    }
};

void	runcode(string &s)
{
	Solution test;
	cout << test.romanToInt(s) << endl;
}

int	main(int ac, char **av)
{
	(void)ac;
	string s(av[1]);
	runcode(s);
	return (0);
}