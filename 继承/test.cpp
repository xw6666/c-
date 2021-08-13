#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//继承基本语法
//class 子类 ：继承方式 父类

//基础页面
//class Basecontent
//{
//public:
//	void head()
//	{
//		cout << "页面上部内容" << endl;
//	}
//
//	void foot()
//	{
//		cout << "页面下部内容" << endl;
//	}
//
//	void left()
//	{
//		cout << "页面左部内容" << endl;
//	}
//
//	void right()
//	{
//		cout << "页面右部内容" << endl;
//	}
//};
//class Java : public Basecontent
//{
//public:
//	void middle()
//	{
//		cout << "Java页面中部内容" << endl;
//	}
//};
//
//class Cpp : public Basecontent
//{
//public:
//	void middle()
//	{
//		cout << "C++页面中部内容" << endl;
//	}
//};
//
//class Python : public Basecontent
//{
//public:
//	void middle()
//	{
//		cout << "Python页面中部内容" << endl;
//	}
//};
//int main()
//{
//	Java java;
//	cout << "Java视频页面内容如下：" << endl;
//	java.head();
//	java.foot();
//	java.left();
//	java.right();
//	java.middle();
//	cout << "------------------------------" << endl;
//	Cpp cpp;
//	cout << "C++视频页面内容如下：" << endl;
//	cpp.head();
//	cpp.foot();
//	cpp.left();
//	cpp.right();
//	cpp.middle();
//	cout << "------------------------------" << endl;
//	Python python;
//	cout << "Python视频页面内容如下：" << endl;
//	python.head();
//	python.foot();
//	python.left();
//	python.right();
//	python.middle();
//	return 0;
//}


//继承方法
//如果父类有private，继承后子类访问不到
//如果是公共继承，子类继承得到的东西权限不变，私有内容访问不到
//如果是保护继承，除了私有的东西不可访问，其他都变保护权限
//如果是私有继承，除了私有的东西不可访问，其他的都变私有权限 

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//公共继承
//class Son1 : public Base1
//{
//public:
//	Son1()
//	{
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;  //私有内容继承不过来
//	}
//};
//
////保护继承
//class Son2 : protected Base1
//{
//public:
//	Son2()
//	{
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;  //私有内容继承不过来
//	}
//};
//
//class Son3 : private Base1
//{
//public:
//	Son3()
//	{
//		m_A = 20;
//		m_B = 20;
//	}
//};
//
//class Son4 : private Son3
//{
//public:
//	Son4()
//	{
//
//		//m_A = 30;  //证明了Son3继承得来的内容均变为私有权限
//	}
//};
//
//int main()
//{
//	Son1 son1;
//	son1.m_A = 100;
//	//son.n_B = 200; //公共继承得到的还是保护权限
//	Son2 son2;
//	//son2.m_A = 3; // 保护继承得到的全部变保护
//	return 0;
//}


//现在来考虑继承后，父类的私有属性到底是被继承了后隐藏，还是根本就没继承
//通过开发人员命令提示工具查看对象模型
//跳转盘
//跳转路径 cd
//查看命令 cl /d1 reportSingleClssLayout类名 所属文件名 



//继承中的构造和析构
//class Dad
//{
//public:
//	Dad()
//	{
//		cout << "Dad的构造函数调用" << endl;
//	}
//
//	~Dad()
//	{
//		cout << "Dad的析构函数调用" << endl;
//	}
//public:
//	int m_A;
//};
//
//class Son : public Dad
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数调用" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son的析构函数调用" << endl;
//	}
//};
//
//int main()
//{
//	Son son;
//
//	return 0;
//}


//继承中同名成员处理方式
//如果子类子类中出现了父类同名成员函数，那么子类成员函数会隐藏掉所有的父类成员函数
//所以如果这时候想访问这些隐藏的函数，需要 加作用域
//class Dad
//{
//public:
//	Dad()
//	{
//		m_A = 10;
//	}
//	void func()
//	{
//		cout << "Dad的函数调用" << endl;
//	}
//	void func(int a)
//	{
//		m_A = a;
//		cout << "Dad有参函数调用" << endl;
//	}
//public:
//	int m_A;
//};
//
//class Son : public Dad
//{
//public:
//	Son()
//	{
//		m_A = 20;
//	}
//
//	void func()
//	{
//		cout << "Son的函数调用" << endl;
//	}
//	int m_A;
//};
//
//int main()
//{
//	Son son;
//
//	cout << son.m_A << endl;
//	cout << son.Dad::m_A << endl;  //访问父类同名属性需要声明作用域
//	son.func();
//	//son.func(50);   //父类中的同名函数继承后被隐藏
//	son.Dad::func(50);
//	cout << son.Dad::m_A << endl;
//	return 0;
//}



