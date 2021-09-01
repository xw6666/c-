#include <iostream>
using namespace std;
#include <list>

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

int main()
{
	//test1();
	
	system("pause");
	return 0;
}