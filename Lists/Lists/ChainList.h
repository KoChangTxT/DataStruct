#pragma once
#include <iostream>
using namespace std;

/*
		1.����  �涨��������int����
			1.���Ա�ĳ�ʼ��
			2.���������Ա��е�i(1��i)��λ�ò���x - ��i������ͷ��(1)��β��(-1)
			3.ɾ��ɾ�����Ա���ֵΪx��Ԫ��
			4.ɾ��ɾ�����Ա��е�i��λ�õ�Ԫ��
			5.�飺�������Ա���ֵΪx��Ԫ�ز������±�ֵ
			6.�飺�������Ա��е�i��λ�õ�Ԫ�ز�����Ԫ��ֵ
			7.�ģ���������ֵΪx�ĵ�һ��Ԫ�ص�ֵ��Ϊy
			8.��ӡ��������������Ԫ�ش�ӡ���
			9.����ָ�룬��O(N)��ʱ�临�Ӷ��ҵ�������м�ڵ�
			10.�����������Ԫ��

*/

typedef struct  LLNode  //�ڵ�ṹ(��ͷ�ڵ�������)
{
	int val;			//�ڵ�ֵ
	LLNode* next;		//��һ���ڵ�

	LLNode(int num, LLNode* Node = nullptr) :val(num), next(Node) {};

}LinkListNode;

typedef struct			//ά��һ��ͷ�ڵ�
{
	int num;			//�ܽ����������������ͷ�ڵ㣩
	LinkListNode* head; //�����head�൱����Ԫ�ڵ㼴���ͷ�ڵ����һ���ڵ�
}LinkListHead;

//1.�����ʼ��   - ���е����� - ���е�ͷ�ڵ�
LinkListHead* InitLinkList();

//2.���������Ա��е�i(1��i)��λ�ò���x - ��i������ͷ��(1)��β��(-1)
void InsertLinkList(LinkListHead* Head, int x,int i);

//3.ɾ��ɾ�����Ա���ֵΪx��Ԫ��
void Delete_X_LinkList(LinkListHead* Head, int x);

//4.ɾ��ɾ�����Ա��е�i��λ�õ�Ԫ��
void Delete_I_LinkList(LinkListHead* Head, int i);

//5.�飺�������Ա���ֵΪx��Ԫ�ز������±�ֵ
int Research_X_LinkList(LinkListHead* Head, int x);

//6.�飺�������Ա��е�i��λ�õ�Ԫ�ز�����Ԫ��ֵ
int Research_I_LinkList(LinkListHead* Head, int i);

//7.�ģ���������ֵΪx�ĵ�һ��Ԫ�ص�ֵ��Ϊy
void Modify_X_LinkList(LinkListHead* Head, int x,int y);

//8.��ӡ��������������Ԫ�ش�ӡ���
void PrintList(LinkListHead* Head);

//9.����ָ�룬��O(N)��ʱ�临�Ӷ��ҵ�������м�ڵ�
LinkListNode* FindMiddle(LinkListHead* Head);

//10.�����������Ԫ��
bool DeleteLinkList(LinkListHead* Head);
