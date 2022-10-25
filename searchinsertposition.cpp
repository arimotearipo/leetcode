#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;
using std::string;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
	{
		int pos;
        for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] >= target)
				return (i);
			if (target > nums[i])
				pos = i;
		}
		return (pos + 1);
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
	string a = "12356789";
	// for (unsigned i = 0; i < 10; i++)
	// 	test.push_back(rand() % 7);
	for (unsigned i = 0; i < a.length(); i++)
		test.push_back(a[i] - '0');
	printvector(test);
	Solution s;
	cout << s.searchInsert(test, 0) << endl;
}

int	main(void)
{
	runcode();
	return (0);
}