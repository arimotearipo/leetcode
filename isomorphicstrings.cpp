#include <iostream>
#include <unordered_map>

using std::unordered_map;
using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
		unordered_map<char, char> map1, map2;
		for (unsigned i = 0; i < s.length(); i++)
		{
			if (map1.count(s[i]) == 0 && map2.count(t[i]) == 0)
			{
				map1[s[i]] = t[i];
				map2[t[i]] = s[i];
			}
			else if (map1[s[i]] != t[i] || map2[t[i]] != s[i])
			{
				return (false);
			}
		}
        return (true);
    }
};


int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	string one(av[1]);
	string two(av[2]);
	Solution s;
	std::cout << s.isIsomorphic(one, two) << std::endl;
	return (0);
}