#include <iostream>
#include <string>
using namespace std;

//函数模板
//template <class T>
//
//void mySowp(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	//两种方式使用函数模板
//	//1.自动类型推导
//	//mySowp(a, b);
//
//	//2.显示指定类型
//	mySowp<int>(a, b);
//	cout << "a = " << a << ", b = " << b << endl;
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


//函数模板案例
//template <typename T>
//void slectSort(T& arr, int size)
//{
//	//选择排序
//	for (int i = 0; i < size - 1; i++)
//	{
//		int j = i;
//		while (j >= 0 && arr[j] > arr[i + 1])
//		{
//			j--;
//		}
//
//		//从i搬运到j + 1开始移动
//		int temp = arr[i + 1];
//		int k = i;
//		while (k >= j + 1)
//		{
//			arr[k + 1] = arr[k];
//			k--;
//		}
//
//		arr[j + 1] = temp;
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	slectSort(arr, 9);
//
//	char str[] = "gfihowgbs";
//	slectSort(str, 9);
//
//	return 0;
//}