#include <iostream>
#include <vector>
#include "List.h"
using namespace std;




int main()
{
	//线性表调试
	LinearList* mylist = initLinearList();
	if (mylist)
	{
		cout << "线性表创建成功"<<endl;
	}
	else cout << "线性表创建失败" << endl;

	
	if (InsertLinearList(mylist, 1, 2))
	{
		cout << "插入成功" << endl;
	}
	else
	cout << "插入失败" << endl;

	if (InsertLinearList(mylist, 2, 3))
	{
		cout << "插入成功" << endl;
	}
	else
		cout << "插入失败" << endl;

	if (InsertLinearList(mylist, 3, 4))
	{
		cout << "插入成功" << endl;
	}
	else
		cout << "插入失败" << endl;

	Delete_X_LinearList(mylist, 3);

	for (auto n:mylist->v)
	{
		cout << n << "   ";
	}

	system("pause");

	return 0;
}