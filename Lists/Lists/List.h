#pragma once
#include <iostream>
#include <vector>
using namespace std;

/*
		1.���Ա�  �涨��������int����
			1.���Ա�ĳ�ʼ��
			2.���������Ա��е�i(1<i<maxsize)��λ�ò���x
			3.ɾ��ɾ�����Ա���ֵΪx��Ԫ��
			4.ɾ��ɾ�����Ա��е�i��λ�õ�Ԫ��
			5.�飺�������Ա���ֵΪx��Ԫ��
			6.�飺�������Ա��е�i��λ�õ�Ԫ��
			7.�ģ������Ա���ֵΪx�ĵ�һ��Ԫ�ص�ֵ��Ϊy

*/

const int Maxsize = 10;

typedef struct		//���Ա��ά���ṹ
{
	int num;		//��ʾ���Ա��е�ǰԪ�صĸ���		
	vector<int> v;	//�洢���ݵ����壬��С��maxSize		
							
}LinearList;



//1.���Ա�ĳ�ʼ��
LinearList* initLinearList();


//2.���������Ա��е�i(1<i<maxsize)��λ�ò���x
bool InsertLinearList(LinearList* list, int i, int x);
