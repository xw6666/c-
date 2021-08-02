#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//构造函数 - 相当于出厂设置  //类名(){}
//1.构造函数没有返回值也不写void
//2.函数名称与类名相同
//3.构造函数可以有参数，因此可以发生重载
//4.程序在调用对象的时候会自动调用构造，无需手动调用，而且只会调用一次


//析构函数 //~类名(){}
//1.析构函数没有返回值也不写void
//2.函数名称与类名相同，在名称前加~
//3.析构函数不可以有参数，所以不可以重载
//4.程序在对象销毁前会自动调用析构，无需手动调用，而且只会调用一次

//对象的初始化和清理

//1.用构造函数进行初始化
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person构造函数的调用" << endl;
//	}
//
//	//析构函数 - 销毁前调用一次
//	//也就是在出作用域前调用一次
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
//	}
//};

//如果自己不写构造析构，那么编译器会提供一个空实现
//void test1()
//{
//	Person p1;
//}
//
//int main()
//{
//	test1();
//	//Person p1;
//	system("pause");
//	return 0;
//}



//构造函数的分类和调用

//两种分类方式
//按参数分为：有参构造和无参构造
//按类型分为：普通构造和拷贝构造

//三种调用方式
//括号法
//显示法
//隐式转换法


//分类
//按参数分：无参构造(默认构造)和有参构造
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的无参(默认)构造函数的调用" << endl;
//	}
//
//	//构造函数(有参)
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person的有参构造函数的调用" << endl;
//	}
//
//	//拷贝构造函数
//	Person(const Person& p)//注意这里的传参
//	{
//		//将传入人身上的所有属性，拷贝到我身上
//		m_age = p.m_age;
//		cout << "Person拷贝构造函数的调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
//	}
//
//	int m_age;
//};
//
//void test1()
//{
//	//构造函数调用
//
//	//1.括号法
//	//Person p1;  //默认构造函数调用
//	//Person p2(10); //有参构造函数调用
//	//Person p3(p2); //拷贝构造函数调用
//
//	//注意：调用默认构造函数的时候不要加()
//	//Person p1(); - 如果这样写，编译器会认为是一个函数声明 - 所以默认构造不要写括号
//	//void func() == Person p1()
//	
//	//cout << "P2的年龄为：" << p2.m_age << endl;
//	//cout << "P3的年龄为：" << p3.m_age << endl;
//
//
//	//2.显式法
//	Person p1;
//	Person p2 = Person(10); //有参构造  Person(10)为匿名对象 - 当此行结束后，系统会立即回收匿名对象
//	Person p3 = Person(p2); //拷贝构造
//	cout << "P2的年龄为：" << p2.m_age << endl;
//	cout << "P3的年龄为：" << p3.m_age << endl;
//
//	//注意：不要利用拷贝对象来初始化匿名对象 - 编译器会认为 Person(p3) == Person p3 - 重定义
//	//Person(p3); - 编译器会认为这是一个对象声明
//
//
//	//测试匿名对象
//	//Person(10);
//	//cout << "66666" << endl;
//
//	//3.隐式转换法
//
//	Person p4 = 10;  // Person P4 = Person(10); -- 隐式转显式
//	Person p5 = p4;  //拷贝构造
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}
//


class Person
{
public:
	//默认构造
	Person()
	{
		cout << "Person的默认构造调用" << endl;
	}
	//有参构造
	Person(int age)
	{
		m_age = age;
		cout << "Person的有参构造调用" << endl;
	}
	//拷贝构造
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "Person的拷贝构造调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl; 
	}

	int m_age;
};

void test1()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_age << endl;
}

int main()
{
	test1();
	system("pause");
	return 0;
}