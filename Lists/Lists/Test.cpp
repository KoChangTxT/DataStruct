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
	//���Ա����
	LinearList* mylist = initLinearList();
	if (mylist)
	{
		cout << "���Ա����ɹ�" << endl;
	}
	else cout << "���Ա���ʧ��" << endl;

	srand(static_cast<unsigned int>(time(nullptr))); //���������

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
	//�������
	LinkListHead* pHead = InitLinkList();
	
	InsertLinkList(pHead, 2, 1);
	InsertLinkList(pHead, 3, -1);
	InsertLinkList(pHead, 4, -1);
	InsertLinkList(pHead, 5, 2);
	InsertLinkList(pHead, 8, 3);	//2 5 8 3 4
	//Delete_X_LinkList(pHead, 8);
	//Delete_I_LinkList(pHead, 1);
	//cout<<"�±�Ϊ��"<<Research_X_LinkList(pHead, 8)<<endl;
	cout << "����ֵΪ��" << Research_I_LinkList(pHead, 3) << endl;


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