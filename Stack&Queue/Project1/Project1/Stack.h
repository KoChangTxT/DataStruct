#pragma once
#include <iostream>
#include <vector>
using namespace std;

/*
	˳��ջ		�涨��������int����
				
		1.��ʼ��ջ
		2.���
		3.��ջ
		4.ȡջ��Ԫ��
		5.�ж�ջ��
		6.���ջ
		
*/

const int MaxSize = 100;

typedef struct  
{
	int top;
	vector<int> stack;

}SeqStackNode;

//1����ʼ��ջ
SeqStackNode* InitSeqStack();

//2����ջ
void PushSeqStack(SeqStackNode* ST, int x);

//��ջ
void PopSeqStack(SeqStackNode* ST);

//4.ȡջ��Ԫ��
int GetTopEle(SeqStackNode* ST);

//5.�ж�ջ��
bool IsSeqStackEmpty(SeqStackNode* ST);

//6.���ջ
void ClearSeqStack(SeqStackNode* ST);
