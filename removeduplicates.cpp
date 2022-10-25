#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::string;


class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
		int count = 0;
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] == nums[i - 1])
				count++;
			else
				nums[i - count] = nums[i];
		}
		return (nums.size() - count);
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
	string a = "122333456";
	// for (unsigned i = 0; i < 10; i++)
	// 	test.push_back(rand() % 7);
	for (unsigned i = 0; i < a.length(); i++)
		test.push_back(a[i] - '0');
	printvector(test);
	Solution s;
	int k = s.removeDuplicates(test);
	cout << "k: " << k << endl;
	printvector(test);
}

int	main(void)
{
	runcode();
	return (0);
}