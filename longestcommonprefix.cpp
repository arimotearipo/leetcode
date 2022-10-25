#include <iostream>
#include <vector>
#include <stdio.h>

using std::string;
using std::cout;
using std::endl;
using std::vector;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
	{
		string prefix = "";
		int	index = 0;
		char temp;
		for (unsigned i = 0; i < strs[0].length(); i++)
		{
			temp = strs[0][i];
			for (unsigned j = 0; j < strs.size(); j++)
			{
				if (temp != strs[j][i])
					return (prefix);
			}
			prefix += temp;
		}
		return (prefix);
    }
};

void	runcode(void)
{
	vector<string> strs = {"", "flower", "floor"};
	Solution test;
	string res = test.longestCommonPrefix(strs);
	printf("common prefix: %s\n", res.c_str());
}

int	main(void)
{
	runcode();
	// abc();
	return (0);
}