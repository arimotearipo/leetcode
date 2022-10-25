#include <vector>
#include <iostream>
#include <stdio.h>

using std::vector;
using std::cout;
using std::string;
using std::endl;

class Solution {
public:
    int removeElement(vector<int>& nums, int val)
	{
		int temp;
		int len = nums.size();
		int count = 0;
		for (unsigned i = 0; i < len; i++)
		{
			if (nums[i] == val)
				count++;
			else
			{
				nums[i - count] = nums[i];
			}
		}
		return (len - count);
    }
};

void	printvector(vector<int> &v)
{
	for (unsigned i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void	runcode(void)
{
	srand(time(NULL));
	vector<int> test;
	string a = "3223";
	// for (unsigned i = 0; i < 10; i++)
	// 	test.push_back(rand() % 7);
	for (unsigned i = 0; i < a.length(); i++)
		test.push_back(a[i] - '0');
	printvector(test);
	Solution s;
	int k = s.removeElement(test, 3);
	cout << "k: " << k << endl;
	printvector(test);
}

int	main(void)
{
	runcode();
	return (0);
}