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
//template <class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	void showData()
//	{
//		cout << "����Ϊ��" << m_Name << endl;
//		cout << "����Ϊ" << m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////ָ����������
//void print1(Person<string, int>& p)
//{
//	p.showData();
//}
//
////����ģ�廯
//template <class T1, class T2>
//void print2(Person<T1, T2>& p)
//{
//	p.showData();
//}
//
////��ģ�廯
//template <class T>
//void print3(T& p)
//{
//	p.showData();
//}
//
//int main()
//{
//	Person<string, int> p("����", 20);
//	print1(p);
//	print2(p);
//	print3(p);
//
//	return 0;
//}


//��ģ����̳�
//template <class T>
//class Base
//{
//public:
//	T a;
//};
//
////Ҫ�̳�ģ���࣬Ҫ��Ҫ���������б�Ҫ��Ҳģ�廯
////1.���������б�
//class Son1 : Base<int>
//{
//public:
//
//	Son1()
//	{
//		a = 10;
//		cout << "a = " << a << endl;
//	}
//};
//
//template <class T1, class T2>
//class Son2 : Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1����������Ϊ��" << typeid(T1).name() << endl;
//		cout << "T2����������Ϊ��" << typeid(T2).name() << endl;
//	}
//	T1 m_A;
//};
//
//int main()
//{
//	//Son1 son1;
//	//Son2<string, int> son2;
//	
//
//	return 0;
//}


//��ģ���Ա��������ʵ��
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "����Ϊ��" << m_Name << endl;
//	cout << "����Ϊ��" << m_Age << endl;
//}
//
//int main()
//{
//	Person<string, int> p1("����", 20);
//	p1.showPerson();
//	return 0;
//}





//��ģ����ļ���д
//������ģ��ĳ�Ա������������ʱ�Ŵ����ģ�������ļ���д�����ӽ׶λ������
//����.cppԴ�ļ�
//д��һ���ļ��У�����.hpp


template <class T1, class T2>
class Person;

template <class T1, class T2>  //ע���������Ҫд�����б��ʾPerson��ģ����
void showPerson2(Person<T1, T2>& p)
{
	cout << "����Ϊ��" << p.m_Name << endl;
	cout << "����Ϊ��" << p.m_Age << endl;
}

//��ģ������Ԫ
template <class T1, class T2>
class Person
{
public:
	//����ʵ��ȫ�ֺ���
	friend void showPerson1(Person& p)
	{
		cout << "����Ϊ��" << p.m_Name << endl;
		cout << "����Ϊ��" << p.m_Age << endl;
	}

	//����ʵ��ȫ�ֺ��� - ��ʱҪ��ǰ���߱��������������������Ҫ��������ʵ��
	friend void showPerson2<>(Person& p);

	T1 m_Name;
	T2 m_Age;
};

int main()
{
	Person<string, int> p;
	p.m_Age = 20;
	p.m_Name = "Tom";
	showPerson1(p);
	showPerson2(p);
	
	return 0;
}