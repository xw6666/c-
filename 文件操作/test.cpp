#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <fstream>

//д�ļ�
void test1()
{
	//�򿪷�ʽ
	//ios::in - ���ļ�
	//ios::out - д�ļ�
	//ios::ate - ��ʼλ���ļ�β
	//ios::app - ׷�ӷ�ʽд�ļ�
	//ios::trunc - ����ļ�������ɾ�����ٴ���
	//ios::binary - �����Ʒ�ʽ
	//ͨ�� | �������
	ofstream ofs;
	ofs.open("Hello.txt", ios::out);
	ofs << "Hello world!" << endl;
	ofs.close();
}

int main()
{

	return 0;
}