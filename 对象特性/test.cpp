#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//���캯�� - �൱�ڳ�������  //����(){}
//1.���캯��û�з���ֵҲ��дvoid
//2.����������������ͬ
//3.���캯�������в�������˿��Է�������
//4.�����ڵ��ö����ʱ����Զ����ù��죬�����ֶ����ã�����ֻ�����һ��


//�������� //~����(){}
//1.��������û�з���ֵҲ��дvoid
//2.����������������ͬ��������ǰ��~
//3.���������������в��������Բ���������
//4.�����ڶ�������ǰ���Զ����������������ֶ����ã�����ֻ�����һ��

//����ĳ�ʼ��������

//1.�ù��캯�����г�ʼ��
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Person���캯���ĵ���" << endl;
//	}
//
//	//�������� - ����ǰ����һ��
//	//Ҳ�����ڳ�������ǰ����һ��
//	~Person()
//	{
//		cout << "Person���������ĵ���" << endl;
//	}
//};

//����Լ���д������������ô���������ṩһ����ʵ��
//void test1()
//{
//	Person p1;
//}
//
//int main()
//{
//	test1();
//	//Person p1;
//	system("pause");
//	return 0;
//}



//���캯���ķ���͵���

//���ַ��෽ʽ
//��������Ϊ���вι�����޲ι���
//�����ͷ�Ϊ����ͨ����Ϳ�������

//���ֵ��÷�ʽ
//���ŷ�
//��ʾ��
//��ʽת����


//����
//�������֣��޲ι���(Ĭ�Ϲ���)���вι���
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Person���޲�(Ĭ��)���캯���ĵ���" << endl;
//	}
//
//	//���캯��(�в�)
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person���вι��캯���ĵ���" << endl;
//	}
//
//	//�������캯��
//	Person(const Person& p)//ע������Ĵ���
//	{
//		//�����������ϵ��������ԣ�������������
//		m_age = p.m_age;
//		cout << "Person�������캯���ĵ���" << endl;
//	}
//	~Person()
//	{
//		cout << "Person���������ĵ���" << endl;
//	}
//
//	int m_age;
//};
//
//void test1()
//{
//	//���캯������
//
//	//1.���ŷ�
//	//Person p1;  //Ĭ�Ϲ��캯������
//	//Person p2(10); //�вι��캯������
//	//Person p3(p2); //�������캯������
//
//	//ע�⣺����Ĭ�Ϲ��캯����ʱ��Ҫ��()
//	//Person p1(); - �������д������������Ϊ��һ���������� - ����Ĭ�Ϲ��첻Ҫд����
//	//void func() == Person p1()
//	
//	//cout << "P2������Ϊ��" << p2.m_age << endl;
//	//cout << "P3������Ϊ��" << p3.m_age << endl;
//
//
//	//2.��ʽ��
//	Person p1;
//	Person p2 = Person(10); //�вι���  Person(10)Ϊ�������� - �����н�����ϵͳ������������������
//	Person p3 = Person(p2); //��������
//	cout << "P2������Ϊ��" << p2.m_age << endl;
//	cout << "P3������Ϊ��" << p3.m_age << endl;
//
//	//ע�⣺��Ҫ���ÿ�����������ʼ���������� - ����������Ϊ Person(p3) == Person p3 - �ض���
//	//Person(p3); - ����������Ϊ����һ����������
//
//
//	//������������
//	//Person(10);
//	//cout << "66666" << endl;
//
//	//3.��ʽת����
//
//	Person p4 = 10;  // Person P4 = Person(10); -- ��ʽת��ʽ
//	Person p5 = p4;  //��������
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}
//


//class Person
//{
//public:
//	//Ĭ�Ϲ���
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ������" << endl;
//	}
//	//�вι���
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person���вι������" << endl;
//	}
//	//��������
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person�Ŀ����������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl; 
//	}
//
//	int m_age;
//};
//
//void test1()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}



//������������ʱ��
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person���вι��캯������" << endl;
//	}
//
//	Person(const Person& const p)
//	{
//		m_age = p.m_age;
//		cout << "Person�Ŀ������캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//
//
//	int m_age;
//};
//
//void test1()
//{
//	//ֱ��ʹ�ÿ�������
//	Person p1(10);
//	Person p2(p1);
//}
//
//void test2(Person p)
//{
//	//��ֵ��ʱ��
//}
//
//Person test3()
//{
//	Person p(10);
//	return p;
//}
//
//int main()
//{
//	//test1();
//	//Person p1;
//	test3();
//	system("pause");
//	return 0;
//}




//���캯�����ù���
//1.����һ���࣬c++���ÿ���������������3������
//Ĭ�Ϻ���(��ʵ��)
//��������(��ʵ��)
//��������(ֵ����)


//2.���д���вι��죬c++�����ṩĬ�Ϲ��죬���ǻ��ṩ��������

//3.���д�˿������죬��ô�����ṩĬ�Ϲ���

