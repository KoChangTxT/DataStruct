#include "CycledLinkList.h"

CycleLinkListHead* initCycledLinkList()
{
	CycleLinkListHead* Head = new CycleLinkListHead;
	Head->num = 0;
	Head->head = nullptr;

	return Head;
}

void InsertCycledList(CycleLinkListHead* Head, int x, int i)
{
	if (!Head || i < -1 || i == 0 || i > Head->num + 1) return;

	if (Head->num == 0)
	{
		Head->head = new CycleLinkListNode(x);
		Head->head->next = Head->head;
		Head->num++;
		return;
	}

	CycleLinkListNode* Tail = Head->head; //找到尾节点
	while (Tail->next != Head->head)
	{
		Tail = Tail->next;
	}

	if (i == 1)
	{
		CycleLinkListNode* Node = new CycleLinkListNode(x);
		Node->next = Head->head;
		Head->head = Node;
		Tail->next = Node;
		Head->num++;
		return;
	}

	if (i == -1)
	{
		CycleLinkListNode* Node = new CycleLinkListNode(x);
		Node->next = Tail->next;
		Tail->next = Node;
		Head->num++;
		return;
	}

	CycleLinkListNode* pre = Head->head;
	--i;
	while (--i)
	{
		pre = pre->next;
	}
	CycleLinkListNode* Node = new CycleLinkListNode(x);
	Node->next = pre->next;
	pre->next = Node;
	Head->num++;
	return;
}

void printCycleList(CycleLinkListHead* Head)
{
	if (!Head || Head->num == 0)
		return;

	CycleLinkListNode* cur = Head->head;
	while (cur->next != Head->head)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}

	cout <<cur->val<< endl;
	cout << "尾指针指向的下一个的值为：" << cur->next->val << endl;
}
