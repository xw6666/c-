#include "string.h"

void test1()
{
	xw::string s1("hello");
	xw::string s2(s1);
	xw::string s3("ddsfowehuifowej");
	std::cout << s3.size() << std::endl;
	s3 = s2;
	std::cout << s3.size() << std::endl;
	xw::string s4;
	std::cout << s1.s_str() << std::endl;
	std::cout << s2.s_str() << std::endl;
	std::cout << s3.s_str() << std::endl;
	std::cout << s4.s_str() << std::endl;
}

void test2()
{
	
}

int main()
{
	test1();
	return 0;
}