#include "string.h"
using namespace xw;

void test1()
{
	xw::string s1("hello");
	xw::string s2(s1);
	xw::string s3("ddsfowehuifowej");
	std::cout << s3.size() << std::endl;
	s3 = s2;
	std::cout << s3.size() << std::endl;
	xw::string s4;
	std::cout << s1.c_str() << std::endl;
	std::cout << s2.c_str() << std::endl;
	std::cout << s3.c_str() << std::endl;
	std::cout << s4.c_str() << std::endl;
}

void test2()
{
	xw::string s1("Hello");
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		std::cout << *it;
		it++;
	}
	std::cout << "\n";
}

void test3()
{
	string s1("Hello world!");

	for (int i = 0; i != s1.size(); i++)
	{
		std::cout << s1[i];
		s1[i] = '1';
	}
	std::cout << "\n";

	std::cout << s1.c_str() << "\n";

	const string s2("abcdef");
	for (int i = 0; i != s2.size(); i++) std::cout << s2[i];
	std::cout << '\n';
}

void test4()
{
	string s1("Hello world!");
	for (auto& e : s1)
	{
		std::cout << e;
		e = 1;
	}
	std::cout << '\n';
}

//ÏÖ´ú°æ¿½±´¹¹Ôì²âÊÔ
void test5()
{
	string s1("hello world");
	string s2(s1);
	for (int i = 0; i != s2.size(); i++) std::cout << s2[i];
	std::cout << std::endl;
}

//¸³ÖµÔËËã·û²âÊÔ
void test6()
{
	string s1("abc");
	string s2("helldof");
	s2 = s1;
	for (int i = 0; i != s2.size(); i++) std::cout << s2[i];
	std::cout << '\n';
	std::cout << s2.size() << '\n';
}

//À©ÈÝ£¬appendºÍ+=ÖØÔØ²âÊÔ
void test7()
{
	string s1("abc");
	for (int i = 0; i < 10; i++)
	{
		s1.push_back('1');
	}
	std::cout << s1.c_str() << '\n';
	s1.clear();
	s1.append("huisdhfuisdhfuiosdhfuiowehfiuwehfwfewfwe");
	std::cout << s1.c_str() << "\n";
}

void test8()
{
	string s1("ab");
	s1.resize(100);

	std::cout << s1.size() << '\n' << s1.c_str() << '\n';
}


//²åÈë²âÊÔ
void test9()
{
	string s1("ancdsf");
	s1.insert(6, 'v');
	s1.insert(5, 'v');
	s1.insert(0, 'v');
	std::cout << s1.c_str() << '\n';
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	test9();

	return 0;
}