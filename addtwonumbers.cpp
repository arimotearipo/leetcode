#include <stdio.h>
#include <iostream>
#include <string>

using std::cout;
using std::endl;

//  * Definition for singly-linked list.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
        int t1, t2, carry;
        ListNode *ret;
        ret = new ListNode;
        ListNode *first = ret;
		carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry)
        {
            t1 = (l1 == nullptr) ? 0 : l1->val;
            t2 = (l2 == nullptr) ? 0 : l2->val;
			printf("before: %d\tt1: %d\tt2:%d\t carry+t1+t2: %d\tval: %d\tcarry: %d\n", carry, t1, t2, carry + t1 + t2, (carry + t1 + t2) % 10, (carry + t1 + t2) / 10);
			int sum = carry + t1 + t2;
			carry = sum / 10;
			ret->next = new ListNode(sum % 10);
			ret = ret->next;
            if (l1 != nullptr) {l1 = l1->next;}
            if (l2 != nullptr) {l2 = l2->next;}
        }
		ListNode *toreturn = first->next;
		delete first;
        return (toreturn);
    }
};

void	runcode(ListNode* a, ListNode* b)
{

	Solution test;
	ListNode *res, *atemp, *btemp, *tofree;
	atemp = a;
	btemp = b;
	res = test.addTwoNumbers(atemp, btemp);
	while (res != nullptr)
	{
		tofree = res;
		cout << res->val;
		res = res->next;
		delete tofree;
	}
	cout << endl;
}

void	printcode(ListNode *a, ListNode *b)
{
	ListNode *atemp, *btemp;
	atemp = a;
	btemp = b;
	while (atemp != nullptr)
	{
		cout << atemp->val << endl;
		atemp = atemp->next;
	}
	cout << endl;
	while (btemp != nullptr)
	{
		cout << btemp->val << endl;
		btemp = btemp->next;
	}
}

void	freeall(ListNode *a, ListNode *b)
{
	ListNode *temp, *atemp, *btemp;
	atemp = a;
	btemp = b;
	while (atemp != nullptr)
	{
		temp = atemp;
		atemp = atemp->next;
		delete temp;
	}
	cout << endl;
	while (btemp != nullptr)
	{
		temp = btemp;
		btemp = btemp->next;
		delete temp;
	}
	a = nullptr;
	b = nullptr;
}

int	main(void)
{
	std::string one = "9999999";
	std::string two = "9999";
	ListNode* a = new ListNode(one[0] - '0');
	ListNode* ahold = a;
	ListNode* b = new ListNode(two[0] - '0');
	ListNode* bhold = b;
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
	// printcode(ahold, bhold);
	runcode(ahold, bhold);
	freeall(ahold, bhold);
	return (0);
}