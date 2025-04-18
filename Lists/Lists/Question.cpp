#include <iostream>
using namespace std;

typedef struct LNode
{
	int val;
	LNode* next;
	LNode* prev;

	LNode(int v = 0, LNode* n = nullptr,LNode* p = nullptr) :val(v), next(n),prev(p) {};
}LList;

LList* Init()
{
	LList* Head = new LList;
	Head->val = 0;
	Head->next = nullptr;

	return Head;
}

void print(LList* Head)
{
	LNode* cur = Head->next;
	while (cur)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	cout << endl;
}

void ques1(LList* Head, int x)
{
	LNode* cur = Head->next;
	LNode* pre = Head;

	while (cur)
	{
		if (cur->val == x)
		{
			pre->next = cur->next;
			delete cur;
			cur = pre;

		}
		else
		{
			pre = cur;
			cur = cur->next;
		}
	}
}

void ques2(LList* Head)
{
	LNode* cur = Head->next;
	LNode* pre = Head;
	LNode* minval = pre;
	int Dmin = INT_MAX;

	while (cur)
	{
		if (cur->val < Dmin)
		{
			minval = pre;
			Dmin = cur->val;
			pre = cur;
			cur = cur->next;
		}
		else
		{
			pre = cur;
			cur = cur->next;
		}
	}

	LNode* tmp = minval->next;
	delete tmp;
	tmp = nullptr;
	minval->next = minval->next->next;
}

void ques3(LList* Head)
{
	LNode* pre = Head;
	LNode* cur = pre->next;
	LNode* nxt = cur->next;

	while (cur)
	{
		cur->next = pre;
		pre = cur;
		cur = nxt;
		if (nxt)
		{
			nxt = nxt->next;
		}
	}
}

int main()
{
	LList* Head = Init();

	LNode* n1 = new LNode(5, nullptr,nullptr);
	LNode* n2 = new LNode(4, nullptr, nullptr);
	LNode* n3 = new LNode(1, nullptr, nullptr);
	LNode* n4 = new LNode(3, nullptr, nullptr);	//5 4 1 3
	n1->next = n2; n2->next = n3; n3->next = n4;
	n1->prev = Head; n2->prev = n1; n3->prev = n2; n4->prev = n3;
	Head->next = n1;

	ques3(Head);
	//print(Head);

	system("pause");
}