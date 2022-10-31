#include <vector>
#include <algorithm>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
	{
		int x = m - 1;
		int y = n - 1;
		int z = m + n - 1;
		while (y >= 0)
		{
			if (x >= 0 && nums1[x] > nums2[y])
			{
				nums1[z] = nums1[x];
				z--;
				x--;
			}
			else
			{
				nums1[z] = nums2[y];
                z--;
                y--;
			}
		}
    }
};

void	printvec(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void	runcode()
{
	string s1 = "2";
	string s2 = "1";
	vector<int> v1, v2;
	for (int i = 0; i < s1.length(); i++)
		v1.push_back(s1[i] - '0');
	for (int i = 0; i < s2.length(); i++)
		v1.push_back(0);
	for (int i = 0; i < s2.length(); i++)
		v2.push_back(s2[i] - '0');
	Solution test;
	printvec(v1);
	printvec(v2);
	test.merge(v1, v1.size() - v2.size(), v2, v2.size());
	printvec(v1);
}

int	main(void)
{
	runcode();
	return (0);
}