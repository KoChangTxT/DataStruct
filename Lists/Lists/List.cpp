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

//3.ɾ��ɾ�����Ա���ֵΪx��Ԫ��
bool Delete_X_LinearList(LinearList* list, int x)
{
	//1������
	if (!list || x == 0) return true;

	//2���ҵ�ֵΪx��Ԫ�أ������串��
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

	cout << "ɾ��ʧ�ܣ�û��ֵΪ��" << x << " ��Ԫ��" << endl;
	return false;
}


//4��ɾ�����Ա����±�Ϊiλ�õ�Ԫ��
bool Delete_I_LinearList(LinearList* list, int i)
{
	//����
	if (!list || i > list->num - 1 || i <= 0)
	{
		cout << "û���±�Ϊ" << i << "��Ԫ��" << endl;
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
	

	cout << "û���±�Ϊ" << i << "��Ԫ��" << endl;
	return false;
}

////5.�飺�������Ա���ֵΪx��Ԫ�ز������±�ֵ
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

//6.�飺�������Ա��е�i��λ�õ�Ԫ�ز�����Ԫ��ֵ
int Research_I_LinearList(LinearList* list, int i)
{
	if (i < 0 || i > list->num - 1)
	{
		
		return -1;
	}

	return list->v[i];
}

//7.�ģ������Ա���ֵΪx�ĵ�һ��Ԫ�ص�ֵ��Ϊy
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
