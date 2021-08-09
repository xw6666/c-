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