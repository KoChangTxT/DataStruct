#include <iostream>
#include <vector>
#include "List.h"
#include <time.h>
using namespace std;




int main()
{
//���Ա����
#pragma region ListTest
		LinearList* mylist = initLinearList();
	if (mylist)
	{
		cout << "���Ա����ɹ�" << endl;
	}
	else cout << "���Ա���ʧ��" << endl;

	srand(static_cast<unsigned int>(time(nullptr))); ���������

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