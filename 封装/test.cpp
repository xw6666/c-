#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//圆周率
#define PI 3.14
//设计一个圆类来求圆的周长
//圆周长:c = 2 * PI * r
//class Circle
//{
//	//访问权限
//	//公共权限
//public:
//	//属性
//	int r;
//	//行为
//	
//	//或许圆的周长
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
//	cout << "半径为" << c.r << "的圆的周长为：" << c.calculateC() << endl;
//
//	system("pause");
//	return 0;
//}


//class Stu
//{
//	//访问权限
//public:
//
//	//类中的属性和行为我们统称为成员
//
//	//属性(成员属性)
//	string name;
//	string id;
//
//	//行为(成员行为 - 成员函数 - 成员方法)
//	void display()
//	{
//		cout << name;
//		cout <<":" << id << endl;
//	}
//
//	//给姓名赋值
//	void setName(string str)
//	{
//		name = str;
//	}
//
//	//给id赋值
//	void setID(string str)
//	{
//		id = str;
//	}
//};
//
//int main()
//{
//	Stu s;
//	s.name = "张三";
//	s.id = "20130227";
//	s.display();
//
//	Stu a;
//	a.name = "李四";
//	a.id = "20130228";
//	a.display();
//
//
//	Stu c;
//	c.setName("王五");
//	c.setID("20130229");
//	c.display();
//
//	return 0;
//}
//
//
//
//
////访问权限
//
////公共权限 - public - 成员类里类外都可以访问
////保护权限 - protected - 成员类内可以访问，类外不能访问 - 儿子可以访问父亲中的保护的内容
////私有权限 - private - 成员类内可以访问，类外不能访问 - 儿子不可以访问父亲的私有内容
//
//class Person
//{
//	//公共权限
//public:
//	string m_name;
//
//	//保护权限
//protected:
//	string m_car;
//
//	//私有权限
//private:
//	string m_wife;
//
//	//类内可以访问
//private:
//	void func()
//	{
//		m_name = "张三";
//		m_car = "拖拉机";
//		m_wife = "李四";
//	}
//};
//
//int main()
//{
//	Person p1; // 实例化具体对象
//	
//	p1.m_name = "晓伍";
//	//p1.m_car = "奔驰"  //保护权限的内容在类外访问不了
//	//p1.m_wife = "樱岛麻衣";  //私有权限的内容类外访问不了
//}


//c++中struct和class区别
//c++中struct默认访问权限为public,class默认访问权限为private

//实例
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


//将成员属性设置为私有
//优点1:将所有成员属性设置为私有，可以自己控制读写权限 - 通过公共接口
//优点2:对于写权限，我们可以检测数据的有效性

//class Person
//{
//public:
//	//写性别
//	void setName(string name)
//	{
//		m_name = name;
//	}
//
//	//获取姓名
//	string getName()
//	{
//		return m_name;
//	}
//
//	//设置年龄
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
//	//读取年龄
//	int getAge()
//	{
//		return m_age;
//	}
//
//	//换老婆
//	void changeWife(string wife)
//	{
//		m_wife = wife;
//	}
//
//
//private:
//	//姓名 - 可读可写
//	string m_name;
//	//年龄 - 可读可写 - 如果想修改，年龄的范围必须是0~150之间
//	int m_age;
//	//老婆 - 只写
//	string m_wife;
//};
//
//int main()
//{
//	Person P;
//	//P.m_name = "晓伍";
//
//	//设置姓名
//	P.setName("晓伍");
//
//	//输出姓名
//	cout << "姓名为：" << P.getName() << endl;
//
//	//设置年龄
//	P.setAge(160);
//	P.setAge(18);
//	//查看年龄
//	cout << "年龄为：" << P.getAge() << endl;
//
//	//设置老婆
//	P.changeWife("樱岛麻衣");
//
//	return 0;
//}


//设计一个立方体类，求出立方体面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等


class Cube
{
public:

	//行为
	//判断是否相等
	bool isSameByClass(Cube& c)
	{
		if (c.getL() == m_l && c.getH() == m_h && c.getW() == m_w)
		{
			return true;
		}

		return false;
	}
	//设置长宽高
	void setLWH(int l, int w, int h)
	{
		m_l = l;
		m_w = w;
		m_h = h;
	}
	//获取长宽高
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
	//获取立方体面积
	int getSurface()
	{
		return 2 * m_l * m_w + 2 * m_l * m_h + 2 * m_h * m_w;
	}
	//获取立方体体积
	int getVulome()
	{
		return m_h * m_w * m_l;
	}
private:
	//属性
	int m_l;
	int m_w;
	int m_h;
};


//利用全局函数判断两个立方体是否相等
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
	//cout << "cube的长为：" << cube.getL() << endl;
	//cout << "cube的宽为：" << cube.getW() << endl;
	//cout << "cube的高为：" << cube.getH() << endl;
	//cout << "cube的面积为：" << cube.getSurface() << endl;
	//cout << "cube的体积为：" << cube.getVulome() << endl;

	Cube cube1;
	cube1.setLWH(1, 2, 3);

	//全局函数判断
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