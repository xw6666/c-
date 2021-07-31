#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class Circle
{
public:
	//��Ϊ
	//����Բ�ĺ�����
	void setX(int x)
	{
		m_centerx = x;
	}
	//����Բ��������
	void setY(int y)
	{
		m_certery = y;
	}
	//����Բ�뾶
	void setR(int r)
	{
		m_r = r;
	}

	//����Բ�뾶
	int getR()
	{
		return m_r;
	}
	//����Բ�ĺ�����
	int getX()
	{
		return m_centerx;
	}
	//����Բ��������
	int getY()
	{
		return m_certery;
	}

private:
	//����

	//�뾶
	int m_r;
	//Բ������
	int m_centerx;
	int m_certery;
};

class Point
{
public:
	//д�������
	void setX(int x)
	{
		m_x = x;
	}
	//д��������
	void setY(int y)
	{
		m_y = y;
	}
	//�жϵ���Բ�Ĺ�ϵ
	void judgeRelation(Circle& c)
	{
		int len = (m_x - c.getX()) * (m_x - c.getX()) + (m_y - c.getY()) * (m_y - c.getY());
		if (len == (c.getR() * c.getR()))
		{
			cout << "����Բ��" << endl;
		}
		else if (len > (c.getR() * c.getR()))
		{
			cout << "����Բ��" << endl;
		}
		else
		{
			cout << "����Բ��" << endl;
		}
	}
	
private:
	int m_x;
	int m_y;
};

int main()
{
	Circle c1;
	c1.setX(0);
	c1.setY(0);
	c1.setR(2);

	Point p1;
	p1.setX(2);
	p1.setY(2);
	p1.judgeRelation(c1);

	system("pause");
	return 0;
}