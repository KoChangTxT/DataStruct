#pragma once
#include<iostream>
using namespace std;


/*
		1.循环单链表  规定数据类型int类型
			1.循环单链表的初始化
			2.增：向循环单链表中第i(1≤i)个位置插入x - 用i来区分头插(1)和尾插(-1)
			3.删：删除循环单链表中值为x的元素
			4.删：删除循环单链表中第i个位置的元素
			5.查：查找循环单链表中值为x的元素并返回下标值
			6.查：查找循环单链表中第i个位置的元素并返回元素值
			7.改：将链表中值为x的第一个元素的值改为y
			8.打印：将链表中所有元素打印输出
			9.快慢指针，用O(N)的时间复杂度找到链表的中间节点
			10.清楚链表所有元素

*/


typedef struct CLLNode 
{
	int val;
	CLLNode* next;

	CLLNode(int num = 0, CLLNode* node = nullptr) :val(num), next(node) {};

}CycleLinkListNode;

typedef struct CLLHead 
{
	int num;
	CLLNode* head;
}CycleLinkListHead;

//1.循环单链表的初始化
CycleLinkListHead* initCycledLinkList();

//2.增：向循环单链表中第i(1≤i)个位置插入x - 用i来区分头插(1)和尾插(-1)
void InsertCycledList(CycleLinkListHead* Head,int x,int i);

//3.删：删除循环单链表中值为x的元素
void Delete_X_CycledList(CycleLinkListHead* Head, int x);

//删：删除循环单链表中第i个位置的元素
void Delete_I_CycleList(CycleLinkListHead* Head, int i);

//8.打印：将链表中所有元素打印输出
void printCycleList(CycleLinkListHead* Head);
