#include "Stack.h"

void SeqStackTest()
{
	SeqStackNode* ST = InitSeqStack();

	PushSeqStack(ST, 2);
	PushSeqStack(ST, 3);
	PushSeqStack(ST, 6);
	PushSeqStack(ST, 7); 

	cout << "栈顶元素为："<<GetTopEle(ST) << endl;

	PopSeqStack(ST);
	cout << "栈顶元素为：" << GetTopEle(ST) << endl;
}

int main()
{
	SeqStackTest();

	system("pause");
	return 0;
}