#define _CRT_SECURE_NO_WARNINGS 1
//��̬�ô���
//1.����ṹ����
//2.�ɶ���ǿ
//3.ǰ�ںͺ���ά���Ը�

#include <iostream>
#include <string>
using namespace std;
//�������� - ��ͳд��
//class Caculator
//{
//public:
//	int getResult(string s)
//	{
//		if (s == "+")
//		{
//			return m_A + m_B;
//		}
//		else if (s == "-")
//		{
//			return m_A - m_B;
//		}
//		else if (s == "*")
//		{
//			return m_A * m_B;
//		}
//	}
//
//	int m_A;
//	int m_B;
//};


//�������� - ��̬
//class AbstractCaculator
//{
//public:
//	virtual int getResult(string s)
//	{
//		return 0;
//	}
//
//	int m_A;
//	int m_B;
//};
//
//class AddCaculator : public AbstractCaculator
//{
//public:
//	int getResult(string s)
//	{
//		return m_A + m_B;
//	}
//};
//
//class SubCaculator : public AbstractCaculator
//{
//public:
//	int getResult(string s)
//	{
//		return m_A - m_B;
//	}
//};
//
//class MulCaculator : public AbstractCaculator
//{
//public:
//	int getResult(string s)
//	{
//		return m_A * m_B;
//	}
//};
//
//void test1()
//{
//	Caculator c;
//	c.m_A = 10;
//	c.m_B = 10;
//	cout << c.m_A << " + " << c.m_B << " = " << c.getResult("+") << endl;
//	cout << c.m_A << " - " << c.m_B << " = " << c.getResult("-") << endl;
//	cout << c.m_A << " * " << c.m_B << " = " << c.getResult("*") << endl;
//}
//
//void test2()
//{
//	AbstractCaculator* caculator = new AddCaculator;
//	caculator->m_A = 20;
//	caculator->m_B = 30;
//	cout << caculator->m_A << " + " << caculator->m_B << " = " << caculator->getResult("+") << endl;
//	
//	caculator = new SubCaculator;
//	caculator->m_A = 20;
//	caculator->m_B = 30;
//	cout << caculator->m_A << " - " << caculator->m_B << " = " << caculator->getResult("-") << endl;
//
//	caculator = new MulCaculator;
//	caculator->m_A = 20;
//	caculator->m_B = 30;
//	cout << caculator->m_A << " * " << caculator->m_B << " = " << caculator->getResult("*") << endl;
//}
//
//int main()
//{
//	test2();
//	//test1();
//	return 0;
//}



//������Ʒ����
//�ṩ�������̻��ࣺ��ˮ - ���� - ���뱭�� - ���븨��

//class Drink
//{
//public:
//	//��ˮ
//	void boilWater()
//	{
//		cout << "�տ�ˮ" << endl;
//	}
//	//����
//	virtual void pourWater() = 0;
//	//���뱭��
//	void pourToCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//���븨��
//	virtual void addSome() = 0;
//
//	//����ֱ������������
//	void makeDrink()
//	{
//		boilWater();
//		pourWater();
//		pourToCup();
//		addSome();
//	}
//};
//
//class Coffee : public Drink
//{
//public:
//	virtual void pourWater()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	virtual void addSome()
//	{
//		cout << "���Ǻ�ţ��" << endl;
//	}
//};
//
//class Tea : public Drink
//{
//public:
//	virtual void pourWater()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	virtual void addSome()
//	{
//		cout << "������" << endl;
//	}
//};
//
//class MilkTea : public Drink
//{
//public:
//	virtual void pourWater()
//	{
//		cout << "�����̲��" << endl;
//	}
//
//	virtual void addSome()
//	{
//		cout << "���������Ҭ��" << endl;
//	}
//};
//
//void doWork(Drink* abs)
//{
//	abs->makeDrink();
//	delete abs;
//}
//
//void test1()
//{
//	cout << "�����Ȳ������£�" << endl;
//	doWork(new Coffee);
//	cout << "----------------------------" << endl;
//	cout << "���貽�����£�" << endl;
//	doWork(new Tea);
//	cout << "----------------------------" << endl;
//	cout << "���̲貽�����£�" << endl;
//	doWork(new MilkTea);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}



//������װ��

//CPU������
class CPU
{
public:
	//���㺯��
	virtual void caculate() = 0;
};

//�Կ�������
class VideoCard
{
public:
	//��ʾ����
	virtual void display() = 0;
};

//�ڴ���������
class Memory
{
public:
	virtual void begin() = 0;
};

class IntelCPU : public CPU
{
	void caculate()
	{
		cout << "Ӣ�ض�CPU��ʼ����" << endl;
	}
};

class AMDCPU : public CPU
{
	void caculate()
	{
		cout << "AMDCPU��ʼ����" << endl;
	}
};

class IntelGPU : public VideoCard
{
	void display()
	{
		cout << "Ӣ�ض��Կ���ʼ��ʾ" << endl;
	}
};

class AMDGPU : public VideoCard
{
	void display()
	{
		cout << "AMD�Կ���ʼ��ʾ" << endl;
	}
};

class SAMSUNGMemory : public Memory
{
	void begin()
	{
		cout << "�����ڴ�����" << endl;
	}
};

class KingsTomMemory : public Memory
{
	void begin()
	{
		cout << "��ʿ���ڴ�����" << endl;
	}
};

class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mm)
	{
		m_CPU = cpu;
		m_vc = vc;
		m_mm = mm;
	}

	~Computer()
	{
		if (m_CPU)
		{
			delete m_CPU;
			m_CPU = NULL;
		}
		if (m_vc)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mm)
		{
			delete m_mm;
			m_mm = NULL;
		}
	}

	void dowork()
	{
		m_mm->begin();
		m_CPU->caculate();
		m_vc->display();
	}

	CPU* m_CPU;
	VideoCard* m_vc;
	Memory* m_mm;
};


int main()
{
	Computer computer1(new IntelCPU, new IntelGPU, new SAMSUNGMemory);
	computer1.dowork();
	cout << "----------------------------------------------------------" << endl;
	Computer computer2(new AMDCPU, new AMDGPU, new KingsTomMemory);
	computer2.dowork();
	Computer computer3(new AMDCPU, new IntelGPU, new SAMSUNGMemory);
	cout << "----------------------------------------------------------" << endl;
	computer3.dowork();
	return 0;
}