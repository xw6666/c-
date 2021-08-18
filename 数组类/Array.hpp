/* ����������ʵ��һ��ͨ�õ������� ��Ҫ�����£�
* ���Զ��������������Լ��Զ����������͵����ݽ��д洢
* �������е����ݴ洢������
* �ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
* �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
* ����ͨ���±�ķ�ʽ���������е�Ԫ��
* ���Ի�ȡ�����е�ǰԪ�صĸ����Լ����������
*/
#pragma once
#include <iostream>
using namespace std;
#define MAX 4
template <class T> //��ʾ���ͨ������
class Array
{
public:
	Array(); //Ĭ�Ϲ���
	Array(Array& arr);  //��������
	void operator=(Array& arr);  //�Ⱥ�����
	void pushBack(T val);  //ͷ�庯��
	void popBack();   //βɾ����
	void expan();   //���ݺ���
	int showCapacity();   //��ʾ��ǰ���� 
	int showValSize();  //��ʾԪ�ظ���
	~Array();   //��������
	T* space;
private:
	int capacity;
	int valSize;
};

template <class T>
Array<T>::Array()
{
	space = new T[MAX];
	capacity = MAX;
	valSize = 0;
}

template <class T>
Array<T>::Array(Array<T>& arr)
{
	//��ʼ��
	space = new T[MAX];
	capacity = MAX;
	valSize = 0;
	//����
	for (int i = 0; i < arr.valSize; i++)
	{
		if (this->capacity == this->valSize)
		{
			expan();
		}
		this->space[i] = arr.space[i];
	}
	//���¸��ֲ���
	this->valSize = arr.showValSize();
}

template <class T>
void Array<T>::expan()
{
	//�����¿ռ�
	T* newSpace = new T[capacity * 2];
	//����������
	for (int i = 0; i < (this->valSize); i++)
	{
		newSpace[i] = space[i];
	}
	//ɾ��ԭ�пռ�
	T* temp = space;
	space = newSpace;
	delete temp;
	//���¸�������
	capacity *= 2;
}

template <class T>
void Array<T>::pushBack(T val)
{
	//���ж������Ƿ�����
	if (this->capacity == this->valSize)
	{
		expan();
	}
	//����Ԫ��
	this->space[valSize++] = val;
}

template <class T>
void Array<T>::popBack()
{
	if (this->valSize > 0)
	{
		this->space[valSize - 1] = 0;
		valSize--;
	}
}

template <class T>
int Array<T>::showCapacity()
{
	return this->capacity;
}

template <class T>
int Array<T>::showValSize()
{
	return this->valSize;
}

template <class T>
void Array<T>::operator=(Array& arr)
{
	//���
	this->capacity = arr.showCapacity();
	this->valSize = arr.showValSize();
	delete space;
	space = new T[capacity];
	//����
	for (int i = 0; i < this->valSize; i++)
	{
		this->space[i] = arr.space[i];
	}
}

template <class T>
Array<T>::~Array()
{
	if (space != NULL)
	{
		delete space;
		space = NULL;
		this->valSize = 0;
		this->capacity = 0;
	}
}
