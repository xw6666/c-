#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
int* test()
{
	//����new�ؼ��� ���Խ����ݿ��ٵ�����
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);

	return p;
}

//������������
int* test1()
{
	int* p = new int[10];
	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	return p;
}

string* test2()
{
	string* str = new string;
	*str = "12345678901234567890";
	return str;
}

int main()
{
	/*int* p = test();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;*/
	//�ͷŶ�����������delete
	//delete p;
	//�ڴ��Ѿ����ͷţ��ٴη�����Ϊ�Ƿ�����
	//cout << *p << endl;

	//int* nums = test1();
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << *(nums + i) << ' ';
	//}

	//delete[] nums;
	//cout << endl;

	//�ַ������ͽ�Ӧ�û��ӡ�����ַ���
	string* str = test2();
	cout << *str << endl;
	delete str;
	system("pause");
}