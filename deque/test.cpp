#include <iostream>
using namespace std;
#include <deque>   //双端数组
#include <algorithm>
#include <vector>

//template <class T>
//void printDeque(const deque<T>& d)
//{
//	for (auto it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	deque<int> d1;
//	for (int i = 10; i >= 1; i--)
//	{
//		d1.push_front(i);
//	}
//
//	for (auto i = d1.begin(); i != d1.end(); i++)
//	{
//		cout << *i << " ";
//	}
//	cout << endl;
//}
//
//void test2()
//{
//	deque<int> d1{ 1,2,3,4,5,6,7,8,9 };
//	deque<int> d2(d1.begin(), d1.end());
//	d1.clear();
//	for (deque<int>::iterator it = d2.begin(); it != d2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test3()
//{
//	deque<int> d2{ 1,2,3,4,5,6,6,7,8,9 };
//	d2.erase(d2.begin() + 6);
//
//	for (deque<int>::iterator it = d2.begin(); it != d2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test4()
//{
//	deque<int> d1{ 2,3,4,5,6,7,8,9 };
//	d1.insert(d1.begin(), 1);
//	for (auto it = d1.begin(); it != d1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////数据访问
//void test5()
//{
//	deque<int> d1{ 1,2,3,4,5,6,7,8,9 };
//	//访问头部元素
//	cout << d1.front() << endl;
//	//访问尾部元素
//	cout << d1.back() << endl;
//	//下标引用操作符访问元素
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//	//at函数
//	for (decltype(d1.size()) i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//}
//
////排序
//void test6()
//{
//	//sort(iterator beg, iterator last);   对[beg, last]中的元素进行排序
//	deque<int> d1{ 5,2,1,8,6,3,7,4,9 };
//	printDeque(d1);
//	sort(d1.begin(), d1.end());
//	printDeque(d1);
//}
//
//void test7()
//{
//	deque<int> d1;
//	d1.push_back(6);
//	d1.push_back(4);
//	d1.push_back(7);
//	d1.push_back(1);
//	d1.push_front(9);
//
//	printDeque(d1);
//	sort(d1.begin(), d1.end());
//	printDeque(d1);
//
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	test7();
//
//	system("pause");
//	return 0;
//} 


//STL实例
//选手评分
//通过vector存储5个选手
//通过for循环遍历vector
//通过deque容器存储每个评委打的五个分
//对五个分去掉最高分，去掉最低分后求平均分
//将平均分存入选手的成绩中
class Person
{
public:
	Person(string name, double score)
	{
		m_name = name;
		m_score = score;
	}

	string m_name;
	double m_score;
};


int main()
{
	vector<Person> pvec;
	Person p1("a", 0);
	Person p2("b", 0);
	Person p3("c", 0);
	Person p4("d", 0);
	Person p5("e", 0);
	
	pvec.push_back(p1);
	pvec.push_back(p2);
	pvec.push_back(p3);
	pvec.push_back(p4);
	pvec.push_back(p5);


	for (vector<Person>::iterator it1 = pvec.begin(); it1 != pvec.end(); it1++)
	{
		double score = 0.0;
		double temp = 0.0;
		deque<double> d;
		for (int j = 0; j < 5; j++)
		{
			cin >> temp;
			d.push_back(temp);
		}

		//排序
		sort(d.begin(), d.end());
		for (auto it2 = d.begin() + 1; it2 != d.end() - 1; it2++)
		{
			score += (*it2);
		}

		score = score / (d.size() - 2);
		(*it1).m_score = score;
	}


	for (auto i = pvec.begin(); i != pvec.end(); i++)
	{
		cout << (*i).m_name << " " << (*i).m_score << endl;
	}

	return 0;
}