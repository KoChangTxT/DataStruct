#include "List.h"



//1.���Ա�ĳ�ʼ��
LinearList* initLinearList()
{
	LinearList* list = new LinearList;
	list->num = 0;

	list->v = vector<int>(Maxsize, 0);
	return list;
}

//2.���������Ա��е�i(1<i<maxsize)��λ�ò���x
bool InsertLinearList(LinearList* list, int i, int x)
{
	//1.����
	if (!list || list->num == Maxsize || i < 0 ||i > list->num + 1) return false;


	//2.���±�i-1��ʼԪ��ȫ�������ƶ�һλ
	for (int j = list->num - 1; j >= i - 1; j--)
	{
		list->v[j + 1] = list->v[j];
	}
	//3.��i-1������x
	list->v[i - 1] = x;

	//4.Ԫ�ظ�����1
	list->num++;

	return true;
}