#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//加号运算符重载
//class Person
//{
//public:
//	void getValue();
//	//成员函数加号运算符重载
//	Person operator+(Person& p);
//public:
//	int m_A;
//	int m_B;
//};
//
//void Person::getValue()
//{
//	m_A = 10;
//	m_B = 10;
//}
//
//Person Person::operator+(Person& p)
//{
//	Person temp;
//	temp.m_A = this->m_A + p.m_A;
//	temp.m_B = this->m_B + p.m_B;
//	return temp;
//}
//
//int main()
//{
//	Person p1;
//	p1.getValue();
//	Person p2;
//	p2.getValue();
//
//	Person p3 = p1 + p2;
//
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//
//	return 0;
//}

//class Person
//{
//public:
//	void getValue();
//public:
//	int m_A;
//	int m_B;
//};
//
//void Person::getValue()
//{
//	m_A = 10;
//	m_B = 10;
//}
//
////全局函数加号操作符重载
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//
//	return temp;
//}
//
//int main()
//{
//	Person p1;
//	p1.getValue();
//	Person p2;
//	p2.getValue();
//
//	Person p3 = p1 + p2;
//	cout << p3.m_A << ' ' << p3.m_B << endl;
//	return 0;
//}


//左移运算符重载
//class Person
//{
//	//如果用成员函数重载，那么无法做到cout在成员函数的右边
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b);
//private:
//	int m_A;
//	int m_B;
//};
//
//Person::Person(int a, int b)
//{
//	m_A = a;
//	m_B = b;
//}
//
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << p.m_A << ' ' << p.m_B << endl;
//	return cout;
//}
//
//int main()
//{
//	Person p1(10, 40);
//	Person p2(20, 50);
//	//cout << p << endl; //报错，说明要连续编程
//	cout << p1 << p2 << endl;
//	return 0;
//}


//递增递减运算符重载
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger mi);
//public:
//
//	MyInteger();
//	//重载++运算符 - 前置
//	MyInteger& operator++()
//	{
//		this->m_Val++;
//		return *this;
//	}
//	//重载++运算符 - 后置
//	MyInteger operator++(int)
//	{
//		MyInteger temp = *this;
//		m_Val++;
//
//		return temp;
//	}
//	//重载--运算符 - 前置
//	MyInteger& operator--()
//	{
//		m_Val--;
//		return *this;
//	}
//	//重载--运算符 - 后置
//	MyInteger operator--(int)
//	{
//		MyInteger temp = *this;
//		this->m_Val--;
//		return temp;
//	}
//
//private:
//	int m_Val;
//};
//
//MyInteger::MyInteger()
//{
//	m_Val = 0;
//}
//
//ostream& operator<<(ostream& cout, MyInteger mi)
//{
//	cout << mi.m_Val;
//	return cout;
//}
//
//int main()
//{
//	MyInteger myint;
//
//	cout << myint << endl;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//	cout << myint++ << endl;
//	cout << myint << endl;
//	cout << myint-- << endl;
//	cout << myint << endl;
//	cout << --myint << endl;
//	cout << myint << endl;
//
//	return 0;
//}


//赋值运算符重载
//class Person
//{
//public:
//	Person& operator=(Person& p1);
//
//	Person(int age);
//
//	~Person();
//public:
//	int* m_Age;
//};
//
//Person::Person(int age)
//{
//	m_Age = new int(age);
//}
//
//Person::~Person()
//{
//	delete m_Age;
//	m_Age = nullptr;
//}
//
//Person& Person::operator=(Person& p1)
//{
//	//使用浅拷贝
//	*(this->m_Age) = *p1.m_Age;
//
//	return p1;
//}
//
//int main()
//{
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//	//析构顺序是栈空间一样的 
//	//p2 = p1;  //在这里用c++提供的默认的赋值会因为浅拷贝导致后面的重复delete 这时候我们重载赋值运算符
//	//p1 = p2 = p3;
//	
//	cout << "p1的年龄为" << *p1.m_Age << endl;
//	cout << "p2的年龄为" << *p2.m_Age << endl;
//	cout << "p3的年龄为" << *p3.m_Age << endl;
//	
//	return 0;
//}



//关系运算符重载
//class Person
//{
//public:
//	Person(string name, int age);
//	//重载==
//	bool operator==(Person& p1);
//	//重载>
//	bool operator>(Person& p1);
//	//重载<
//	bool operator<(Person& p1);
//public:
//	string m_Name;
//	int m_Age;
//};
//
//Person::Person(string name, int age)
//{
//	m_Name = name;
//	m_Age = age;
//}
//
//bool Person::operator==(Person& p1)
//{
//	if (p1.m_Age == this->m_Age && p1.m_Name == this->m_Name)
//	{
//		return true;
//	}
//	return false;
//}
//
//bool Person::operator>(Person& p1)
//{
//	if (this->m_Age > p1.m_Age)
//	{
//		return true;
//	}
//
//	return false;
//}
//
//bool Person::operator<(Person& p1)
//{
//	if (this->m_Age < p1.m_Age)
//	{
//		return true;
//	}
//
//	return false;
//}
//
//int main()
//{
//	Person p1("张三", 20);
//	Person p2("张三", 22);
//	if (p1 == p2)
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	else if (p1 > p2)
//	{
//		cout << "p1大于p2" << endl;
//	}
//	else if (p1 < p2)
//	{
//		cout << "p1小于p2" << endl;
//	}
//
//	return 0;
//}


//函数调用操作符重载
