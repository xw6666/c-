#include <iostream>
#include <string>
using namespace std;

//����ģ��
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
//	//���ַ�ʽʹ�ú���ģ��
//	//1.�Զ������Ƶ�
//	//mySowp(a, b);
//
//	//2.��ʾָ������
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


//����ģ�尸��
//template <typename T>
//void slectSort(T& arr, int size)
//{
//	//ѡ������
//	for (int i = 0; i < size - 1; i++)
//	{
//		int j = i;
//		while (j >= 0 && arr[j] > arr[i + 1])
//		{
//			j--;
//		}
//
//		//��i���˵�j + 1��ʼ�ƶ�
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