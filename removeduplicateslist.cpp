/*
Link to the leetcode problem
https://leetcode.com/problems/remove-duplicates-from-sorted-list/
*/

#include <iostream>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head)
	{
		if (head == nullptr) return (nullptr);
        ListNode *lst, *tmp;
		lst = head;
		while (lst->next != nullptr)
		{
			if (lst->val == lst->next->val)
			{
				tmp = lst->next;
				lst->next = lst->next->next;
				delete tmp;
			}
			else
				lst = lst->next;
		}
		return (head);
	}
};

void	printlist(ListNode *l)
{
	ListNode *temp = l;
	while (temp != nullptr)
	{
		std::cout << temp->val << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}

void	deletelist(ListNode *l)
{
	ListNode* tmp;
	while (l != nullptr)
	{
		tmp = l;
		l = l->next;
		delete tmp;
	}
}

void	runcode(void)
{
	Solution test;
	ListNode *a, *ahold;
	std::string one = "";
	a = new ListNode(one[0] - '0');
	ahold = a;
	for (unsigned i = 1; i < one.length(); i++)
	{
		a->next = new ListNode(one[i] - '0');
		a = a->next;
	}
	a = ahold;
	printlist(a);
	ListNode *res = test.deleteDuplicates(nullptr);
	printf("------\n");
	printlist(res);
	deletelist(res);
}

int	main(void)
{
	runcode();
	return (0);
}