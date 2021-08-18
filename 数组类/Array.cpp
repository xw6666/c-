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
//	//开辟新空间
//	T* newSpace = new T[capacity * 2];
//	//拷贝旧数据
//	for (int i = 0; i < (this->valSize); i++)
//	{
//		newSpace[i] = space[i];
//	}
//	//删除原有空间
//	T* temp = space;
//	space = newSpace;
//	delete temp;
//	//更新各种数据
//	capacity *= 2;
//}

//template <class T>
//void Array<T>::pushBack(T val)
//{
//	//先判断容量是否满了
//	if (this->capacity == this->valSize)
//	{
//		expan();
//	}
//	//放入元素
//	this->space[valSize++] = val;
//}