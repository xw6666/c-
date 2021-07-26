#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int* test()
{
	//利用new关键字 可以将数据开辟到堆区
	//new返回的是该数据类型的指针
	int* p = new int(10);

	return p;
}

//堆区开辟数组
int* test1()
{
	int* p = new int[10];
	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	return p;
}

string* test2()
{
	string* str = new string;
	*str = "12345678901234567890";
	return str;
}

int main()
{
	/*int* p = test();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;*/
	//释放堆区数据利用delete
	//delete p;
	//内存已经被释放，再次访问则为非法操作
	//cout << *p << endl;

	//int* nums = test1();
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *(nums + i) << ' ';
	//}

	//delete[] nums;
	//cout << endl;

	//字符串类型解应用会打印整个字符串
	string* str = test2();
	cout << *str << endl;
	delete str;
	system("pause");
}