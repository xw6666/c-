#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <cstdlib>

//д�ļ�
//void test1()
//{
//	//�򿪷�ʽ
//	//ios::in - ���ļ�
//	//ios::out - д�ļ�
//	//ios::ate - ��ʼλ���ļ�β
//	//ios::app - ׷�ӷ�ʽд�ļ�
//	//ios::trunc - ����ļ�������ɾ�����ٴ���
//	//ios::binary - �����Ʒ�ʽ
//	//ͨ�� | �������
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



//���ļ�
//void test2()
//{
//	//1.����������
//	ifstream ifs;
//	//2.���ļ����жϴ򿪳ɹ�
//	ifs.open("Hello.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		exit(-1);
//	}
//	//3.������
//
//	//��һ��
//	//char str[1024] = { 0 };
//	//while (ifs >> str)
//	//{
//	//	cout << str << endl;
//	//}
//	
//	//�ڶ���
//	//char str[1024] = { 0 };
//	//while (ifs.getline(str, sizeof(str)))
//	//{
//	//	cout << str << endl;
//	//}
//
//	//������
//	//string str;
//	//while (getline(ifs, str))
//	//{
//	//	cout << str << endl;
//	//}
//
//	//������ - ���Ƽ�
//	//char c;
//	//while ((c = ifs.get()) != EOF)
//	//{
//	//	cout << c;
//	//}
//
//	//4.�ر��ļ�
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
//	//������д
//	//Person p;
//	//p.m_age = 20;
//	//strcpy(p.m_Name, "����");
//	//ofstream ofs;
//	//ofs.open("Person.txt", ios::out | ios::binary);
//	//ofs.write((const char*)&p, sizeof(p));
//	//ofs.close();
//
//	//�����ƶ�
//	Person p;
//	ifstream ifs;
//	ifs.open("Person.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ȡʧ��" << endl;
//		exit(-1);
//	}
//	ifs.read((char*)&p, sizeof(p));
//	cout << "������" << p.m_Name << endl;
//	cout << "���䣺" << p.m_age << endl;
//
//	ifs.close();
//
//	return 0;
//}