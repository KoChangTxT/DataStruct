#pragma once
#include <iostream>
using namespace std;

/*
		1.链表  规定数据类型int类型
			1.线性表的初始化
			2.增：向线性表中第i(1≤i)个位置插入x - 用i来区分头插(1)和尾插(-1)
			3.删：删除线性表中值为x的元素
			4.删：删除线性表中第i个位置的元素
			5.查：查找线性表中值为x的元素并返回下标值
			6.查：查找线性表中第i个位置的元素并返回元素值
			7.改：将链表中值为x的第一个元素的值改为y
			8.打印：将链表中所有元素打印输出
			9.快慢指针，用O(N)的时间复杂度找到链表的中间节点
			10.清楚链表所有元素

*/

typedef struct  LLNode  //节点结构(与头节点做区分)
{
	int val;			//节点值
	LLNode* next;		//下一个节点

	LLNode(int num, LLNode* Node = nullptr) :val(num), next(Node) {};

}LinkListNode;

typedef struct			//维护一个头节点
{
	int num;			//总结点个数（不包括这个头节点）
	LinkListNode* head; //这里的head相当于首元节点即这个头节点的下一个节点
}LinkListHead;

//1.链表初始化   - 所有的链表 - 所有的头节点
LinkListHead* InitLinkList();

//2.增：向线性表中第i(1≤i)个位置插入x - 用i来区分头插(1)和尾插(-1)
void InsertLinkList(LinkListHead* Head, int x,int i);

//3.删：删除线性表中值为x的元素
void Delete_X_LinkList(LinkListHead* Head, int x);

//4.删：删除线性表中第i个位置的元素
void Delete_I_LinkList(LinkListHead* Head, int i);

//5.查：查找线性表中值为x的元素并返回下标值
int Research_X_LinkList(LinkListHead* Head, int x);

//6.查：查找线性表中第i个位置的元素并返回元素值
int Research_I_LinkList(LinkListHead* Head, int i);

//7.改：将链表中值为x的第一个元素的值改为y
void Modify_X_LinkList(LinkListHead* Head, int x,int y);

//8.打印：将链表中所有元素打印输出
void PrintList(LinkListHead* Head);

//9.快慢指针，用O(N)的时间复杂度找到链表的中间节点
LinkListNode* FindMiddle(LinkListHead* Head);

//10.清楚链表所有元素
bool DeleteLinkList(LinkListHead* Head);
