#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//函数的默认参数
//如果自己传入了bc，那么用自己的，如果不传bc，用默认值
//  返回值类型 函数名（形参 = 默认值）{}

//从b开始有的默认参数，那么后面的形参都需要给一个默认值
//如果这下面c没有默认值直接报错
//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//
////声明给了默认参数，实现就不能有默认参数 - 声明和实现只能有一个有默认参数(防止重定义)
//int func2(int a, int b);
//
//int func2(int a = 10, int b = 20)
//{
//	return a + b;
//}
//
//
//int main()
//{
//	cout << func(10) << endl;
//	//cout << func(10, 30) << endl;
//	cout << func2() << endl;
//
//	return 0;
//}


//函数重载 - 可以定义相同名字的函数

//函数重载要求：
//1.函数在同一个作用域
//2.函数的名称相同
//3.函数形参数量或者形参顺序或者形参类型不同(用这个去区别是否为同一个函数)

//(值得注意的是函数的返回值不同不能用于重载函数的条件)

void func(int a, int b)
{
	cout << "调用的函数是func(int a, int b)" << endl;
}

//void func(int a)
//{
//	cout << "调用的函数是func(int a)" << endl;
//
//}

//注意上面的int a 和int& a是不能重载的，不满足形参类型不同！

void func(int& a)
{
	cout << "调用的函数是func(int& a)" << endl;
}

void func(const int& a)
{
	cout << "调用的函数是func(const int& a)" << endl;
}

void func(char a = 5)
{
	cout << "调用的函数是func(char a = 5)" << endl;
}

int main()
{
	int a = 10;
	int b = 5;
	const int c = 100;
	func(a, b);
	func(a);
	func(a);
	func(c);
	func();
	system("pause");
	return 0;
}