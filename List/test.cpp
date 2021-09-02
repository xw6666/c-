#include <iostream>
using namespace std;
#include <list>
#include <string>

void printList(list<int> &l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//list�Ĺ��캯��
void test1()
{
	//Ĭ��
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//��ӡ 
	printList(l1);

	//���乹�� 
	list<int> l2(l1.begin(), l1.end());
	printList(l2);

	//��������
	list<int> l3(l2);
	printList(l3);

	//n��element
	list<int> l4(10, 200);  //10��200
	printList(l4);
}

//��ֵ
void test2()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	
	//operator=����
	list<int> l2 = l1;
	printList(l1);
	printList(l2);

	//assign
	list<int> l3;
	l3.assign(l2.begin(), l2.end());
	printList(l3);
	list<int> l4;
	l4.assign(10, 1000);   //n��element
	printList(l4);
}

//����
void test3()
{
	list<int> l1{ 10,20,30,40 };
	list<int> l2;
	l2.assign(10, 100);
	cout << "����ǰ��" << endl;
	printList(l1);
	printList(l2);
	cout << "-----------------------------------------------" << endl;
	cout << "������" << endl;
	l1.swap(l2);
	printList(l1);
	printList(l2);

	l1.resize(5);
	printList(l1);

}


//remove - ɾ��������������elementƥ���Ԫ��
void test4()
{
	list<int> l1{ 10, 20, 30, 40 };

	//insert(pos, elem) - ��pos������elem�����ز���Ԫ�ص�λ��
	l1.insert(l1.begin(), 1);
	printList(l1);
	//insert(pos, n, elem) - ��pos������n��elem���޷���ֵ
	list<int>::iterator it = l1.begin();
	it++;
	l1.insert(it, 2, 2);  //1 2 2 10 20 30 40
	printList(l1);
	//insert(pos, beg, end) - ��pos������[beg, end)�е�����
	l1.insert(l1.begin(), l1.begin(), l1.end());
	printList(l1);

	//erase
	it = l1.end();
	for (int i = 0; i < 4; i++)
	{
		it--;
	}
	l1.erase(l1.begin(), it);  //ɾ��[beg, end)�е�Ԫ��
	printList(l1);
	
	l1.remove(30);   //ɾ������������elementƥ���Ԫ��
	printList(l1);

}

//list��ȡ
void test5()
{
	list<int> li{ 1,2,3,4 };
	
	//li[0]  list������������֧���������

	//list�������ֶ�ȡ��ʽ
	cout << "��һ��Ԫ��Ϊ��" << li.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << li.back() << endl;
}



//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//
//	system("pause");
//	return 0;
//}



//list������
//��Person�Զ������ͽ����������������������䣬���
//������򣺰�����������������������ͬ������߽�������


class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	
	string m_Name;
	int m_Age;
	int m_Height;
};

void printList(list<Person>& l)
{
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << " ��ߣ�" << it->m_Height << endl;
	}
}

bool cmp_by_age(Person& p1, Person& p2)
{
	return p1.m_Age < p2.m_Age;
}

bool cmp_by_height(Person& p1, Person& p2)
{
	return p1.m_Height < p2.m_Height;
}

void sort(list<Person>& l)
{
	if (l.size() == 0)
	{
		return;
	}
	
	int cmp = l.begin()->m_Age;
	for (auto i = l.begin(); i != l.end(); i++)
	{
		if (i->m_Age != cmp)
		{
			//���䲻��ȣ���Ҫ����������
			l.sort(cmp_by_age);
			return;
		}
	}

	//��������˵��������ȣ���Ҫ���������
	l.sort(cmp_by_height);
}

int main()
{
	Person p1("aaa", 18, 180);
	Person p2("bbb", 18, 170);
	Person p3("ccc", 18, 174);
	Person p4("ddd", 18, 170);
	Person p5("eee", 18, 176);

	list<Person> l1{ p1,p2,p3,p4,p5 };
	sort(l1);
	printList(l1);

	system("pause");
	return 0;
}