//class Person
//{
//public:
//	Person()
//	{
//		m_height = NULL;
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	
//	Person(int age, int height)
//	{
//		m_age = age;
//		m_height = new int(height);
//		cout << "Person���вι��캯������" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		//���������
//		m_height = new int(*p.m_height);
//		cout << "Person�Ŀ������캯������" << endl;
//	}
//	~Person()
//	{
//		//�������룬�������Ĵ����ͷ�
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//
//		cout << "Person��������������" << endl;
//	}
//
//	int m_age;
//	int* m_height;
//};
//
//void test1()
//{
//	Person p1(18, 175);
//	Person p2(p1);
//	cout << "p1������Ϊ��" << p1.m_age << endl;
//	cout << "p1�����Ϊ��" << *p1.m_height << endl;
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//	cout << "p2�����Ϊ��" << *p2.m_height << endl;
//}
//
//int main()
//{
//	test1();
//
//	system("pause");
//	return 0;
//}




//��ʼ���б�
//class Person
//{
//public:
//
//	//��ͳ��ʼ������
//	//Person()
//	//{
//	//	 
//	//}
//	
//	//��ʼ���б�
//	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
//	{
//		cout << "" << m_a << " " << m_b << " " << m_c << endl;
//	}
//
//	int m_a;
//	int m_b;
//	int m_c;
//};
//
//void test1()
//{
//	Person p1(44, 5, 6);
//	//cout << "" << p1.m_a << " " << p1.m_b << " " << p1.m_c << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}




//�������Ϊ���Ա

//��ջһ����һ����������б���������ô���������ȹ��죬�ٹ�������
//��Ҫ�������϶��Ǵ�����������
//class Phone
//{
//public:
//	//��ʼ���б�
//	Phone(string PName) :m_PName(PName)
//	{
//		cout << "Phone���вι��캯������" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone��������������" << endl;
//	}
//	string m_PName;
//};
//
//class Person
//{
//public:
//	//�вι��캯�� - ��ʼ���б�
//	//Phone m_PName = PName (��ʽת����)
//	Person(string Name, string PName) : m_Name(Name), m_PName(PName)
//	{
//		cout << m_Name << "����" << m_Name << endl;
//		cout << "Person���вι������" << endl;
//	}
//	
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	//����
//	string m_Name;
//	//�ֻ�
//	Phone m_PName;
//};
//
//int main()
//{
//	Person p("С��", "����");
//	
//	system("pause");
//	return 0;
//}



//��̬��Ա����
//class Person
//{
//public:
//	//���ж��󶼹���ͬһ������
//	//����׶ξͷ����ڴ�
//	//���������������ʼ������
//	static int m_age;
//private:
//	static int m_b;
//};
//
////�����ʼ��
//int Person::m_age = 100;
//int Person::m_b = 0;
//int main()
//{
//	//ͨ��������з���
//	Person p;
//	p.m_age = 20;
//	cout << p.m_age << endl;
//
//	//ͨ���������з���
//	cout << Person::m_age << endl;
//	//��̬��Ա��������Ȩ��
//	//cout << Person::m_b << endl;
//	return 0;
//}


//��̬��Ա����
//1.���ж��󶼹���һ����̬��Ա����
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

//class Person
//{
//public:
//	static void initA(int A)
//	{
//		//��������ʾ�̬��Ա��������ô�޷�ʵ�����ж�����һ����̬��Ա��������Ϊÿ����Ա��m_A��ͬ
//		m_A = A;
//	}
//
//	static int m_A;
//};
//
//int Person::m_A = 0;
//
//int main()
//{
//	Person p;
//	//p.initA(90); // ͨ���������
//
//	Person::initA(100);  //ͨ����������
//
//	//ͬ���ģ���̬��Ա����Ҳ�з���Ȩ��
//
//
//	cout << p.m_A << endl;
//	return 0;
//}



//c++����ģ�ͺ�thisָ��

//��Ա�����ͳ�Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա������������Ķ�����

//class Person
//{
//public:
//	void func() //��������Ķ�����
//	{
//
//	}
//
//	int m_a;//������Ķ�����
//
//	static int m_b; //��������Ķ�����
//};
//
//int Person::m_b = 10;
//
//int main()
//{
//	Person p;
//	//�ն���ռ�Ϊһ���ֽ� - c++���������ÿ���ն������һ���ֽڵĿռ䣬Ϊ�����ֿն������ڴ��λ��
//	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ(��������)
//	cout << "sizeof(p) = " << sizeof(p) << endl;
//
//	return 0;
//}

//thisָ��

//1.��ֹ����
//class Person
//{
//public:
//	Person()
//	{
//
//	}
//	Person(const Person& p)
//	{
//		age = p.age;
//	}
//	void setAge(int age)
//	{
//		//thisָ��ö����еĳ�Ա����
//		this->age = age;
//	}
//	//ע����*this����һ��������
//	Person& addAge(Person& p)
//	{
//		age += p.age;
//
//		return *this;
//	}
//
//	int age;
//};
//
//int main()
//{
//	Person p1;
//	p1.setAge(10);
//	Person p2;
//	p2.setAge(10);
//
//	p2.addAge(p1).addAge(p1).addAge(p1).addAge(p1);
//	cout << p2.age << endl;
//	return 0;
//}




//��ָ����ʳ�Ա����
//ע�⺯�����ڲ��Ƿ��õ�this

//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "This is Person class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		//���ζ���Ϊ�գ�û�п��Է��ʵĳ�Ա����
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age = " << m_age << endl;
//	}
//
//	int m_age;
//};
//
//int main()
//{
//	Person* p = NULL;
//	p->showClassName();
//	p->showPersonAge();
//	return 0;
//}

