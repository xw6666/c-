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

//list�Ĺ��캯��
void test1()
{
	//Ĭ��
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//��ӡ 
	printList(l1);

	//���乹�� 
	list<int> l2(l1.begin(), l1.end());
	printList(l2);

	//��������
	list<int> l3(l2);
	printList(l3);

	//n��element
	list<int> l4(10, 200);  //10��200
	printList(l4);
}

int main()
{
	//test1();
	
	system("pause");
	return 0;
}