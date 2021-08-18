/* 案例描述：实现一个通用的数组类 ，要求如下：
* 可以对内置数据类型以及自定义数据类型的数据进行存储
* 将数组中的数据存储到堆区
* 提供对应的拷贝构造函数以及operator=防止浅拷贝问题
* 提供尾插法和尾删法对数组中的数据进行增加和删除
* 可以通过下标的方式访问数组中的元素
* 可以获取数组中当前元素的个数以及数组的容量
*/
#pragma once
#include <iostream>
using namespace std;
#define MAX 4
template <class T> //表示这个通用数据
class Array
{
public:
	Array(); //默认构造
	Array(Array& arr);  //拷贝构造
	void operator=(Array& arr);  //等号重载
	void pushBack(T val);  //头插函数
	void popBack();   //尾删函数
	void expan();   //扩容函数
	int showCapacity();   //显示当前容量 
	int showValSize();  //显示元素个数
	~Array();   //析构函数
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
	//初始化
	space = new T[MAX];
	capacity = MAX;
	valSize = 0;
	//拷贝
	for (int i = 0; i < arr.valSize; i++)
	{
		if (this->capacity == this->valSize)
		{
			expan();
		}
		this->space[i] = arr.space[i];
	}
	//更新各种参数
	this->valSize = arr.showValSize();
}

template <class T>
void Array<T>::expan()
{
	//开辟新空间
	T* newSpace = new T[capacity * 2];
	//拷贝旧数据
	for (int i = 0; i < (this->valSize); i++)
	{
		newSpace[i] = space[i];
	}
	//删除原有空间
	T* temp = space;
	space = newSpace;
	delete temp;
	//更新各种数据
	capacity *= 2;
}

template <class T>
void Array<T>::pushBack(T val)
{
	//先判断容量是否满了
	if (this->capacity == this->valSize)
	{
		expan();
	}
	//放入元素
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
	//深拷贝
	this->capacity = arr.showCapacity();
	this->valSize = arr.showValSize();
	delete space;
	space = new T[capacity];
	//拷贝
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
