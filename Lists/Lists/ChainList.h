#pragma once

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

*/

typedef struct  LLNode  //�ڵ�ṹ(��ͷ�ڵ�������)
{
	int val;			//�ڵ�ֵ
	LinkListNode* next;		//��һ���ڵ�

	LLNode(int num, LinkListNode* Node = nullptr) :val(num), next(Node) {};

}LinkListNode;

typedef struct			//ά��һ��ͷ�ڵ�
{
	int num;			//�ܽ����������������ͷ�ڵ㣩
	LinkListNode* head; //�����head�൱����Ԫ�ڵ㼴���ͷ�ڵ����һ���ڵ�
}LinkListHead;

//1.�����ʼ��   - ���е����� - ���е�ͷ�ڵ�
LinkListHead* InitLinkList();

//2.���������Ա��е�i(1��i)��λ�ò���x - ��i������ͷ��(1)��β��(-1)
void InsertLiniList(LinkListHead* Head, int x,int i);
