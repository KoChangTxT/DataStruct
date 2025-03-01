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

//3.删：删除线性表中值为x的元素
bool Delete_X_LinearList(LinearList* list, int x)
{
	//1、判误
	if (!list || x == 0) return true;

	//2、找到值为x的元素，并将其覆盖
	for (int i = 0;i <= list->num - 1;i++)
	{
		if (list->v[i] == x)
		{
			for (int j = i;j <= list->num - 1;j++)
			{
				list->v[j] = list->v[j + 1];
			}
			list->num--;
			return true;
		}
	}

	cout << "删除失败，没有值为：" << x << " 的元素" << endl;
	return false;
}


//4、删除线性表中下标为i位置的元素
bool Delete_I_LinearList(LinearList* list, int i)
{
	//判误
	if (!list || i > list->num - 1 || i <= 0)
	{
		cout << "没有下标为" << i << "的元素" << endl;
		return false;
	}
	else
	{
		for (int j = i; j <= list->num - 1; j++)
		{
			list->v[j] = list->v[j + 1];
		}
		list->num--;
		return true;
	}
	

	cout << "没有下标为" << i << "的元素" << endl;
	return false;
}

////5.查：查找线性表中值为x的元素并返回下标值
int Research_X_LinearList(LinearList* list, int x)
{
	for (int i = 0;i <= list->num - 1;i++)
	{
		if (list->v[i] == x)
		{
			return i;
		}
	}

	
	return -1;
}

//6.查：查找线性表中第i个位置的元素并返回元素值
int Research_I_LinearList(LinearList* list, int i)
{
	if (i < 0 || i > list->num - 1)
	{
		
		return -1;
	}

	return list->v[i];
}

//7.改：将线性表中值为x的第一个元素的值改为y
bool Modify_X_LiearList(LinearList* list, int x, int y)
{
	if (!list)
	{
		return false;
	}

	for (int i = 0;i <= list->num - 1;i++)
	{
		if (list->v[i] == x)
		{
			list->v[i] = y;
			return true;
		}
	}

	return false;
}
