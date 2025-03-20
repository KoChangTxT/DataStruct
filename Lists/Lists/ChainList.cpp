#include "ChainList.h"


LinkListHead* InitLinkList()
{
	LinkListHead* Head = new LinkListHead;

	Head->num = 0;
	Head->head = nullptr;
	return Head;
}

void InsertLinkList(LinkListHead* Head, int x,int i)
{
	if (!Head || i < -1 || i == 0) return;
	
	if (i == 1)		//头插
	{
		LinkListNode* Node = new LinkListNode(x);

		Head->head = Node->next;
		Head->head = Node;
		Head->num++;
		return;
	}

	if (i == -1)	//尾插
	{
		LinkListNode* Node = Head->head;
		//找到最后一个节点
		while (Node->next)
		{
			Node = Node->next;
		}

		Node->next = new LinkListNode(x);
		Head->num++;
		return;
	}

	LinkListNode* pre = Head->head; //作用:找到第i - 1个位置
	--i;
	while (--i)
	{
		pre = pre->next;
	}
	LinkListNode* newNode = new LinkListNode(x);
	newNode->next = pre->next;
	pre->next = newNode;
	Head->num++;
	return;
}

void Delete_X_LinkList(LinkListHead* Head, int x)
{
	//预先判断
	if (!Head || Head->num == 0)
		return;
	

	LinkListNode* cur = Head->head;
	LinkListNode* pre = nullptr;
	while (cur)
	{
		if (cur->val == x)
		{
			break;
		}
		pre = cur;
		cur = cur->next;
		
	}

	if (cur == Head->head) //如果首元节点的值即为目标值                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
	{
		Head->head = Head->head->next;
		delete cur;
		Head->num--;
		return;
	}

	if (cur == nullptr)
	{
		cout << "没有值为：" << x << "的节点" << endl;
		return;
	}

	pre->next = cur->next;
	Head->num--;
	delete cur;

	return;

}

void Delete_I_LinkList(LinkListHead* Head, int i)
{
	if (!Head || i > Head->num || i <= 0) return;

	if (i == 1) // 如果删除的是首元节点
	{
		LinkListNode* tmp = Head->head;
		Head->head = Head->head->next;
		delete tmp;
		tmp = nullptr;
		Head->num--;
		return;
	}

	LinkListNode* pre = Head->head;		//第i个位置的前一个节点
	--i;
	while (--i)
	{
		pre = pre->next;
	}
	
	LinkListNode* tmp = pre->next;
	pre->next = tmp->next;
	delete tmp;
	Head->num--;
	return;

}

int Research_X_LinkList(LinkListHead* Head, int x)
{
	if (!Head || Head->num == 0) return 0;
	
	LinkListNode* cur = Head->head;

	int i = 1;
	while (cur && cur->val != x)
	{
		cur = cur->next;
		i++;
	}

	if (!cur)
	{
		return 0;
	}

	return i;
}

int Research_I_LinkList(LinkListHead* Head, int i)
{
	if (!Head || Head->num == 0 || i <= 0 || i > Head->num) return 0;

	LinkListNode* cur = Head->head;
	while (--i)
	{
		cur = cur->next;
	}

	return cur->val;
	
}

void Modify_X_LinkList(LinkListHead* Head, int x,int y)
{
	if (!Head || Head->num == 0) return;
	
	LinkListNode* cur = Head->head;
	while (cur && cur->val != x)
	{
		cur = cur->next;
	}
	if (!cur)
	{
		cout << "没有值为：" << x << endl;
	}

	cur->val = y;

	return;
}

void PrintList(LinkListHead* Head)
{
	LinkListNode* node = Head->head;
	while (node)
	{
		cout << node->val << " ";
		node = node->next;
	}
	cout << endl;
	cout << Head->num << endl;
}

LinkListNode* FindMiddle(LinkListHead* Head)
{
	if (!Head || Head->num <= 2)
	{
		return nullptr;
	}

	LinkListNode* slow = Head->head;
	LinkListNode* fast = Head->head;

	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}

	return slow;

}

bool DeleteLinkList(LinkListHead* Head)
{
	if (!Head || Head->num == 0) return true;

	LinkListNode* cur = Head->head;
	LinkListNode* nxt = cur->next;
	while (cur)
	{
		delete cur;
		cur = nxt;
		if (nxt)
		nxt = nxt->next;
		Head->num--;
	}
	Head->head = nullptr;

	if (!Head->num) return true;
	
	return false; 
	
}
