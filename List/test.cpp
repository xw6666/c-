#include <iostream>
using namespace std;
#include <list>
#include <string>

void printList(list<int> &l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//list的构造函数
void test1()
{
	//默认
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//打印 
	printList(l1);

	//区间构造 
	list<int> l2(l1.begin(), l1.end());
	printList(l2);

	//拷贝构造
	list<int> l3(l2);
	printList(l3);

	//n个element
	list<int> l4(10, 200);  //10个200
	printList(l4);
}

//赋值
void test2()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	
	//operator=重载
	list<int> l2 = l1;
	printList(l1);
	printList(l2);

	//assign
	list<int> l3;
	l3.assign(l2.begin(), l2.end());
	printList(l3);
	list<int> l4;
	l4.assign(10, 1000);   //n个element
	printList(l4);
}

//交换
void test3()
{
	list<int> l1{ 10,20,30,40 };
	list<int> l2;
	l2.assign(10, 100);
	cout << "交换前：" << endl;
	printList(l1);
	printList(l2);
	cout << "-----------------------------------------------" << endl;
	cout << "交换后：" << endl;
	l1.swap(l2);
	printList(l1);
	printList(l2);

	l1.resize(5);
	printList(l1);

}


//remove - 删除容器中所有与element匹配的元素
void test4()
{
	list<int> l1{ 10, 20, 30, 40 };

	//insert(pos, elem) - 在pos处插入elem，返回插入元素的位置
	l1.insert(l1.begin(), 1);
	printList(l1);
	//insert(pos, n, elem) - 在pos处插入n个elem，无返回值
	list<int>::iterator it = l1.begin();
	it++;
	l1.insert(it, 2, 2);  //1 2 2 10 20 30 40
	printList(l1);
	//insert(pos, beg, end) - 在pos处插入[beg, end)中的数据
	l1.insert(l1.begin(), l1.begin(), l1.end());
	printList(l1);

	//erase
	it = l1.end();
	for (int i = 0; i < 4; i++)
	{
		it--;
	}
	l1.erase(l1.begin(), it);  //删除[beg, end)中的元素
	printList(l1);
	
	l1.remove(30);   //删除容器中所有element匹配的元素
	printList(l1);

}

//list读取
void test5()
{
	list<int> li{ 1,2,3,4 };
	
	//li[0]  list本质是链表，不支持随机访问

	//list就这两种读取方式
	cout << "第一个元素为：" << li.front() << endl;
	cout << "最后一个元素为：" << li.back() << endl;
}



//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//
//	system("pause");
//	return 0;
//}



//list排序案例
//将Person自定义类型进行排序，属性有姓名，年龄，身高
//排序规则：按照年龄进行升序，如果年龄相同按照身高进行排序


class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	
	string m_Name;
	int m_Age;
	int m_Height;
};

void printList(list<Person>& l)
{
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
	}
}

bool cmp_by_age(Person& p1, Person& p2)
{
	return p1.m_Age < p2.m_Age;
}

bool cmp_by_height(Person& p1, Person& p2)
{
	return p1.m_Height < p2.m_Height;
}

void sort(list<Person>& l)
{
	if (l.size() == 0)
	{
		return;
	}
	
	int cmp = l.begin()->m_Age;
	for (auto i = l.begin(); i != l.end(); i++)
	{
		if (i->m_Age != cmp)
		{
			//年龄不相等，需要对年龄排序
			l.sort(cmp_by_age);
			return;
		}
	}

	//到达这里说明年龄相等，需要对身高排序
	l.sort(cmp_by_height);
}

int main()
{
	Person p1("aaa", 18, 180);
	Person p2("bbb", 18, 170);
	Person p3("ccc", 18, 174);
	Person p4("ddd", 18, 170);
	Person p5("eee", 18, 176);

	list<Person> l1{ p1,p2,p3,p4,p5 };
	sort(l1);
	printList(l1);

	system("pause");
	return 0;
}