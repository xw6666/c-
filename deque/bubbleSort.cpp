//#include <iostream>
//using namespace std;
//#include <string>
//
//class Person
//{
//public:
//	string name;
//	int sex;
//	int age;
//};
//
////使用回调函数实现一个通用的冒泡排序
//
//template <class T>
//void print(T a, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//
//int cmpByInt(const void* e1, const void* e2)
//{
//	return (*((int*)e1) - *((int*)e2));
//}
//
//void swap(char* e1, char* e2, size_t width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char temp = *(e1 + i);
//		*(e1 + i) = *(e2 + i);
//		*(e2 + i) = temp;
//	}
//}
//
//void bubbleSort(void* based, size_t num, size_t width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)based + (j * width), (char*)based + ((j + 1) * width)) > 0)
//			{
//				swap((char*)based + j * width, (char*)based + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int a[4] = { 4,2,1,3 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	print(a, sz);
//	bubbleSort(a, sz, sizeof(a[0]), cmpByInt);
//	print(a, sz);
//
//	return 0;
//}