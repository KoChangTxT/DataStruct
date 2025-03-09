#include <iostream>
#include <vector>
#include "List.h"
#include"ChainList.h"
#include <time.h>
using namespace std;


void ListTest()
{
#pragma region ListTest
	//线性表调试
	LinearList* mylist = initLinearList();
	if (mylist)
	{
		cout << "线性表创建成功" << endl;
	}
	else cout << "线性表创建失败" << endl;

	srand(static_cast<unsigned int>(time(nullptr))); //随机数种子

	for (int i = 0; i < 10; i++)
	{
		InsertLinearList(mylist, i + 1, rand() % 10);
	}

	for (auto n : mylist->v)
	{
		cout << n << "   ";
	}

#pragma endregion
}

void LinkListTest()
{
	//链表测试
	LinkListHead* pHead = InitLinkList();
	
	InsertLinkList(pHead, 2, 1);
	InsertLinkList(pHead, 3, -1);
	InsertLinkList(pHead, 4, -1);
	InsertLinkList(pHead, 5, 2);
	InsertLinkList(pHead, 8, 3);
	Delete_X_LinkList(pHead, 8);
	Delete_I_LinkList(pHead, 1);


	LinkListNode* node = pHead->head;
	while (node)
	{
		cout << node->val << " ";
		node = node->next;
	}
	cout << endl;
	cout << pHead->num << endl;
}

int main()
{

	LinkListTest();

	system("pause");

	return 0;
}