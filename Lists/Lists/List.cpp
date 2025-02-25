#include "List.h"



//1.线性表的初始化
LinearList* initLinearList()
{
	LinearList* list = new LinearList;
	list->num = 0;

	list->v = vector<int>(Maxsize, 0);
	return list;
}

//2.增：向线性表中第i(1<i<maxsize)个位置插入x
bool InsertLinearList(LinearList* list, int i, int x)
{
	//1.判误
	if (!list || list->num == Maxsize || i < 0 ||i > list->num + 1) return false;


	//2.从下标i-1开始元素全部往后移动一位
	for (int j = list->num - 1; j >= i - 1; j--)
	{
		list->v[j + 1] = list->v[j];
	}
	//3.在i-1处插入x
	list->v[i - 1] = x;

	//4.元素个数加1
	list->num++;

	return true;
}