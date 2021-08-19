#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>
//void print(int a)
//{
//	cout << a << " ";
//}
//
//int main()
//{
//	//创建vector容器对象，通过模板设置存放元素类型
//	vector<int> v;
//
//	//在容器中插入数据
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//
//	//遍历打印 - 通过迭代器while循环
//	vector<int>::iterator itbegin = v.begin();
//	vector<int>::iterator itend = v.end();
//	while (itbegin < itend)
//	{
//		cout << *itbegin << " ";
//		itbegin++;
//	}
//	cout << endl;
//
//	//遍历打印 - 通过迭代器for循环
//	for (vector<int>::iterator itbegin = v.begin(); itbegin != v.end(); itbegin++)
//	{
//		cout << *itbegin << " ";
//	}
//	cout << endl;
//
//	//遍历打印 - 通过迭代器与算法(回调函数技术)
//	for_each(v.begin(), v.end(), print);
//
//
//	return 0;
//}



//vector容器存放自定义类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test1()
//{
//	//创建一个存放Person类型的vector容器
//	vector<Person> v;  
//
//	//在容器里面添加数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//遍历访问
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名为：" << it->m_Name << " 年龄为：" << it->m_Age << endl;
//	}
//}
//
//void test2()
//{
//	//创建一个存放Person*类型的vector容器
//	vector<Person*> v;
//
//	//在容器里面添加数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//遍历访问
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名为：" << (*it)->m_Name << " 年龄为：" << (*it)->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//容器嵌套容器
void test1()
{
	vector<vector<int>> v;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//遍历打印
	for (vector<vector<int>>::iterator it1 = v.begin(); it1 != v.end(); it1++)
	{
		for (vector<int>::iterator it2 = it1->begin(); it2 != it1->end(); it2++)
		{
			cout << *it2 << " ";
		}

		cout << endl;
	}
}

int main()
{
	test1();
	return 0;
}