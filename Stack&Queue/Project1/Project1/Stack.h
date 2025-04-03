#pragma once
#include <iostream>
#include <vector>
using namespace std;

/*
	顺序栈		规定数据类型int类型
				
		1.初始化栈
		2.入横
		3.出栈
		4.取栈顶元素
		5.判断栈空
		6.清空栈
		
*/

const int MaxSize = 100;

typedef struct  
{
	int top;
	vector<int> stack;

}SeqStackNode;

//1、初始化栈
SeqStackNode* InitSeqStack();

//2、入栈
void PushSeqStack(SeqStackNode* ST, int x);

//出栈
void PopSeqStack(SeqStackNode* ST);

//4.取栈顶元素
int GetTopEle(SeqStackNode* ST);

//5.判断栈空
bool IsSeqStackEmpty(SeqStackNode* ST);

//6.清空栈
void ClearSeqStack(SeqStackNode* ST);
