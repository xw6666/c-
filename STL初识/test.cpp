#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
//void print(int a)
//{
//	cout << a << " ";
//}
//
//int main()
//{
//	//����vector��������ͨ��ģ�����ô��Ԫ������
//	vector<int> v;
//
//	//�������в�������
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//
//	//������ӡ - ͨ��������whileѭ��
//	vector<int>::iterator itbegin = v.begin();
//	vector<int>::iterator itend = v.end();
//	while (itbegin < itend)
//	{
//		cout << *itbegin << " ";
//		itbegin++;
//	}
//	cout << endl;
//
//	//������ӡ - ͨ��������forѭ��
//	for (vector<int>::iterator itbegin = v.begin(); itbegin != v.end(); itbegin++)
//	{
//		cout << *itbegin << " ";
//	}
//	cout << endl;
//
//	//������ӡ - ͨ�����������㷨(�ص���������)
//	for_each(v.begin(), v.end(), print);
//
//
//	return 0;
//}



//vector��������Զ�������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test1()
//{
//	//����һ�����Person���͵�vector����
//	vector<Person> v;  
//
//	//�����������������
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//��������
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "����Ϊ��" << it->m_Name << " ����Ϊ��" << it->m_Age << endl;
//	}
//}
//
//void test2()
//{
//	//����һ�����Person*���͵�vector����
//	vector<Person*> v;
//
//	//�����������������
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//��������
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "����Ϊ��" << (*it)->m_Name << " ����Ϊ��" << (*it)->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//����Ƕ������
void test1()
{
	vector<vector<int>> v;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//������ӡ
	for (vector<vector<int>>::iterator it1 = v.begin(); it1 != v.end(); it1++)
	{
		for (vector<int>::iterator it2 = it1->begin(); it2 != it1->end(); it2++)
		{
			cout << *it2 << " ";
		}

		cout << endl;
	}
}

int main()
{
	test1();
	return 0;
}