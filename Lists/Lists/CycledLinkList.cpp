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

void Delete_X_CycledList(CycleLinkListHead* Head, int x)
{
	if (!Head || Head->num == 0) return;
	
	CycleLinkListNode* pre = Head->head;
	CycleLinkListNode* Start = pre;
	CycleLinkListNode* end = pre->next;
	while (end->next != Start)
	{
		end = end->next;
	}

	if (pre->val == x) 
	{
		if (Head->num == 1)
		{
			delete pre;
			Head->head = nullptr;
			Head->num--;
			return;
		}
		else
		{
			Head->head = Head->head->next;
			end->next = Head->head;
			delete pre;
			Head->num--;
			return;
		}
		
	}

	while (pre->next != Start && pre->next->val != x)
	{
		pre = pre->next;
	}


	if (pre ->next != Start)
	{
		CycleLinkListNode* tmp = pre->next;
		pre->next = pre->next->next;
		Head->num--;
		delete tmp;
		return;
	}

	cout << "没有值为: " << x <<"的数"<<endl;

}

void Delete_I_CycleList(CycleLinkListHead* Head, int i)
{
	if (!Head || Head->num == 0 || i > Head->num + 1 || i <= 0) return;

	CycleLinkListNode* pre = Head->head;

	--i;
	while (--i && i > 0) //i在为负的时候也判定为真了，比如在第一个的时候。
	{
		pre = pre->next;
	}

	if (Head->num == 1)
	{
		delete pre;
		Head->num--;
		Head->head = nullptr;
		return;
	}
	else if (pre == Head->head)
	{
		CycleLinkListNode* end = pre;
		while (end->next != Head->head)
		{
			end = end->next;
		}
		Head->head = Head->head->next;
		end->next = Head->head;
		delete pre;
		Head->num--;
		return;
	}

	CycleLinkListNode* tmp = pre->next;
	pre->next = pre->next->next;
	delete tmp;
	Head->num--;
	return;


}

int Research_X_CycledList(CycleLinkListHead* Head, int x)
{
	if (!Head || Head->num <= 0) return 0;
	
	CycleLinkListNode* cur = Head->head;
	if (Head->head->val == x)
	{
		return 1;
	}
	else
	{
		cur = cur->next;
	}

	int i = 1;
	while (cur->val != x && cur != Head->head)
	{
		cur = cur->next;
		++i;
	}

	if (cur == Head->head)
	{
		return 0;
	}
	
	return i + 1;

}

int Research_I_CycledList(CycleLinkListHead* Head, int i)
{
	if (!Head || Head->num <= 0 || i > Head->num + 1) return 0;

	CycleLinkListNode* cur = Head->head;
	while (--i)
	{
		cur = cur->next;
	}

	return cur->val;
}

void Modify_X_CycledList(CycleLinkListHead* Head, int x,int y)
{
	if (!Head || Head->num <= 0) return;

	CycleLinkListNode* cur = Head->head;
	if (cur->val == x)
	{
		cur->val = y;
		cout << "修改成功" << endl;
	}
	else
		cur = cur->next;

	while (cur->val != x && cur != Head->head)
	{
		cur = cur->next;
	}

	if (cur != Head->head)
	{
		cur->val = y;
		cout << "修改成功" << endl;
	}
	else
	{
		cout << "修改失败" << endl;
	}

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
	cout << "链表num：" << Head->num << endl;
}

void DeleteCycledList(CycleLinkListHead* Head)
{
	if (!Head || Head->num <= 0)
		return;

	CycleLinkListNode* cur = Head->head->next;
	CycleLinkListNode* nxt = cur->next;
	while (1)
	{
		if (cur == Head->head)
		{
			delete cur;
			Head->num--;
			Head->head = nullptr;
			return;
		}

		delete cur;
		cur = nxt;
		nxt = nxt->next;
		Head->num--;
	}

	cout << "清除完毕" << endl;
	return;
}