//继承中的同名静态成员
//class Dad
//{
//public:
//	static void func()
//	{
//		cout << "Dad - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Dad - static void func(int a)" << endl;
//	}
//	static int m_A;
//};
//
//int Dad::m_A = 10;
//
//class Son : public Dad
//{
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int m_A;
//};
//
//int Son::m_A = 20;
//
//void test1()
//{
//	//通过对象调用同名静态成员属性
//	Son son;
//	cout << "Son下的m_A = " << son.m_A << endl;
//	cout <<"Dad下的m_A = " << son.Dad::m_A << endl;
//	//通过类名调用同名静态成员属性
//	cout << "Son下的m_A = " << Son::m_A << endl;
//	cout << "Dad下的m_A = " << Son::Dad::m_A << endl;
//}
//
//void test2()
//{
//	//通过对象调用同名静态成员行为
//	Son son;
//	son.func();
//	//son.func(50); //因为继承的同名函数都被隐藏了，所以不是son中重载，不能这样调用
//	son.Dad::func();
//	son.Dad::func(50);
//	cout << "------------------------------------" << endl;
//	//通过类名调用
//	Son::func();
//	Son::Dad::func();
//	Son::Dad::func(50);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//多继承语法

//class 子类 : 继承方式 父类1, 继承方式 父类2 
//实际开发不建议用 - 因为要是父类中有重复的属性行为还得去区分，很麻烦

//class Dad1
//{
//public:
//	Dad1()
//	{
//		m_A = 10;
//	}
//	int m_A;
//};
//
//class Dad2
//{
//public:
//	Dad2()
//	{
//		m_A = 20;
//	}
//	int m_A;
//};
//
//class Son : public Dad1, public Dad2
//{
//public:
//	Son()
//	{
//		m_C = 30;
//		m_D = 40;
//	}
//	int m_C;
//	int m_D;
//};
//
//int main()
//{	
//	Son son;
//	cout << son.Dad1::m_A << endl;  //注意这里继承得到的m_A重名，需要加作用域区分
//	cout << son.Dad2::m_A << endl;
//	cout << son.m_C << endl;
//	cout << son.m_D << endl;
//	return 0;
//}



//菱形继承
//class Animal
//{
//public:
//	Animal()
//	{
//		m_Age = 18;
//	}
//	int m_Age;
//};
//
//class Sheep : virtual public Animal
//{
//public:
//	Sheep()
//	{
//		m_Age = 18;
//	}
//};
//
//class Camel : virtual public Animal
//{
//public:
//	Camel()
//	{
//		m_Age = 20;
//	}
//};
//
////这时候通过虚继承方式解决菱形问题
////继承时使用virtual关键字修饰
////Animal类此时称为虚基类
//class SheepCamel : public Sheep, public Camel
//{
//public:
//	SheepCamel()
//	{
//		//这时候我们继承了两个相同的属性，但是我们只需要一个岁数属性就行了
//		//Camel::m_Age = 25;
//		//Sheep::m_Age = 25;
//
//		//继承Animal时Animal被virtual修饰过后
//		m_Age = 25;  //成功 - 本质是因为virtual继承的时候属性用的是指针
//		//通过菱形继承回来时，m_Age指向的是同一个属性，没有二义性
//	}
//};

//class Dad
//{
//public:
//	Dad()
//	{
//		m_A = 10;
//	}
//	int  m_A;
//};
//
//class Son : public Dad
//{
//public:
//	int m_B;
//};
//
//int main()
//{
//	Son son;
//	son.m_B = 20;
//	cout << son.m_A << endl;
//	cout << son.m_B << endl;
//	return 0;
//}