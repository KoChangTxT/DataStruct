#include <iostream>
#include <vector>
#include "List.h"
#include <time.h>
using namespace std;




int main()
{
//线性表调试
#pragma region ListTest
		LinearList* mylist = initLinearList();
	if (mylist)
	{
		cout << "线性表创建成功" << endl;
	}
	else cout << "线性表创建失败" << endl;

	srand(static_cast<unsigned int>(time(nullptr))); 随机数种子

		for (int i = 0; i < 10; i++)
		{
			InsertLinearList(mylist, i + 1, rand() % 10);
		}

	for (auto n : mylist->v)
	{
		cout << n << "   ";
	}

#pragma endregion

	system("pause");

	return 0;
}