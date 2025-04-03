#include "Stack.h"

SeqStackNode* InitSeqStack()
{
	SeqStackNode* ST = new SeqStackNode;
	ST->top = 0;
	ST->stack = vector<int>(MaxSize, 0);
	return ST;
}

void PushSeqStack(SeqStackNode* ST, int x)
{
	if (!ST || ST->top == MaxSize) return;
	ST->stack[ST->top++] = x;
}

void PopSeqStack(SeqStackNode* ST)
{
	if (!ST || ST->top == 0) return;
	ST->top--;
}

int GetTopEle(SeqStackNode* ST)
{
	if (!ST || ST->top == 0) return -114514;

	return ST->stack[ST->top - 1];
}

bool IsSeqStackEmpty(SeqStackNode* ST)
{
	return !ST ? true : !ST->top ? true : false;
}

void ClearSeqStack(SeqStackNode* ST)
{
	ST->top = 0;
}
