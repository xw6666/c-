#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>  //用c++风格字符串一定要包这个
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;


#define WEEK 7
int main()
{
	////在屏幕中输出Hello world!
	//cout << "Hello world!" << endl;

	////在屏幕中输出a
	//int a = 5;
	//int b = 3;
	//cout << "a = " << a << ", b = " << b << endl;

	////常量使用
	//cout << "一周一共有" << WEEK << "天" << endl;

	////字符串型变量
	////1.延用c
	//char str1[] = "abcdef";
	//cout << str1 << endl;

	////2.c++风格
	////注意包含头文件 string
	//string str2 = "abcdefg";
	//cout << str2 << endl;


	////bool数据类型
	//bool flag = true;
	//cout << "Size of bool = " << sizeof(bool) << endl;

	//数据的输入
	//int e = 0;
	//cout << "请对e进行赋值：" << endl;
	//cin >> e;
	//cout << "e = " << e << endl;

	string str3 = "0";
	cout << "请输入字符串：" << endl;
	cin >> str3;
	cout << str3 << endl;
	system("pause");

	return 0;
}