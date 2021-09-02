#include <iostream>
using namespace std;
#include <set>
#include <vector>

//构造与赋值
void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	set<int> s1;
	//插入进入会自动排序
	//set不能插入重复元素
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(20);
	
	printSet(s1);

	//拷贝构造
	set<int> s2(s1);
	printSet(s2);

}

//set大小
void test2()
{
	//set不能使用resize
	set<int> s1{ 60,20,10,30,50,40 };
	printSet(s1);

	//判断set为空
	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1的大小为：" << s1.size() << endl;
	}
}

void test3()
{
	set<int> s1{ 1,2,3,4,5 };
	set<int> s2{ 6,7,8,9 };
	
	//交换s1和s2
	cout << "交换前：" << endl;
	printSet(s1);
	printSet(s2);
	s1.swap(s2);
	cout << "交换后：" << endl;
	printSet(s1);
	printSet(s2);

}

//set的插入和删除
void test4()
{
	set<int> s1{ 0,1,2,3,4,5,6,7,8 };
	printSet(s1);

	//set插入只用insert
	s1.insert(9);
	s1.insert(10);
	printSet(s1);

	//删除用erase
	//erase(elem) - 删除容器中值为elem的元素
	s1.erase(0);
	printSet(s1);  //1 2 3 4 5 6 7 8 9 10
	
	//erase(pos) - 删除容器中位置为pos的元素
	s1.erase(s1.begin());
	printSet(s1);  //2 3 4 5 6 7 8 9 10

	//erase(beg, end) - 删除容器中位置为[beg, end)的元素
	auto it1 = s1.begin();
	it1++;
	auto it2 = s1.end();
	it2--;
	s1.erase(it1, it2);  //2 10;
	printSet(s1);

	//clear - 清空容器中所有元素
	s1.clear();
	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1中的元素有" << s1.size() << "个" << endl;
	}
}

//set的查找与统计
void test5()
{
	//find(elem) - 查找容器中为elem的元素，返回它的迭代器，如果找不到，返回end();
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);

	printSet(s1);
	set<int>::iterator it = s1.find(50);  //查找20，返回迭代器
	if (it == s1.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << *it << endl;
	}

	//count(elem)用于记录set中elem出现的次数 - 很显然只会是1或者0
	int num = s1.count(20);
	cout << "num = " << num << endl;

}

void printMultiset(multiset<int>& ms)
{
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test6()
{
	//set与multiset区别
	//1.set不能插入重复数据，而multiset可以
	//2.set插入数据时会返回结果，表示插入数据是否成功
	//3.multiset不会对插入数据进行检测，因此可以重复插入
	
	multiset<int> ms;
	ms.insert(15);
	ms.insert(10);
	ms.insert(20);
	ms.insert(30);
	printMultiset(ms);

	set<int> s;
	s.insert(10);
	s.insert(10);
	s.insert(20);
	//pair<iterator, boll> - 对组
	pair<set<int>::iterator, bool> ret = s.insert(30);
	cout << ret.second << endl;
	pair<set<int>::iterator, bool> ret2 = s.insert(10);
	cout << ret2.second << endl;

	printSet(s);

}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5(); 
	test6();

	system("pause");
	return 0;
}