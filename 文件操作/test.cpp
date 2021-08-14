#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <fstream>

//写文件
void test1()
{
	//打开方式
	//ios::in - 读文件
	//ios::out - 写文件
	//ios::ate - 起始位置文件尾
	//ios::app - 追加方式写文件
	//ios::trunc - 如果文件存在先删除，再创建
	//ios::binary - 二进制方式
	//通过 | 符号组合
	ofstream ofs;
	ofs.open("Hello.txt", ios::out);
	ofs << "Hello world!" << endl;
	ofs.close();
}

int main()
{

	return 0;
}