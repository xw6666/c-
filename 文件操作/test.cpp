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

//class ConfigManager
//{
//public:
//	ConfigManager(const char* filename)
//		:_filename(filename)
//	{}
//private:
//	string _filename;
//};
//
//void test1()
//{
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}



#include <iostream>
using namespace std;


//������
//ÿ����Ա��������ͬһ����ַ��ʼ�洢������һ��ռ�
//����num��0�ŵ�ַ��ʼ��ţ�int�ĸ��ֽڣ���0,1,2,3�ĸ���ַ��ŵ���int
//name��5��������char������Ҳ��0��ʼ���ռ��0��1��2��3��4�����ַ�ռ�
//sռ��0��ַ�ռ�
//������Ĵ�С����λ�ֽڣ�һ��������Ա�������ʹ�С��������
//�����½ṹ���У�ռ�ռ�����������int(char[5]������5��char)�����Խṹ���Сһ����4��������
//��4��8��12��16..����4���ֽڲ���װ��char name[5]����������ṹ���С��8�ֽ�
union stu1
{
	int num;
	char name[5];
	char s;
};

//������������������ṹ���ֽڴ�Сֻ����8,16,24...���Խṹ���С��16�ֽ�
union stu3
{
	double num;
	char name[9];
	char s;
};

struct stu2
{
	int num;
	char name[5];
	char s;
};

int main()
{
	cout << sizeof(stu2) << endl;
	cout << sizeof(stu3) << endl;
	return 0;
}