#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//Բ����
#define PI 3.14
//���һ��Բ������Բ���ܳ�
//Բ�ܳ�:c = 2 * PI * r
//class Circle
//{
//	//����Ȩ��
//	//����Ȩ��
//public:
//	//����
//	int r;
//	//��Ϊ
//	
//	//����Բ���ܳ�
//	double calculateC()
//	{
//		return 2 * PI * r;
//	}
//};
//
//int main()
//{
//	Circle c;
//
//	c.r = 10;
//	cout << "�뾶Ϊ" << c.r << "��Բ���ܳ�Ϊ��" << c.calculateC() << endl;
//
//	system("pause");
//	return 0;
//}


//class Stu
//{
//	//����Ȩ��
//public:
//
//	//���е����Ժ���Ϊ����ͳ��Ϊ��Ա
//
//	//����(��Ա����)
//	string name;
//	string id;
//
//	//��Ϊ(��Ա��Ϊ - ��Ա���� - ��Ա����)
//	void display()
//	{
//		cout << name;
//		cout <<":" << id << endl;
//	}
//
//	//��������ֵ
//	void setName(string str)
//	{
//		name = str;
//	}
//
//	//��id��ֵ
//	void setID(string str)
//	{
//		id = str;
//	}
//};
//
//int main()
//{
//	Stu s;
//	s.name = "����";
//	s.id = "20130227";
//	s.display();
//
//	Stu a;
//	a.name = "����";
//	a.id = "20130228";
//	a.display();
//
//
//	Stu c;
//	c.setName("����");
//	c.setID("20130229");
//	c.display();
//
//	return 0;
//}
//
//
//
//
////����Ȩ��
//
////����Ȩ�� - public - ��Ա�������ⶼ���Է���
////����Ȩ�� - protected - ��Ա���ڿ��Է��ʣ����ⲻ�ܷ��� - ���ӿ��Է��ʸ����еı���������
////˽��Ȩ�� - private - ��Ա���ڿ��Է��ʣ����ⲻ�ܷ��� - ���Ӳ����Է��ʸ��׵�˽������
//
//class Person
//{
//	//����Ȩ��
//public:
//	string m_name;
//
//	//����Ȩ��
//protected:
//	string m_car;
//
//	//˽��Ȩ��
//private:
//	string m_wife;
//
//	//���ڿ��Է���
//private:
//	void func()
//	{
//		m_name = "����";
//		m_car = "������";
//		m_wife = "����";
//	}
//};
//
//int main()
//{
//	Person p1; // ʵ�����������
//	
//	p1.m_name = "����";
//	//p1.m_car = "����"  //����Ȩ�޵�������������ʲ���
//	//p1.m_wife = "ӣ������";  //˽��Ȩ�޵�����������ʲ���
//}


//c++��struct��class����
//c++��structĬ�Ϸ���Ȩ��Ϊpublic,classĬ�Ϸ���Ȩ��Ϊprivate

//ʵ��
//class c1
//{
//	int m_a;
//};
//
//struct c2
//{
//	int m_a;
//};
//
//int main()
//{
//	c1 c_1;
//	c_1.m_a = 5;
//
//	c2 c_2;
//	c_2.m_a = 5;
//	return 0;
//}


//����Ա��������Ϊ˽��
//�ŵ�1:�����г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ�� - ͨ�������ӿ�
//�ŵ�2:����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

//class Person
//{
//public:
//	//д�Ա�
//	void setName(string name)
//	{
//		m_name = name;
//	}
//
//	//��ȡ����
//	string getName()
//	{
//		return m_name;
//	}
//
//	//��������
//	void setAge(int age)
//	{
//		if (age < 0 || age >150)
//		{
//			cout << "err" << endl;
//			return;
//		}
//
//		m_age = age;
//	}
//
//	//��ȡ����
//	int getAge()
//	{
//		return m_age;
//	}
//
//	//������
//	void changeWife(string wife)
//	{
//		m_wife = wife;
//	}
//
//
//private:
//	//���� - �ɶ���д
//	string m_name;
//	//���� - �ɶ���д - ������޸ģ�����ķ�Χ������0~150֮��
//	int m_age;
//	//���� - ֻд
//	string m_wife;
//};
//
//int main()
//{
//	Person P;
//	//P.m_name = "����";
//
//	//��������
//	P.setName("����");
//
//	//�������
//	cout << "����Ϊ��" << P.getName() << endl;
//
//	//��������
//	P.setAge(160);
//	P.setAge(18);
//	//�鿴����
//	cout << "����Ϊ��" << P.getAge() << endl;
//
//	//��������
//	P.changeWife("ӣ������");
//
//	return 0;
//}


//���һ���������࣬�����������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����


class Cube
{
public:

	//��Ϊ
	//�ж��Ƿ����
	bool isSameByClass(Cube& c)
	{
		if (c.getL() == m_l && c.getH() == m_h && c.getW() == m_w)
		{
			return true;
		}

		return false;
	}
	//���ó����
	void setLWH(int l, int w, int h)
	{
		m_l = l;
		m_w = w;
		m_h = h;
	}
	//��ȡ�����
	int getL()
	{
		return m_l;
	}
	int getW()
	{
		return m_w;
	}
	int getH()
	{
		return m_h;
	}
	//��ȡ���������
	int getSurface()
	{
		return 2 * m_l * m_w + 2 * m_l * m_h + 2 * m_h * m_w;
	}
	//��ȡ���������
	int getVulome()
	{
		return m_h * m_w * m_l;
	}
private:
	//����
	int m_l;
	int m_w;
	int m_h;
};


//����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
	{
		return true;
	}

	return false;
}

int main()
{
	Cube cube2;
	cube2.setLWH(1, 2, 3);
	//cout << "cube�ĳ�Ϊ��" << cube.getL() << endl;
	//cout << "cube�Ŀ�Ϊ��" << cube.getW() << endl;
	//cout << "cube�ĸ�Ϊ��" << cube.getH() << endl;
	//cout << "cube�����Ϊ��" << cube.getSurface() << endl;
	//cout << "cube�����Ϊ��" << cube.getVulome() << endl;

	Cube cube1;
	cube1.setLWH(1, 2, 3);

	//ȫ�ֺ����ж�
	if (isSame(cube1, cube2))
	{
		cout << "Same." << endl;
	}
	else
	{
		cout << "Not same." << endl;
	}

	int ret = cube1.isSameByClass(cube2);
	if (ret)
	{
		cout << "Same." << endl;
	}
	else
	{
		cout << "Not same." << endl;
	}
	return 0;
}