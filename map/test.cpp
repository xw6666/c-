#include <iostream>
using namespace std;
#include <map>

//map容器中每个元素都是pair，会根据key值自动排序，map中的key唯一，multimap不唯一

void printMap(map<int, int >& mp)
{
	for (auto i = mp.begin(); i != mp.end(); i++)
	{
		cout << "key = " << i->first << ", value = " << i->second << endl;
	}
}

//map容器的构造与赋值
void test1()
{
	//默认构造
	map<int, int> mp;
	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(3, 30));
	mp.insert(pair<int, int>(4, 40));
	mp.insert(pair<int, int>(2, 20));
	printMap(mp);
	
	//拷贝构造
	map<int, int> m2(mp);
	printMap(m2);

	//operator=重载
	map<int, int> m3;
	m3 = m2;
	printMap(m3);
}

//map的大小与交换
void test2()
{
	//size empty swap
}

//map插入和删除
void test3()
{
	map<int, int> mp;
	//第一种
	mp.insert(pair<int, int>(1, 10));
	//第二种		
	mp.insert(make_pair(3, 30));
	//第三种
	mp.insert(map<int, int>::value_type(4, 40));		
	//第四种
	mp[2] = 20;  //不建议，因为要是插入的下标值非法，是不会报错的，而是创建一个键值为0的对组
	printMap(mp);

	//cout << mp[6] << endl;

	//删除
	mp.erase(mp.begin());
	printMap(mp);
	cout << "------------------------------" << endl;
	//按照key删除
	mp.erase(3);
	printMap(mp);
	//区间删除
	cout << "------------------------------" << endl;
	//mp.erase(mp.begin(), mp.end());
	//printMap(mp);

	//clear清空
	mp.clear();
	printMap(mp);
}

//map查找与统计
void test4()
{
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(4, 40));
	printMap(m);
	cout << "---------------------------------" << endl;
	
	//find - 找到就返回当前迭代器，没找到返回end()
	map<int, int>::iterator pos = m.find(4);
	if (pos == m.end())
	{
		cout << "没有找到该元素" << endl;
	}
	else
	{
		cout << "key = " << pos->first << " value = " << pos->second << endl;
	}

	//count - 统计key，返回int,由于map中key最多只能有一个，所以返回值不是0就是1
	int num = m.count(5);
	cout << "num = " << num << endl;

}

//map排序
class MyCompare
{
public:
	bool operator()(int a, int b) const
	{
		return a > b;
	}
};

void test5()
{
	map<int, int, MyCompare> m;
	m[1] = 10;
	m[2] = 30;
	m[4] = 40;
	
	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5();

	system("pause");
	return 0;
}