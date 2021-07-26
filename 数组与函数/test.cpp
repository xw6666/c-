#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#define MAX 10
using namespace std;
///*void test(int a)
//{
//	cout << &a << endl;
//	int b = 5;
//	cout << &b << endl;
//}
//void test1(int a)
//{
//	*/cout << &a << endl;
//}
int g_a = 5;
const int c_g_a = 10;
int main()
{
	static int a = 10;
	int b = 5;
	int c = 10;
	
	cout << (int)&b << endl;
	cout << (int)&c << endl;
	cout << (int)&a << endl;
	cout << (int)&g_a << endl;
	cout << (int)&c_g_a << endl;
	
	system("pause");
}
