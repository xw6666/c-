#define _CRT_SECURE_NO_WARNINGS 1
//��̬�ô���
//1.����ṹ����
//2.�ɶ���ǿ
//3.ǰ�ںͺ���ά���Ը�

#include <iostream>
#include <string>
using namespace std;
//�������� - ��ͳд��
//class Caculator
//{
//public:
//	int getResult(string s)
//	{
//		if (s == "+")
//		{
//			return m_A + m_B;
//		}
//		else if (s == "-")
//		{
//			return m_A - m_B;
//		}
//		else if (s == "*")
//		{
//			return m_A * m_B;
//		}
//	}
//
//	int m_A;
//	int m_B;
//};


//�������� - ��̬
//class AbstractCaculator
//{
//public:
//	virtual int getResult(string s)
//	{
//		return 0;
//	}
//
//	int m_A;
//	int m_B;
//};
//
//class AddCaculator : public AbstractCaculator
//{
//public:
//	int getResult(string s)
//	{
//		return m_A + m_B;
//	}
//};
//
//class SubCaculator : public AbstractCaculator
//{
//public:
//	int getResult(string s)
//	{
//		return m_A - m_B;
//	}
//};
//
//class MulCaculator : public AbstractCaculator
//{
//public:
//	int getResult(string s)
//	{
//		return m_A * m_B;
//	}
//};
//
//void test1()
//{
//	Caculator c;
//	c.m_A = 10;
//	c.m_B = 10;
//	cout << c.m_A << " + " << c.m_B << " = " << c.getResult("+") << endl;
//	cout << c.m_A << " - " << c.m_B << " = " << c.getResult("-") << endl;
//	cout << c.m_A << " * " << c.m_B << " = " << c.getResult("*") << endl;
//}
//
//void test2()
//{
//	AbstractCaculator* caculator = new AddCaculator;
//	caculator->m_A = 20;
//	caculator->m_B = 30;
//	cout << caculator->m_A << " + " << caculator->m_B << " = " << caculator->getResult("+") << endl;
//	
//	caculator = new SubCaculator;
//	caculator->m_A = 20;
//	caculator->m_B = 30;
//	cout << caculator->m_A << " - " << caculator->m_B << " = " << caculator->getResult("-") << endl;
//
//	caculator = new MulCaculator;
//	caculator->m_A = 20;
//	caculator->m_B = 30;
//	cout << caculator->m_A << " * " << caculator->m_B << " = " << caculator->getResult("*") << endl;
//}
//
//int main()
//{
//	test2();
//	//test1();
//	return 0;
//}