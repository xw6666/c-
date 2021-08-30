#include <iostream>
#include <vector>
using namespace std;
#include <ctime>
#include <cstdlib>
//int main()
//{
//	//vector数据访问
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i + 1);
//	}
//
//	//通过[]
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//通过at
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	//front 和 back
//	cout << v1.front() << endl;
//	cout << v1.back() << endl;
//
//	return 0;
//}


//抛骰子

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
//	//丢n次
//	try
//	{
//		cout << "请输入要抛骰子的次数:>";
//		int n = 0;
//		cin >> n;
//		cout << endl;
//		if (n < 0)
//		{
//			throw runtime_error("非法输入！");
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			int ret = throwing();
//			v1[ret]++;
//			cout << "第" << (i + 1) << "次投骰子的结果为:> " << ret << "点" << endl;
//		}
//
//		//输出统计结果
//		for (int i = 1; i <= 6; i++)
//		{
//			cout << "点数为" << i << "的次数出现了" << v1[i] << "次\t";
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