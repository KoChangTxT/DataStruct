#include <iostream>
#include <vector>
#include "List.h"
using namespace std;




int main()
{
	//���Ա����
	LinearList* mylist = initLinearList();
	if (mylist)
	{
		cout << "���Ա����ɹ�"<<endl;
	}
	else cout << "���Ա���ʧ��" << endl;

	
	if (InsertLinearList(mylist, 1, 2))
	{
		cout << "����ɹ�" << endl;
	}
	else
	cout << "����ʧ��" << endl;

	if (InsertLinearList(mylist, 2, 2))
	{
		cout << "����ɹ�" << endl;
	}
	else
		cout << "����ʧ��" << endl;

	if (InsertLinearList(mylist, 3, 2))
	{
		cout << "����ɹ�" << endl;
	}
	else
		cout << "����ʧ��" << endl;

	for (auto n:mylist->v)
	{
		cout << n << "   ";
	}

	system("pause");

	return 0;
}