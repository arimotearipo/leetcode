// link to the leetcode problem
// https://leetcode.com/problems/reverse-linked-list/

#include <iostream>
#include <cstdlib>

// Definition for singly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
	public:
		ListNode* reverseList(ListNode* head)
		{
			ListNode *current = head, *prev = nullptr, *next = nullptr;
			while (current != nullptr)
			{
				next = current->next;
				current->next = prev;
				prev = current;
				current = next;
			}
			head = prev;
			return (head);
		}
};


void	printList(ListNode *head)
{
	ListNode *lst = head;
	while (lst != nullptr)
	{
		std::cout << lst->val << std::endl;
		lst = lst->next;
	}
}

void	freeList(ListNode *head)
{
	ListNode *lst = head;
	ListNode *temp;
	while (lst != nullptr)
	{
		temp = lst;
		lst = lst->next;
		delete temp;
	}
}

int	main(void)
{
	srand(time(NULL));
	ListNode *lst = new ListNode(7);
	ListNode *head = lst;
	for (int i = 0; i < 10; i++)	
	{
		lst->next = new ListNode(rand() % 20);
		lst = lst->next;
	}
	printList(head);
	Solution s;
	s.reverseList(head);
	printList(head);
	freeList(head);
	return (0);
}