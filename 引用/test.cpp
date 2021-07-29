#include <iostream>
using namespace std;
//int main()
//{
//	int a = 10;
//	int c = 5;
//	//引用的基本语法
//	//数据类型+&+新名字 = 旧名字
//	int& b = a;  //int* const b = &a;
//	//b = c;  //error
//
//	//int* const p = &a;
//	//p = &c;
//
//	//引用是确确实实改了个名字
//	//a和b的内存是一致的
//	//可以理解为 - 让b的地址等同于a的地址
//
//	b = 50;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	//注意：引用是一定要初始化的
//	
//	//int &b; - 错误
//	//int &a = b; - 正确
//	//注意：引用一旦初始化，就不能更改
//
//	//实际上，引用的本质就是一个常量指针 - int* const p;
//
//	system("pause");
//}



//引用做函数参数

//正常的交换函数
//void swap1(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
////引用版 - 应用引用去简化指针修饰实参
////与地址传递效果一样
//void swap2(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 5;
//	swap2(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = "<< b << endl;
//	system("pause");
//}


//应用做函数返回值

//int& test1()
//{
//	int a = 10;
//
//	return a;
//}
//
//int& test2()
//{
//	static int a = 10;
//	return a;
//}
//int main()
//{
//	////1.不要返回局部变量的引用
//	//int& ret = test1();//由于栈区中的a内存已经释放，返回的这块地址对应的空间已经不受控制了
//	//cout << "ret = " << ret << endl;//10
//	//cout << "ret = " << ret << endl;//乱码
//
//	//2.函数的调用可以作为左值
//	int& ret = test2();
//	cout << "ret = " << ret << endl;
//	test2() = 1000;
//	cout << "ret = " << ret << endl;
//
//	return 0;
//}



//常量引用

void Print(const int& a)
{
	//在这里可以防止a被偶然的修改
}

int main()
{
	//加上const变成只读，不可修改
	//const int& a = 10;

	//应用场景：修饰形参放置变量被修改
	
	//const int a = 50;
	
	int a = 10;
	
	return 0;
}