// Link to the leetcode problem
// https://leetcode.com/problems/linked-list-cycle/solutions/


#include <iostream>
#include <unistd.h>
#include <vector>
#include <algorithm>

using std::vector;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Solution using algorithm
// Not the fastest
// class Solution {
// public:
//     bool hasCycle(ListNode *head)
//     {
//         vector<ListNode*> vlst;

//         ListNode *lst = head;
//         while (lst != nullptr)
//         {
//             if (find(vlst.begin(), vlst.end(), lst) == vlst.end())
//             {
//                 vlst.push_back(lst);
//             }
//             else
//             {
//                 return (true);
//             }
//             lst = lst->next;
//         }
//         return (false);
//     }
// };

// Solution without using algorithm
class Solution {
	public:
		bool hasCycle(ListNode *head)
		{
			ListNode *fast = head;
			ListNode *slow = head;

			while (fast != nullptr && fast->next != nullptr)
			{
				fast = fast->next->next;
				slow = slow->next;

				if (fast == slow)
					return (true);
			}
			return (false);
		}
};