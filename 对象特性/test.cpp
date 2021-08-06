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
//	//Person(p3); - 编译器会认为这是一个函数声明
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


//class Person
//{
//public:
//	//默认构造
//	Person()
//	{
//		cout << "Person的默认构造调用" << endl;
//	}
//	//有参构造
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person的有参构造调用" << endl;
//	}
//	//拷贝构造
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person的拷贝构造调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl; 
//	}
//
//	int m_age;
//};
//
//void test1()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_age << endl;
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}



//拷贝函数调用时机
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	Person(const Person& const p)
//	{
//		m_age = p.m_age;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//
//	int m_age;
//};
//
//void test1()
//{
//	//直接使用拷贝构造
//	Person p1(10);
//	Person p2(p1);
//}
//
//void test2(Person p)
//{
//	//传值的时候
//}
//
//Person test3()
//{
//	Person p(10);
//	return p;
//}
//
//int main()
//{
//	//test1();
//	//Person p1;
//	test3();
//	system("pause");
//	return 0;
//}




//构造函数调用规则
//1.创建一个类，c++会给每个编译器添加至少3个函数
//默认函数(空实现)
//析构函数(空实现)
//拷贝函数(值拷贝)


//2.如果写了有参构造，c++不再提供默认构造，但是会提供拷贝构造

//3.如果写了拷贝构造，那么不会提供默认构造

//class Person
//{
//public:
//	Person()
//	{
//		m_height = NULL;
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	
//	Person(int age, int height)
//	{
//		m_age = age;
//		m_height = new int(height);
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		//这里用深拷贝
//		m_height = new int(*p.m_height);
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//	~Person()
//	{
//		//析构代码，将堆区的代码释放
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int m_age;
//	int* m_height;
//};
//
//void test1()
//{
//	Person p1(18, 175);
//	Person p2(p1);
//	cout << "p1的年龄为：" << p1.m_age << endl;
//	cout << "p1的身高为：" << *p1.m_height << endl;
//	cout << "p2的年龄为：" << p2.m_age << endl;
//	cout << "p2的身高为：" << *p2.m_height << endl;
//}
//
//int main()
//{
//	test1();
//
//	system("pause");
//	return 0;
//}




//初始化列表
//class Person
//{
//public:
//
//	//传统初始化操作
//	//Person()
//	//{
//	//	 
//	//}
//	
//	//初始化列表
//	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
//	{
//		cout << "" << m_a << " " << m_b << " " << m_c << endl;
//	}
//
//	int m_a;
//	int m_b;
//	int m_c;
//};
//
//void test1()
//{
//	Person p1(44, 5, 6);
//	//cout << "" << p1.m_a << " " << p1.m_b << " " << p1.m_c << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}




//类对象作为类成员

//像栈一样，一个类中如果有别的类对象，那么别的类对象先构造，再构造自身
//那要析构，肯定是从外向里析构
//class Phone
//{
//public:
//	//初始化列表
//	Phone(string PName) :m_PName(PName)
//	{
//		cout << "Phone的有参构造函数调用" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//	string m_PName;
//};
//
//class Person
//{
//public:
//	//有参构造函数 - 初始化列表
//	//Phone m_PName = PName (隐式转换法)
//	Person(string Name, string PName) : m_Name(Name), m_PName(PName)
//	{
//		cout << m_Name << "拿着" << m_Name << endl;
//		cout << "Person的有参构造调用" << endl;
//	}
//	
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//	//名字
//	string m_Name;
//	//手机
//	Phone m_PName;
//};
//
//int main()
//{
//	Person p("小明", "三星");
//	
//	system("pause");
//	return 0;
//}



//静态成员变量
//class Person
//{
//public:
//	//所有对象都共享同一份数据
//	//编译阶段就分配内存
//	//类内声明，类外初始化操作
//	static int m_age;
//private:
//	static int m_b;
//};
//
////类外初始化
//int Person::m_age = 100;
//int Person::m_b = 0;
//int main()
//{
//	//通过对象进行访问
//	Person p;
//	p.m_age = 20;
//	cout << p.m_age << endl;
//
//	//通过类名进行访问
//	cout << Person::m_age << endl;
//	//静态成员变量访问权限
//	//cout << Person::m_b << endl;
//	return 0;
//}


//静态成员函数
//1.所有对象都共享一个静态成员函数
//2.静态成员函数只能访问静态成员变量

//class Person
//{
//public:
//	static void initA(int A)
//	{
//		//如果不访问静态成员变量，那么无法实现所有对象共享一个静态成员函数，因为每个成员的m_A不同
//		m_A = A;
//	}
//
//	static int m_A;
//};
//
//int Person::m_A = 0;
//
//int main()
//{
//	Person p;
//	//p.initA(90); // 通过对象访问
//
//	Person::initA(100);  //通过类名访问
//
//	//同样的，静态成员函数也有访问权限
//
//
//	cout << p.m_A << endl;
//	return 0;
//}



//c++对象模型和this指针

//成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象上

//class Person
//{
//public:
//	void func() //不属于类的对象上
//	{
//
//	}
//
//	int m_a;//属于类的对象上
//
//	static int m_b; //不属于类的对象上
//};
//
//int Person::m_b = 10;
//
//int main()
//{
//	Person p;
//	//空对象空间为一个字节 - c++编译器会给每个空对象分配一个字节的空间，为了区分空对象在内存的位置
//	//每个空对象也应该有一个独一无二的内存地址(用于区分)
//	cout << "sizeof(p) = " << sizeof(p) << endl;
//
//	return 0;
//}

//this指针

//1.防止重名
//class Person
//{
//public:
//	Person()
//	{
//
//	}
//	Person(const Person& p)
//	{
//		age = p.age;
//	}
//	void setAge(int age)
//	{
//		//this指向该对象中的成员变量
//		this->age = age;
//	}
//	//注意用*this返回一定是引用
//	Person& addAge(Person& p)
//	{
//		age += p.age;
//
//		return *this;
//	}
//
//	int age;
//};
//
//int main()
//{
//	Person p1;
//	p1.setAge(10);
//	Person p2;
//	p2.setAge(10);
//
//	p2.addAge(p1).addAge(p1).addAge(p1).addAge(p1);
//	cout << p2.age << endl;
//	return 0;
//}




//空指针访问成员函数
//注意函数体内部是否用到this

//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "This is Person class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		//当次对象为空，没有可以访问的成员变量
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age = " << m_age << endl;
//	}
//
//	int m_age;
//};
//
//int main()
//{
//	Person* p = NULL;
//	p->showClassName();
//	p->showPersonAge();
//	return 0;
//}

