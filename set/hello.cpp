//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//void printVec(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	cin >> n >> k;
//	k = k % n;
//	vector<int> v1;
//	for (int i = 0; i < n; i++)
//	{
//		int temp = 0;
//		cin >> temp;
//		v1.push_back(temp);
//	}
//
//	reverse(v1.begin(), v1.begin() + n - k);
//	reverse(v1.begin() + n - k, v1.end());
//	reverse(v1.begin(), v1.end());
//	printVec(v1);
//
//	return 0;
//}