#include <iostream>
#include <vector>
using namespace std;
#include <ctime>
#include <cstdlib>
//int main()
//{
//	//vector���ݷ���
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i + 1);
//	}
//
//	//ͨ��[]
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//ͨ��at
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	//front �� back
//	cout << v1.front() << endl;
//	cout << v1.back() << endl;
//
//	return 0;
//}


//������

//int throwing()
//{
//	int ret = rand() % 6 + 1;
//
//	return ret;
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	while (1)
//	{
//			vector<int> v1(7, 0);
//
//	//��n��
//	try
//	{
//		cout << "������Ҫ�����ӵĴ���:>";
//		int n = 0;
//		cin >> n;
//		cout << endl;
//		if (n < 0)
//		{
//			throw runtime_error("�Ƿ����룡");
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			int ret = throwing();
//			v1[ret]++;
//			cout << "��" << (i + 1) << "��Ͷ���ӵĽ��Ϊ:> " << ret << "��" << endl;
//		}
//
//		//���ͳ�ƽ��
//		for (int i = 1; i <= 6; i++)
//		{
//			cout << "����Ϊ" << i << "�Ĵ���������" << v1[i] << "��\t";
//		}
//		cout << endl;
//
//	}
//	catch (runtime_error re)
//	{
//		cout << re.what() << endl;
//	}
//
//	}
//
//	system("pause");
//	return 0;
//}