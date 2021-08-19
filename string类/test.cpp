#include <iostream>
using namespace std;
#include <string>

/*string构造方法
* 1.通过默认构造
* 2.传入const char* str
* 3.拷贝构造
* 4.传入int char 表示int个char初始化
*/
//void test1()
//{
//	string str1;
//	string str2("Hello world!");
//	string str3(str2);
//	string str4(5, 'a');
//	cout << str1 << endl;
//	cout << str2 << endl;
//	cout << str3 << endl;
//	cout << str4 << endl;
//}


/*string的赋值操作
* string& operator=(const char* s)
* string& operator=(const string& s)
* string& operator=(char c);
* string& assign(const char *s);
* string& assign(const char *s, int n);
* string& assign(const string& s);
* string& assign(int n, char c);
*/

void test2()
{
	string str1("Hello world!");
	const char* str2 = "Hello world!";
	
	//将const char* 通过赋值运算符复制和
	string str = str2;
	cout << str << endl;
	//将string通过赋值运算符赋值
	str = str1;
	cout << str << endl;
	str = " ";
	//通过字符赋值
	str = 'A';
	cout << str << endl;
	//通过assign成员函数
	str.assign("Hello world!");
	cout << str << endl;
	str.assign("Hello world!", 11);
	cout << str << endl;
	str.assign(str1);
	cout << str << endl;
	str.assign(10, 'a');
	cout << str << endl;
}
int main()
{
	//test1();
	test2();
	return 0;
}