#include "ChainList.h"

LinkListHead* InitLinkList()
{
	LinkListHead* Head = new LinkListHead;

	Head->num = 0;
	Head->head = nullptr;
	return Head;
}

void InsertLiniList(LinkListHead* Head, int x,int i)
{
	if (!Head || i < -1 || i == 0) return;
	
	if (i == 1)		//ͷ��
	{
		LinkListNode* Node = new LinkListNode(x);

		Head->head = Node->next;
		Head->head = Node;
		Head->num++;
		return;
	}

	if (i == -1)	//β��
	{
		LinkListNode* Node = Head->head;
		//�ҵ����һ���ڵ�
		while (Node->next)
		{
			Node = Node->next;
		}

		Node->next = new LinkListNode(x);
		Head->num++;
		return;
	}

	LinkListNode* pre = Head->head; //����:�ҵ���i - 1��λ��
	--i;
	while (--i)
	{
		pre = pre->next;
	}
	LinkListNode* newNode = new LinkListNode(x);
	pre->next = newNode->next;
	pre->next = newNode;
	Head->num++;
	return;
}
