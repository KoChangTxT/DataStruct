#pragma once
#include<iostream>
using namespace std;


/*
		1.ѭ��������  �涨��������int����
			1.ѭ��������ĳ�ʼ��
			2.������ѭ���������е�i(1��i)��λ�ò���x - ��i������ͷ��(1)��β��(-1)
			3.ɾ��ɾ��ѭ����������ֵΪx��Ԫ��
			4.ɾ��ɾ��ѭ���������е�i��λ�õ�Ԫ��
			5.�飺����ѭ����������ֵΪx��Ԫ�ز������±�ֵ
			6.�飺����ѭ���������е�i��λ�õ�Ԫ�ز�����Ԫ��ֵ
			7.�ģ���������ֵΪx�ĵ�һ��Ԫ�ص�ֵ��Ϊy
			8.��ӡ��������������Ԫ�ش�ӡ���
			9.�����������Ԫ��

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

//1.ѭ��������ĳ�ʼ��
CycleLinkListHead* initCycledLinkList();

//2.������ѭ���������е�i(1��i)��λ�ò���x - ��i������ͷ��(1)��β��(-1)
void InsertCycledList(CycleLinkListHead* Head,int x,int i);

//3.ɾ��ɾ��ѭ����������ֵΪx��Ԫ��
void Delete_X_CycledList(CycleLinkListHead* Head, int x);

//4��ɾ��ɾ��ѭ���������е�i��λ�õ�Ԫ��
void Delete_I_CycleList(CycleLinkListHead* Head, int i);

//5���飺����ѭ����������ֵΪx��Ԫ�ز������±�ֵ
int Research_X_CycledList(CycleLinkListHead* Head, int x);

//6���飺����ѭ���������е�i��λ�õ�Ԫ�ز�����Ԫ��ֵ
int Research_I_CycledList(CycleLinkListHead* Head, int i);

//7.�ģ���������ֵΪx�ĵ�һ��Ԫ�ص�ֵ��Ϊy
void Modify_X_CycledList(CycleLinkListHead* Head, int x,int y);

//8.��ӡ��������������Ԫ�ش�ӡ���
void printCycleList(CycleLinkListHead* Head);

//9�������������Ԫ��
void DeleteCycledList(CycleLinkListHead* Head);
