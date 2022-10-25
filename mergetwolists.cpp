#include <iostream>
#include <stdio.h>
#include <limits.h>

struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/*
1. Lopp through the to lists together.
2. For each iteration, compare the two values.
 . Assign list1->next to a temporary pointer
3. If list2 has a bigger or equal value, assign list2 to list1->next
4. Reassign the temp pointer to list1->next->next
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
	{
		ListNode *l1, *l2, *dummy, *save;
		int a, b;
		l1 = list1;
		l2 = list2;
		dummy = new ListNode();
		save = dummy;
		while (l1 != nullptr || l2 != nullptr)
		{
			a = (l1 == nullptr) ? INT_MIN : l1->val;
			b = (l2 == nullptr) ? INT_MIN : l2->val;
			if (l1 != nullptr && (l2 == nullptr || a <= b))
			{
				// printf("l1->val: %d\n", a);
				dummy->next = new ListNode(a);
				if (l1 != nullptr) {l1 = l1->next;}
			}
			else if (l2 != nullptr && (l1 == nullptr || a >= b))
			{
				// printf("l2->val: %d\n", b);
				dummy->next = new ListNode(b);
				if (l2 != nullptr) {l2 = l2->next;}
			}
			dummy = dummy->next;
		}
		dummy = save->next;
		delete save;
		return (dummy);
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

void	runcode(void)
{
	Solution test;
	ListNode *a, *b, *ahold, *bhold;
	std::string one = "14589";
	std::string two = "3678";
	a = new ListNode(one[0] - '0');
	b = new ListNode(two[0] - '0');
	ahold = a;
	bhold = b;
	for (unsigned i = 1; i < one.length(); i++)
	{
		a->next = new ListNode(one[i] - '0');
		a = a->next;
	}
	for (unsigned i = 1; i < two.length(); i++)
	{
		b->next = new ListNode(two[i] - '0');
		b = b->next;
	}
	a = ahold;
	b = bhold;

	printlist(a);
	printlist(b);
	ListNode *res = test.mergeTwoLists(a, b);
	printf("------\n");
	printlist(res);
}

int	main(void)
{
	runcode();
	return (0);
}