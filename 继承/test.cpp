#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//�̳л����﷨
//class ���� ���̳з�ʽ ����

//����ҳ��
//class Basecontent
//{
//public:
//	void head()
//	{
//		cout << "ҳ���ϲ�����" << endl;
//	}
//
//	void foot()
//	{
//		cout << "ҳ���²�����" << endl;
//	}
//
//	void left()
//	{
//		cout << "ҳ��������" << endl;
//	}
//
//	void right()
//	{
//		cout << "ҳ���Ҳ�����" << endl;
//	}
//};
//class Java : public Basecontent
//{
//public:
//	void middle()
//	{
//		cout << "Javaҳ���в�����" << endl;
//	}
//};
//
//class Cpp : public Basecontent
//{
//public:
//	void middle()
//	{
//		cout << "C++ҳ���в�����" << endl;
//	}
//};
//
//class Python : public Basecontent
//{
//public:
//	void middle()
//	{
//		cout << "Pythonҳ���в�����" << endl;
//	}
//};
//int main()
//{
//	Java java;
//	cout << "Java��Ƶҳ���������£�" << endl;
//	java.head();
//	java.foot();
//	java.left();
//	java.right();
//	java.middle();
//	cout << "------------------------------" << endl;
//	Cpp cpp;
//	cout << "C++��Ƶҳ���������£�" << endl;
//	cpp.head();
//	cpp.foot();
//	cpp.left();
//	cpp.right();
//	cpp.middle();
//	cout << "------------------------------" << endl;
//	Python python;
//	cout << "Python��Ƶҳ���������£�" << endl;
//	python.head();
//	python.foot();
//	python.left();
//	python.right();
//	python.middle();
//	return 0;
//}


//�̳з���
//���������private���̳к�������ʲ���
//����ǹ����̳У�����̳еõ��Ķ���Ȩ�޲��䣬˽�����ݷ��ʲ���
//����Ǳ����̳У�����˽�еĶ������ɷ��ʣ��������䱣��Ȩ��
//�����˽�м̳У�����˽�еĶ������ɷ��ʣ������Ķ���˽��Ȩ�� 

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//�����̳�
//class Son1 : public Base1
//{
//public:
//	Son1()
//	{
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;  //˽�����ݼ̳в�����
//	}
//};
//
////�����̳�
//class Son2 : protected Base1
//{
//public:
//	Son2()
//	{
//		m_A = 10;
//		m_B = 10;
//		//m_C = 10;  //˽�����ݼ̳в�����
//	}
//};
//
//class Son3 : private Base1
//{
//public:
//	Son3()
//	{
//		m_A = 20;
//		m_B = 20;
//	}
//};
//
//class Son4 : private Son3
//{
//public:
//	Son4()
//	{
//
//		//m_A = 30;  //֤����Son3�̳е��������ݾ���Ϊ˽��Ȩ��
//	}
//};
//
//int main()
//{
//	Son1 son1;
//	son1.m_A = 100;
//	//son.n_B = 200; //�����̳еõ��Ļ��Ǳ���Ȩ��
//	Son2 son2;
//	//son2.m_A = 3; // �����̳еõ���ȫ���䱣��
//	return 0;
//}


//���������Ǽ̳к󣬸����˽�����Ե����Ǳ��̳��˺����أ����Ǹ�����û�̳�
//ͨ��������Ա������ʾ���߲鿴����ģ��
//��ת��
//��ת·�� cd
//�鿴���� cl /d1 reportSingleClssLayout���� �����ļ��� 



//�̳��еĹ��������
//class Dad
//{
//public:
//	Dad()
//	{
//		cout << "Dad�Ĺ��캯������" << endl;
//	}
//
//	~Dad()
//	{
//		cout << "Dad��������������" << endl;
//	}
//public:
//	int m_A;
//};
//
//class Son : public Dad
//{
//public:
//	Son()
//	{
//		cout << "Son�Ĺ��캯������" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son��������������" << endl;
//	}
//};
//
//int main()
//{
//	Son son;
//
//	return 0;
//}


