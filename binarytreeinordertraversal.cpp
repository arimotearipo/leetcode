/*
Link to the leetcode problem
https://leetcode.com/problems/binary-tree-inorder-traversal/
*/

#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>

using std::vector;
using std::stack;
using std::cout;
using std::cin;
using std::string;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root)
	{
		stack<TreeNode*> st;
		vector<int> output_arr;

		if (root == nullptr)
			return (output_arr);

		TreeNode *current = root;

		while (current != nullptr || !st.empty())
		{
			while (current != nullptr)
			{
				st.push(current);
				current = current->left;
			}
			current = st.top();
			st.pop();
			output_arr.push_back(current->val);
			current = current->right;
		}
		return (output_arr);
    }
};

// No test code written for this yet