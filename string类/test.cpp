#include <iostream>
using namespace std;
#include <string>

/*string���췽��
* 1.ͨ��Ĭ�Ϲ���
* 2.����const char* str
* 3.��������
* 4.����int char ��ʾint��char��ʼ��
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


/*string�ĸ�ֵ����
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
	
	//��const char* ͨ����ֵ��������ƺ�
	string str = str2;
	cout << str << endl;
	//��stringͨ����ֵ�������ֵ
	str = str1;
	cout << str << endl;
	str = " ";
	//ͨ���ַ���ֵ
	str = 'A';
	cout << str << endl;
	//ͨ��assign��Ա����
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