//�̳���ͬ����Ա����ʽ
//������������г����˸���ͬ����Ա��������ô�����Ա���������ص����еĸ����Ա����
//���������ʱ���������Щ���صĺ�������Ҫ ��������
//class Dad
//{
//public:
//	Dad()
//	{
//		m_A = 10;
//	}
//	void func()
//	{
//		cout << "Dad�ĺ�������" << endl;
//	}
//	void func(int a)
//	{
//		m_A = a;
//		cout << "Dad�вκ�������" << endl;
//	}
//public:
//	int m_A;
//};
//
//class Son : public Dad
//{
//public:
//	Son()
//	{
//		m_A = 20;
//	}
//
//	void func()
//	{
//		cout << "Son�ĺ�������" << endl;
//	}
//	int m_A;
//};
//
//int main()
//{
//	Son son;
//
//	cout << son.m_A << endl;
//	cout << son.Dad::m_A << endl;  //���ʸ���ͬ��������Ҫ����������
//	son.func();
//	//son.func(50);   //�����е�ͬ�������̳к�����
//	son.Dad::func(50);
//	cout << son.Dad::m_A << endl;
//	return 0;
//}



//�̳��е�ͬ����̬��Ա
//class Dad
//{
//public:
//	static void func()
//	{
//		cout << "Dad - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Dad - static void func(int a)" << endl;
//	}
//	static int m_A;
//};
//
//int Dad::m_A = 10;
//
//class Son : public Dad
//{
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int m_A;
//};
//
//int Son::m_A = 20;
//
//void test1()
//{
//	//ͨ���������ͬ����̬��Ա����
//	Son son;
//	cout << "Son�µ�m_A = " << son.m_A << endl;
//	cout <<"Dad�µ�m_A = " << son.Dad::m_A << endl;
//	//ͨ����������ͬ����̬��Ա����
//	cout << "Son�µ�m_A = " << Son::m_A << endl;
//	cout << "Dad�µ�m_A = " << Son::Dad::m_A << endl;
//}
//
//void test2()
//{
//	//ͨ���������ͬ����̬��Ա��Ϊ
//	Son son;
//	son.func();
//	//son.func(50); //��Ϊ�̳е�ͬ���������������ˣ����Բ���son�����أ�������������
//	son.Dad::func();
//	son.Dad::func(50);
//	cout << "------------------------------------" << endl;
//	//ͨ����������
//	Son::func();
//	Son::Dad::func();
//	Son::Dad::func(50);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//��̳��﷨

//class ���� : �̳з�ʽ ����1, �̳з�ʽ ����2 
//ʵ�ʿ����������� - ��ΪҪ�Ǹ��������ظ���������Ϊ����ȥ���֣����鷳

//class Dad1
//{
//public:
//	Dad1()
//	{
//		m_A = 10;
//	}
//	int m_A;
//};
//
//class Dad2
//{
//public:
//	Dad2()
//	{
//		m_A = 20;
//	}
//	int m_A;
//};
//
//class Son : public Dad1, public Dad2
//{
//public:
//	Son()
//	{
//		m_C = 30;
//		m_D = 40;
//	}
//	int m_C;
//	int m_D;
//};
//
//int main()
//{	
//	Son son;
//	cout << son.Dad1::m_A << endl;  //ע������̳еõ���m_A��������Ҫ������������
//	cout << son.Dad2::m_A << endl;
//	cout << son.m_C << endl;
//	cout << son.m_D << endl;
//	return 0;
//}



//���μ̳�
//class Animal
//{
//public:
//	Animal()
//	{
//		m_Age = 18;
//	}
//	int m_Age;
//};
//
//class Sheep : virtual public Animal
//{
//public:
//	Sheep()
//	{
//		m_Age = 18;
//	}
//};
//
//class Camel : virtual public Animal
//{
//public:
//	Camel()
//	{
//		m_Age = 20;
//	}
//};
//
////��ʱ��ͨ����̳з�ʽ�����������
////�̳�ʱʹ��virtual�ؼ�������
////Animal���ʱ��Ϊ�����
//class SheepCamel : public Sheep, public Camel
//{
//public:
//	SheepCamel()
//	{
//		//��ʱ�����Ǽ̳���������ͬ�����ԣ���������ֻ��Ҫһ���������Ծ�����
//		//Camel::m_Age = 25;
//		//Sheep::m_Age = 25;
//
//		//�̳�AnimalʱAnimal��virtual���ι���
//		m_Age = 25;  //�ɹ� - ��������Ϊvirtual�̳е�ʱ�������õ���ָ��
//		//ͨ�����μ̳л���ʱ��m_Ageָ�����ͬһ�����ԣ�û�ж�����
//	}
//};

//class Dad
//{
//public:
//	Dad()
//	{
//		m_A = 10;
//	}
//	int  m_A;
//};
//
//class Son : public Dad
//{
//public:
//	int m_B;
//};
//
//int main()
//{
//	Son son;
//	son.m_B = 20;
//	cout << son.m_A << endl;
//	cout << son.m_B << endl;
//	return 0;
//}