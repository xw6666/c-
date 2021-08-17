#include <iostream>
#include <string>
using namespace std;

//��ģ��
//template <class T>
//��
//template <class NameType, class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		m_Age = age;
//		m_Name = name;
//	}
//	void showData()
//	{
//		cout << "������" << m_Name << endl;
//		cout << "���䣺" << m_Age << endl;
//	}
//private:
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test1()
//{
//	Person<string, int> p("����", 20);  //��Ҫ ���ģ��Ĳ����б�
//	p.showData();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}



//��ģ��ͺ���ģ�������
//1.��ģ�岻���Զ������Ƶ�ʹ��
//2.��ģ����ģ������б��п�����Ĭ�ϲ���

//template <class NameType = string, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		m_Age = age;
//		m_Name = name;
//	}
//	void showData()
//	{
//		cout << "������" << m_Name << endl;
//		cout << "���䣺" << m_Age << endl;
//	}
//private:
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void test1()
//{
//	//Person p1("����", 20); //err - ��ģ��û���Զ������Ƶ�����
//	Person<string, int> p1("����", 20);
//	p1.showData();
//}
//
//void test2()
//{
//	//��ģ����ģ������б�����Ĭ�ϲ���
//	Person<> p("����", 20); //��ģ���б�Ҳû��ϵ����Ϊ��Ĭ�Ϲ�ϵ�����Ǳ���Ҫ��ģ���б�
//	p.showData();
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//��ģ���Ա��������һ��ʼ�ʹ����ģ������ڵ��ý׶δ�������

//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "showPerson1��������" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "showPerson2��������" << endl;
//	}
//};
//
//template <class T>
//class MyClass
//{
//public:
//	T obj;
//	void func1()
//	{
//		obj.showPerson1();
//	}
//
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//int main()
//{
//	MyClass<Person1> mc;
//	mc.func1();
//	mc.func2(); //����˵��������ʱ�������⣬����ʱ����û�������������
//	return 0;
//}



//��ģ���������������
template <class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showData()
	{
		cout << "����Ϊ��" << m_Name << endl;
		cout << "����Ϊ" << m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//ָ����������
void print1(Person<string, int>& p)
{
	p.showData();
}

//����ģ�廯
template <class T1, class T2>
void print2(Person<T1, T2>& p)
{
	p.showData();
}

//��ģ�廯
template <class T>
void print3(T& p)
{
	p.showData();
}

int main()
{
	Person<string, int> p("����", 20);
	print1(p);
	print2(p);
	print3(p);

	return 0;
}