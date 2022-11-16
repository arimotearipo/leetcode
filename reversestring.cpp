// Link to the leetcode problem
// https://leetcode.com/problems/reverse-string/

#include <iostream>
#include <vector>

using std::vector;
using std::string;

class Solution {
public:
    void reverseString(vector<char>& s)
	{
        int i = 0;
		int j = s.size() - 1;
		int mid = s.size() / 2;
		while (i < mid)
		{
			char temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			i++;
			j--;
		}
    }
};
int	main(int ac, char **av)
{
	string str(av[1]);
	Solution s;
	vector<char> vec;
	for (int i = 0; i < str.length(); i++)
		vec.push_back(str[i]);
	s.reverseString(vec);
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i];
	std::cout << "\n";
	return (0);
}