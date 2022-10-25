#include <iostream>
#include <stdio.h>
#include <vector>
#include <iomanip>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Solution {
public:
    bool isValid(string s)
	{
		vector<char> brackets;
		char temp;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(')
				brackets.push_back(')');
			else if (s[i] == '[')
				brackets.push_back(']');
			else if (s[i] == '{')
				brackets.push_back('}');
			else if (brackets.size() > 0 && brackets.back() == s[i])
				brackets.pop_back();
			else
				return (false);
		}
		if (brackets.size() == 0)
			return (true);
		return (false);
    }
};

void	runcode(string &s)
{
	Solution test;
	if (test.isValid(s) == true)
		std::cout << "true\n";
	else
		std::cout << "false\n";
}

void	justest(void)
{
	vector<char> bodo;
	cout << bodo.back() << endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	string s(av[1]);
	// string s = "hello(asd)asd[asd]";
	runcode(s);
	// justest();
	return (0);
}