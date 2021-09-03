#include <iostream>
using namespace std;
#include <set>
#include <vector>

//�����븳ֵ
void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	set<int> s1;
	//���������Զ�����
	//set���ܲ����ظ�Ԫ��
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(20);
	
	printSet(s1);

	//��������
	set<int> s2(s1);
	printSet(s2);

}

//set��С
void test2()
{
	//set����ʹ��resize
	set<int> s1{ 60,20,10,30,50,40 };
	printSet(s1);

	//�ж�setΪ��
	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;
	}
}

void test3()
{
	set<int> s1{ 1,2,3,4,5 };
	set<int> s2{ 6,7,8,9 };
	
	//����s1��s2
	cout << "����ǰ��" << endl;
	printSet(s1);
	printSet(s2);
	s1.swap(s2);
	cout << "������" << endl;
	printSet(s1);
	printSet(s2);

}

//set�Ĳ����ɾ��
void test4()
{
	set<int> s1{ 0,1,2,3,4,5,6,7,8 };
	printSet(s1);

	//set����ֻ��insert
	s1.insert(9);
	s1.insert(10);
	printSet(s1);

	//ɾ����erase
	//erase(elem) - ɾ��������ֵΪelem��Ԫ��
	s1.erase(0);
	printSet(s1);  //1 2 3 4 5 6 7 8 9 10
	
	//erase(pos) - ɾ��������λ��Ϊpos��Ԫ��
	s1.erase(s1.begin());
	printSet(s1);  //2 3 4 5 6 7 8 9 10

	//erase(beg, end) - ɾ��������λ��Ϊ[beg, end)��Ԫ��
	auto it1 = s1.begin();
	it1++;
	auto it2 = s1.end();
	it2--;
	s1.erase(it1, it2);  //2 10;
	printSet(s1);

	//clear - �������������Ԫ��
	s1.clear();
	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1�е�Ԫ����" << s1.size() << "��" << endl;
	}
}

//set�Ĳ�����ͳ��
void test5()
{
	//find(elem) - ����������Ϊelem��Ԫ�أ��������ĵ�����������Ҳ���������end();
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);

	printSet(s1);
	set<int>::iterator it = s1.find(50);  //����20�����ص�����
	if (it == s1.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << *it << endl;
	}

	//count(elem)���ڼ�¼set��elem���ֵĴ��� - ����Ȼֻ����1����0
	int num = s1.count(20);
	cout << "num = " << num << endl;

}

void printMultiset(multiset<int>& ms)
{
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test6()
{
	//set��multiset����
	//1.set���ܲ����ظ����ݣ���multiset����
	//2.set��������ʱ�᷵�ؽ������ʾ���������Ƿ�ɹ�
	//3.multiset����Բ������ݽ��м�⣬��˿����ظ�����
	
	multiset<int> ms;
	ms.insert(15);
	ms.insert(10);
	ms.insert(20);
	ms.insert(30);
	printMultiset(ms);

	set<int> s;
	s.insert(10);
	s.insert(10);
	s.insert(20);
	//pair<iterator, boll> - ����
	pair<set<int>::iterator, bool> ret = s.insert(30);
	cout << ret.second << endl;
	pair<set<int>::iterator, bool> ret2 = s.insert(10);
	cout << ret2.second << endl;

	printSet(s);

}


//����Ĵ�����ʹ��
void test7()
{
	//���캯��
	pair<string, int> pa1("����", 19);
	cout << "������" << pa1.first << " ���䣺" << pa1.second << endl;
	//make_pair����
	pair<string, int> pa2 = make_pair("����", 20);
	cout << "������" << pa2.first << " ���䣺" << pa2.second << endl;

}

//set������������ָ�������������
template <class T>
class MyCompare
{
public:
	bool operator()(T a, T b) const   //ע��const
	{
		return a > b;
	}
};

void test8()
{
	set<int> s1;
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	s1.insert(10);
	s1.insert(40);

	printSet(s1);   //10 20 30 40 50

	set<int, MyCompare<int>> s2;
	s2.insert(20);
	s2.insert(50);
	s2.insert(30);
	s2.insert(10);
	s2.insert(40);
	for (set<int, MyCompare<int>>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set�����Զ�������ָ�������������
class Person
{

public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	//�Ƚϲ���������
	bool operator>(Person& p)
	{
		if (this->m_Age > p.m_Age)
		{
			return true;
		}
		return false;
	}

	string m_Name;
	int m_Age;
};


void test9()
{
	set<Person, MyCompare<Person>> s1;
	s1.insert(Person("����", 20));
	s1.insert(Person("�����", 28));
	s1.insert(Person("�ŷ�", 25));
	s1.insert(Person("����", 27));
	s1.insert(Person("����", 30));

	for (set<Person, MyCompare<Person>>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << it->m_Name << " " << it->m_Age << endl;
	}
	cout << endl;
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5(); 
	//test6();
	//test7();
	//test8();
	test9();

	system("pause");
	return 0;
}