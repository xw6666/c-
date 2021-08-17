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


//普通函数与模板函数的区别
//1.普通函数可以发生隐式类型转换
//2.函数模板 用自动类型推导，不可以发生隐式类型转换
//3.函数模板 用显示指定类型，可以发生隐式类型转换

//普通函数
//int add1(int a, int b)
//{
//	return a + b;
//}
//
////模板函数
//template <class T>
//T add2(T a, T b)
//{
//	return a + b;
//}
//
//int main()
//{
//	float a = 1.0f;
//	int b = 2;
//	cout << add1(a, b) << endl;
//	//cout << add2(a, b) << endl;  //- err
//
//	cout << add2<int>(a, b) << endl;
//
//	return 0;
//}



//普通函数和函数模板的调用规则
//1.如果普通函数和函数模板都可以调用，优先调用普通函数
//2.可以通过空模板参数列表强制调用函数模板
//3.函数模板也可以发生函数重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板

//void print(int a, int b)
//{
//	cout << "普通函数调用" << endl;
//}
//
//template <class T>
//void print(T a, T b)
//{
//	cout << "函数模板调用" << endl;
//}
//
//template <class T>
//void print(T a, T b, T c)
//{
//	cout << "重载函数模板调用" << endl;
//}
//
//void test1()
//{
//	print(5, 6);  //普通函数调用
//	print(1.0, 2.0); //函数模板调用
//	print(1, 2, 3); 
//	print<>(1, 2);  //通过空模板参数列表强制调用函数模板
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


//函数模板缺陷 - 比如当传入自定义数据进行比较时，是不能直接比较的
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	//bool operator==(Person& p1);
//
//
//	int m_Age;
//	string m_Name;
//};

//bool operator==(Person& p1, Person& p2)
//{
//	if (p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//
//	return false;
//}
//bool Person::operator==(Person& p1)
//{
//	if (p1.m_Age == this->m_Age)
//	{
//		return true;
//	}
//
//	return false;
//}

//template <class T>
//bool myCompare(T& a, T& b)
//{
//	return a == b;
//}
//
////利用具体化Person版本实现代码，具体化
//template<> bool myCompare(Person& a, Person& b)
//{
//	if (a.m_Age == b.m_Age)
//	{
//		return true;
//	}
//
//	return false;
//}
//
//int main()
//{
//	//int a = 1;
//	//int b = 5;
//	//int ret = myCompare(a, b);
//	//if (ret)
//	//{
//	//	cout << "a与b相等" << endl;
//	//}
//	//else
//	//{
//	//	cout << "a与b不相等" << endl;
//	//}
//
//	Person p1("张三", 20);
//	Person p2("李四", 20);
//	int ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "p1与p2相等" << endl;
//	}
//	else
//	{
//		cout << "p1与p2不相等" << endl;
//	}
//
//
//	return 0;
//}