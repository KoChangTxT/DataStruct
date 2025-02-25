#pragma once
#include <iostream>
#include <vector>
using namespace std;

/*
		1.线性表  规定数据类型int类型
			1.线性表的初始化
			2.增：向线性表中第i(1<i<maxsize)个位置插入x
			3.删：删除线性表中值为x的元素
			4.删：删除线性表中第i个位置的元素
			5.查：查找线性表中值为x的元素
			6.查：查找线性表中第i个位置的元素
			7.改：将线性表中值为x的第一个元素的值改为y

*/

const int Maxsize = 10;

typedef struct		//线性表的维护结构
{
	int num;		//表示线性表中当前元素的个数		
	vector<int> v;	//存储数据的主体，大小是maxSize		
							
}LinearList;



//1.线性表的初始化
LinearList* initLinearList();


//2.增：向线性表中第i(1<i<maxsize)个位置插入x
bool InsertLinearList(LinearList* list, int i, int x);
