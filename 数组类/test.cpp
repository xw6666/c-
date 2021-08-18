#include <iostream>
using namespace std;
#include <string>
#include "Array.hpp"

void test1()
{
	//Array<int> arr;
	//arr.pushBack(1);
	//arr.pushBack(1);
	//arr.pushBack(1);
	//arr.pushBack(1);
	//arr.pushBack(1);
	//arr.popBack();
	
	Array<int> arr2;
	arr2.pushBack(2);
	arr2.pushBack(2);
	arr2.pushBack(2);
	arr2.pushBack(2);
	arr2.pushBack(2);
	arr2.pushBack(2);
	arr2.pushBack(2);
	//Array<int> arr(arr2);
	Array<int> arr;
	arr = arr2;

	for (int i = 0; i < arr.showValSize(); i++)
	{
		cout << arr.space[i] << " ";
	}
}

int main()
{
	test1();
	return 0;
}