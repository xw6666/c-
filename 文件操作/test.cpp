#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <cstdlib>

//写文件
//void test1()
//{
//	//打开方式
//	//ios::in - 读文件
//	//ios::out - 写文件
//	//ios::ate - 起始位置文件尾
//	//ios::app - 追加方式写文件
//	//ios::trunc - 如果文件存在先删除，再创建
//	//ios::binary - 二进制方式
//	//通过 | 符号组合
//	ofstream ofs;
//	ofs.open("Hello.txt", ios::out);
//	ofs << "Hello world!" << endl;
//	ofs.close();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}



//读文件
//void test2()
//{
//	//1.创建流对象
//	ifstream ifs;
//	//2.打开文件并判断打开成功
//	ifs.open("Hello.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		exit(-1);
//	}
//	//3.读数据
//
//	//第一种
//	//char str[1024] = { 0 };
//	//while (ifs >> str)
//	//{
//	//	cout << str << endl;
//	//}
//	
//	//第二种
//	//char str[1024] = { 0 };
//	//while (ifs.getline(str, sizeof(str)))
//	//{
//	//	cout << str << endl;
//	//}
//
//	//第三种
//	//string str;
//	//while (getline(ifs, str))
//	//{
//	//	cout << str << endl;
//	//}
//
//	//第四种 - 不推荐
//	//char c;
//	//while ((c = ifs.get()) != EOF)
//	//{
//	//	cout << c;
//	//}
//
//	//4.关闭文件
//	ifs.close();
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

//class Person
//{
//public:
//
//	char m_Name[20];
//	int m_age;
//};
//
//int main()
//{
//	//二进制写
//	//Person p;
//	//p.m_age = 20;
//	//strcpy(p.m_Name, "张三");
//	//ofstream ofs;
//	//ofs.open("Person.txt", ios::out | ios::binary);
//	//ofs.write((const char*)&p, sizeof(p));
//	//ofs.close();
//
//	//二进制读
//	Person p;
//	ifstream ifs;
//	ifs.open("Person.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "文件读取失败" << endl;
//		exit(-1);
//	}
//	ifs.read((char*)&p, sizeof(p));
//	cout << "姓名：" << p.m_Name << endl;
//	cout << "年龄：" << p.m_age << endl;
//
//	ifs.close();
//
//	return 0;
//}