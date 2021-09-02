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

//set的查找
void test5()
{
	//find(elem) - 查找容器中为elem的元素，返回它的迭代器，如果找不到，返回end();

}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();

	system("pause");
	return 0;
}