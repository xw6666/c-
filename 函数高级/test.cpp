#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//������Ĭ�ϲ���
//����Լ�������bc����ô���Լ��ģ��������bc����Ĭ��ֵ
//  ����ֵ���� ���������β� = Ĭ��ֵ��{}

//��b��ʼ�е�Ĭ�ϲ�������ô������βζ���Ҫ��һ��Ĭ��ֵ
//���������cû��Ĭ��ֱֵ�ӱ���
//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//
////��������Ĭ�ϲ�����ʵ�־Ͳ�����Ĭ�ϲ��� - ������ʵ��ֻ����һ����Ĭ�ϲ���(��ֹ�ض���)
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


//�������� - ���Զ�����ͬ���ֵĺ���

//��������Ҫ��
//1.������ͬһ��������
//2.������������ͬ
//3.�����β����������β�˳������β����Ͳ�ͬ(�����ȥ�����Ƿ�Ϊͬһ������)

//(ֵ��ע����Ǻ����ķ���ֵ��ͬ�����������غ���������)

void func(int a, int b)
{
	cout << "���õĺ�����func(int a, int b)" << endl;
}

//void func(int a)
//{
//	cout << "���õĺ�����func(int a)" << endl;
//
//}

//ע�������int a ��int& a�ǲ������صģ��������β����Ͳ�ͬ��

void func(int& a)
{
	cout << "���õĺ�����func(int& a)" << endl;
}

void func(const int& a)
{
	cout << "���õĺ�����func(const int& a)" << endl;
}

void func(char a = 5)
{
	cout << "���õĺ�����func(char a = 5)" << endl;
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