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

//void test2()
//{
//	string str1("Hello world!");
//	const char* str2 = "Hello world!";
//	
//	//将const char* 通过赋值运算符复制和
//	string str = str2;
//	cout << str << endl;
//	//将string通过赋值运算符赋值
//	str = str1;
//	cout << str << endl;
//	str = " ";
//	//通过字符赋值
//	str = 'A';
//	cout << str << endl;
//	//通过assign成员函数
//	str.assign("Hello world!");
//	cout << str << endl;
//	str.assign("Hello world!", 11);
//	cout << str << endl;
//	str.assign(str1);
//	cout << str << endl;
//	str.assign(10, 'a');
//	cout << str << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


//string拼接

//void test1()
//{
//	string str1;
//	str1.assign("Hello ");
//	const char* p = "W";
//	str1 += p;
//	
//	string str2 = "orl";
//	str1 += str2;
//
//	str1 += 'd';
//	char ch = '!';
//	str1 += ch;
//	cout << str1 << endl;
//
//
//	//通过成员函数append
//	string str;
//	str.append("I love ");
//	str.append("play");
//	const char* s = " game!ee";
//	str.append(s, 0, 6);   //第一个参数是要追加的字符串 第二个参数是pos从0开始 第三个参数是追加的字符数量
//	cout << str << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}




//string查找和替换
//find函数与rfind函数  replace函数

//void test1()
//{
//	//find函数是查找，很自然的，查找的是字符串或者字符，从pos开始查找，两个参数,pos默认为0,查找不到返回unsigned int 最大值
//	//外加一种find是查找串的前n个字符，所以传3个参数 串 pos n
//	string str1 = "abbacaad";
//	string str2 = "caad";
//	int pos = str1.find(str2, 5);   //没有找到返回-1
//	cout << pos << endl;
//	char ch = 'd';
//	cout << str1.find(ch, 1) << endl;
//	//cout << INT_MAX << endl;
//	cout << str1.rfind('b') << endl;   //2
//
//	cout << str1.rfind("caad", 5, 2) << endl;   //从pos查找caad前n个字符最后一次出现的位置
//
//
//}
//
//void test2()
//{
//	//replace函数是替换，三个参数pos n str 从pos开始把n个字符换成str
//	string str("haxyo world!\n");
//	const char* p = "Hello world!";
//	str.replace(0, 12, p);   //替换的本质是替换n个字符，如果p中还有字符的话，不会替换，而是紧跟在替换点后
//	cout << str << endl;
//	string chinese = "你好世界！";    //你好世界不够长，就算替换11个字符也会有原来的字符
//	str.replace(0, 11, chinese);
//	cout << str << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}





//字符串比较
//void test1()
//{
//	//通过compare成员函数 如果字符串相等返回0，如果大于返回1 小于返回-1
//	string str("abcde");
//	const char* p = "abcd";
//	int ret = str.compare(p);
//
//	if (0 == ret)
//	{
//		cout << "字符串相等" << endl;
//	}
//	else if (ret == 1)
//	{
//		cout << "str大于p" << endl;
//	}
//	else
//	{
//		cout << "str小于p" << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}





//字符获取
/*
* string单个字符获取方式有两种
* 1.通过下标引用操作符[]
* 2.通过at函数
*/

//字符串长度通过length()函数得到

//int main()
//{
//	string str("Hello world!");
//	
//	for (int i = 0; i < str.length(); i++)
//	{
//		cout << str.at(i);
//	}
//	cout << endl;
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		cout << str[i];
//	}
//
//	cout << endl;
//
//	return 0;
//}




//字符串插入与删除
//通过insert和erase函数实现
//inset和erase的第一个参数都是位置
//insert的第二个参数是插入的字符或者字符串
//erase的第二个参数是要删除的字符数

//int main()
//{
//	string str1("Heo wld!");
//	string str2("ll");
//	str1.insert(2, str2);
//	const char* p = "or";
//	str1.insert(7, p);   //Hello wld!
//	cout << str1 << endl;
//
//	//删除感叹号
//	str1.erase(str1.length() - 1, 1);  //删除从最后一个字符开始的1个字符
//	cout << str1 << endl;
//	return 0;
//}


//rebegin 与 reend
//int main()
//{
//	string s1("Hello world");
//	string::reverse_iterator rit = s1.rbegin();
//	while (rit != s1.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	return 0;
//}


//测试增容机制
//int main()
//{
//	string s;
//	size_t sz = s.capacity();
//	cout << "capacity = " << sz << endl;
//
//	for (int i = 0; i < 1000; i++)
//	{
//		s += 'c';
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity = " << sz << endl;
//		}
//	}
//
//	return 0;
//}

int main()
{
	string file("test.txt");
	//找到文件后缀
	size_t pos = file.find('.');
	if (pos != file.npos)
	{
		string suffix = file.substr(pos, file.size() - pos);
		cout << suffix << endl;
	}
	string s("Hello world");
	cout << s.substr(1, 6) << endl;
	return 0;
}