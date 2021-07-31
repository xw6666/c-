#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class Circle
{
public:
	//行为
	//设置圆心横坐标
	void setX(int x)
	{
		m_centerx = x;
	}
	//设置圆心纵坐标
	void setY(int y)
	{
		m_certery = y;
	}
	//设置圆半径
	void setR(int r)
	{
		m_r = r;
	}

	//访问圆半径
	int getR()
	{
		return m_r;
	}
	//访问圆心横坐标
	int getX()
	{
		return m_centerx;
	}
	//访问圆心纵坐标
	int getY()
	{
		return m_certery;
	}

private:
	//属性

	//半径
	int m_r;
	//圆心坐标
	int m_centerx;
	int m_certery;
};

class Point
{
public:
	//写入横坐标
	void setX(int x)
	{
		m_x = x;
	}
	//写入纵坐标
	void setY(int y)
	{
		m_y = y;
	}
	//判断点与圆的关系
	void judgeRelation(Circle& c)
	{
		int len = (m_x - c.getX()) * (m_x - c.getX()) + (m_y - c.getY()) * (m_y - c.getY());
		if (len == (c.getR() * c.getR()))
		{
			cout << "点在圆上" << endl;
		}
		else if (len > (c.getR() * c.getR()))
		{
			cout << "点在圆外" << endl;
		}
		else
		{
			cout << "点在圆内" << endl;
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