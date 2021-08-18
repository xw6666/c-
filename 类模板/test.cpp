#include <iostream>
#include <string>
using namespace std;

//类模板
//template <class T>
//类
//template <class NameType, class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		m_Age = age;
//		m_Name = name;
//	}
//	void showData()
//	{
//		cout << "姓名：" << m_Name << endl;
//		cout << "年龄：" << m_Age << endl;
//	}
//private:
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test1()
//{
//	Person<string, int> p("张三", 20);  //需要 添加模板的参数列表
//	p.showData();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}



//类模板和函数模板的区别
//1.类模板不能自动类型推导使用
//2.类模板在模板参数列表中可以有默认参数

//template <class NameType = string, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		m_Age = age;
//		m_Name = name;
//	}
//	void showData()
//	{
//		cout << "姓名：" << m_Name << endl;
//		cout << "年龄：" << m_Age << endl;
//	}
//private:
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test1()
//{
//	//Person p1("张三", 20); //err - 类模板没有自动类型推到方法
//	Person<string, int> p1("张三", 20);
//	p1.showData();
//}
//
//void test2()
//{
//	//类模板在模板参数列表中有默认参数
//	Person<> p("李四", 20); //空模板列表也没关系，因为有默认关系，但是必须要有模板列表
//	p.showData();
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//类模板成员函数不是一开始就创建的，而是在调用阶段创建出来

//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "showPerson1函数调用" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "showPerson2函数调用" << endl;
//	}
//};
//
//template <class T>
//class MyClass
//{
//public:
//	T obj;
//	void func1()
//	{
//		obj.showPerson1();
//	}
//
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//int main()
//{
//	MyClass<Person1> mc;
//	mc.func1();
//	mc.func2(); //报错，说明是运行时出的问题，运行时发现没法创建这个函数
//	return 0;
//}



//类模板对象做函数参数
//template <class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	void showData()
//	{
//		cout << "姓名为：" << m_Name << endl;
//		cout << "年龄为" << m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////指定传入类型
//void print1(Person<string, int>& p)
//{
//	p.showData();
//}
//
////参数模板化
//template <class T1, class T2>
//void print2(Person<T1, T2>& p)
//{
//	p.showData();
//}
//
////类模板化
//template <class T>
//void print3(T& p)
//{
//	p.showData();
//}
//
//int main()
//{
//	Person<string, int> p("张三", 20);
//	print1(p);
//	print2(p);
//	print3(p);
//
//	return 0;
//}


//类模板与继承
//template <class T>
//class Base
//{
//public:
//	T a;
//};
//
////要继承模板类，要不要给出参数列表，要不也模板化
////1.给出参数列表
//class Son1 : Base<int>
//{
//public:
//
//	Son1()
//	{
//		a = 10;
//		cout << "a = " << a << endl;
//	}
//};
//
//template <class T1, class T2>
//class Son2 : Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的数据类型为：" << typeid(T1).name() << endl;
//		cout << "T2的数据类型为：" << typeid(T2).name() << endl;
//	}
//	T1 m_A;
//};
//
//int main()
//{
//	//Son1 son1;
//	//Son2<string, int> son2;
//	
//
//	return 0;
//}


//类模板成员函数类外实现
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名为：" << m_Name << endl;
//	cout << "年龄为：" << m_Age << endl;
//}
//
//int main()
//{
//	Person<string, int> p1("张三", 20);
//	p1.showPerson();
//	return 0;
//}





//类模板分文件编写
//由于类模板的成员函数是在运行时才创建的，如果分文件编写在链接阶段会出问题
//引用.cpp源文件
//写在一个文件中，引用.hpp


template <class T1, class T2>
class Person;

template <class T1, class T2>  //注意参数部分要写参数列表表示Person是模板类
void showPerson2(Person<T1, T2>& p)
{
	cout << "姓名为：" << p.m_Name << endl;
	cout << "年龄为：" << p.m_Age << endl;
}

//类模板与友元
template <class T1, class T2>
class Person
{
public:
	//类内实现全局函数
	friend void showPerson1(Person& p)
	{
		cout << "姓名为：" << p.m_Name << endl;
		cout << "年龄为：" << p.m_Age << endl;
	}

	//类外实现全局函数 - 此时要提前告诉编译器有这个函数，所以要在类上面实现
	friend void showPerson2<>(Person& p);

	T1 m_Name;
	T2 m_Age;
};

int main()
{
	Person<string, int> p;
	p.m_Age = 20;
	p.m_Name = "Tom";
	showPerson1(p);
	showPerson2(p);
	
	return 0;
}