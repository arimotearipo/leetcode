// Link to the leetcode problem
// https://leetcode.com/problems/shuffle-string/

#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

class Solution
{
	public:
    	// string restoreString(string s, vector<int>& indices)
		// {
		// 	int len = s.length();
		// 	string res(len, ' ');
		// 	for (int i = 0; i < len; i++)
		// 	{
		// 		cout << i << ":" << indices[i] << " ";
		// 		res[i] = s[indices[i]];
		// 	}
		// 	cout << endl;
		// 	return (res);
    	// }
		    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        string str = s;
        for(int i=0;i<n;i++){
            str[indices[i]]=s[i];
        }
        return str;
    }
};

int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	string s(av[1]);
	vector<int> indices;
	for (int i = 0; av[2][i] != '\0'; i++)
	{
		indices.push_back(av[2][i] - '0'); // can only be tested with single digit indices
	}
	Solution sol;
	std::cout << sol.restoreString(s, indices) << std::endl;
	return (0);
}