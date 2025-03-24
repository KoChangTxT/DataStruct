#include <iostream>
#include <vector>
#include "List.h"
#include"ChainList.h"
#include "CycledLinkList.h"
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
	InsertLinkList(pHead, 8, 3);	//2 5 8 3 4
	//Delete_X_LinkList(pHead, 8);
	//Delete_I_LinkList(pHead, 1);
	//cout<<"下标为："<<Research_X_LinkList(pHead, 8)<<endl;
	cout << "查找值为：" << Research_I_LinkList(pHead, 3) << endl;


	PrintList(pHead);
}

void CycledListTest()
{
	CycleLinkListHead* Head = initCycledLinkList();
	InsertCycledList(Head, 2, 1);
	InsertCycledList(Head, 3, 1);
	InsertCycledList(Head, 4, -1);
	InsertCycledList(Head, 5, -1);
	InsertCycledList(Head, 6, 3); // 3 2 6 4 5
	Delete_X_CycledList(Head, 5);	// 3 2 6 4
	Delete_I_CycleList(Head, 4);
	printCycleList(Head);
	
}

int main()
{

	CycledListTest();


	system("pause");

	return 0;
}