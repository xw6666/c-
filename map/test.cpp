#include <iostream>
using namespace std;
#include <map>

//map������ÿ��Ԫ�ض���pair�������keyֵ�Զ�����map�е�keyΨһ��multimap��Ψһ

void printMap(map<int, int >& mp)
{
	for (auto i = mp.begin(); i != mp.end(); i++)
	{
		cout << "key = " << i->first << ", value = " << i->second << endl;
	}
}

//map�����Ĺ����븳ֵ
void test1()
{
	//Ĭ�Ϲ���
	map<int, int> mp;
	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(3, 30));
	mp.insert(pair<int, int>(4, 40));
	mp.insert(pair<int, int>(2, 20));
	printMap(mp);
	
	//��������
	map<int, int> m2(mp);
	printMap(m2);

	//operator=����
	map<int, int> m3;
	m3 = m2;
	printMap(m3);
}

//map�Ĵ�С�뽻��
void test2()
{
	//size empty swap
}

//map�����ɾ��
void test3()
{
	map<int, int> mp;
	//��һ��
	mp.insert(pair<int, int>(1, 10));
	//�ڶ���		
	mp.insert(make_pair(3, 30));
	//������
	mp.insert(map<int, int>::value_type(4, 40));		
	//������
	mp[2] = 20;  //�����飬��ΪҪ�ǲ�����±�ֵ�Ƿ����ǲ��ᱨ��ģ����Ǵ���һ����ֵΪ0�Ķ���
	printMap(mp);

	//cout << mp[6] << endl;

	//ɾ��
	mp.erase(mp.begin());
	printMap(mp);
	cout << "------------------------------" << endl;
	//����keyɾ��
	mp.erase(3);
	printMap(mp);
	//����ɾ��
	cout << "------------------------------" << endl;
	//mp.erase(mp.begin(), mp.end());
	//printMap(mp);

	//clear���
	mp.clear();
	printMap(mp);
}

//map������ͳ��
void test4()
{
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(4, 40));
	printMap(m);
	cout << "---------------------------------" << endl;
	
	//find - �ҵ��ͷ��ص�ǰ��������û�ҵ�����end()
	map<int, int>::iterator pos = m.find(4);
	if (pos == m.end())
	{
		cout << "û���ҵ���Ԫ��" << endl;
	}
	else
	{
		cout << "key = " << pos->first << " value = " << pos->second << endl;
	}

	//count - ͳ��key������int,����map��key���ֻ����һ�������Է���ֵ����0����1
	int num = m.count(5);
	cout << "num = " << num << endl;

}

//map����
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