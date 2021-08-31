//#include <iostream>
//using namespace std;
//#include <deque>   //双端数组
//#include <algorithm>

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

