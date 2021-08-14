#define _CRT_SECURE_NO_WARNINGS 1
//多态好处：
//1.代码结构清晰
//2.可读性强
//3.前期和后期维护性高

#include <iostream>
#include <string>
using namespace std;
//计算器类 - 传统写法
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


//计算器类 - 多态
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



//制作饮品案例
//提供制作过程基类：煮水 - 冲泡 - 倒入杯中 - 加入辅料

//class Drink
//{
//public:
//	//煮水
//	void boilWater()
//	{
//		cout << "烧开水" << endl;
//	}
//	//冲泡
//	virtual void pourWater() = 0;
//	//倒入杯中
//	void pourToCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//加入辅料
//	virtual void addSome() = 0;
//
//	//这里直接做函数整合
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
//		cout << "冲泡咖啡" << endl;
//	}
//
//	virtual void addSome()
//	{
//		cout << "加糖和牛奶" << endl;
//	}
//};
//
//class Tea : public Drink
//{
//public:
//	virtual void pourWater()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	virtual void addSome()
//	{
//		cout << "加柠檬" << endl;
//	}
//};
//
//class MilkTea : public Drink
//{
//public:
//	virtual void pourWater()
//	{
//		cout << "冲泡奶茶粉" << endl;
//	}
//
//	virtual void addSome()
//	{
//		cout << "加入珍珠和椰果" << endl;
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
//	cout << "做咖啡步骤如下：" << endl;
//	doWork(new Coffee);
//	cout << "----------------------------" << endl;
//	cout << "做茶步骤如下：" << endl;
//	doWork(new Tea);
//	cout << "----------------------------" << endl;
//	cout << "做奶茶步骤如下：" << endl;
//	doWork(new MilkTea);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}



//电脑组装类

//CPU抽象类
class CPU
{
public:
	//计算函数
	virtual void caculate() = 0;
};

//显卡抽象类
class VideoCard
{
public:
	//显示函数
	virtual void display() = 0;
};

//内存条抽象类
class Memory
{
public:
	virtual void begin() = 0;
};

class IntelCPU : public CPU
{
	void caculate()
	{
		cout << "英特尔CPU开始计算" << endl;
	}
};

class AMDCPU : public CPU
{
	void caculate()
	{
		cout << "AMDCPU开始计算" << endl;
	}
};

class IntelGPU : public VideoCard
{
	void display()
	{
		cout << "英特尔显卡开始显示" << endl;
	}
};

class AMDGPU : public VideoCard
{
	void display()
	{
		cout << "AMD显卡开始显示" << endl;
	}
};

class SAMSUNGMemory : public Memory
{
	void begin()
	{
		cout << "三星内存启动" << endl;
	}
};

class KingsTomMemory : public Memory
{
	void begin()
	{
		cout << "金士顿内存启动" << endl;
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