#include "Array.h"

template <class T>
Array<T>::Array()
{
	space = new T[MAX];
	capacity = MAX;
	valSize = 0;
}

//template <class T>
//Array<T>::Array(Array<T>& arr)
//{
//	for (int i = 0; i < arr.valSize; i++)
//	{
//		if (this->capacity == this->valSize)
//		{
//			expan();
//		}
//		this->space[i] = arr.space[i];
//	}
//}

//template <class T>
//void Array<T>::expan()
//{
//	//�����¿ռ�
//	T* newSpace = new T[capacity * 2];
//	//����������
//	for (int i = 0; i < (this->valSize); i++)
//	{
//		newSpace[i] = space[i];
//	}
//	//ɾ��ԭ�пռ�
//	T* temp = space;
//	space = newSpace;
//	delete temp;
//	//���¸�������
//	capacity *= 2;
//}

//template <class T>
//void Array<T>::pushBack(T val)
//{
//	//���ж������Ƿ�����
//	if (this->capacity == this->valSize)
//	{
//		expan();
//	}
//	//����Ԫ��
//	this->space[valSize++] = val;
//}