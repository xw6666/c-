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

//void test2()
//{
//	string str1("Hello world!");
//	const char* str2 = "Hello world!";
//	
//	//��const char* ͨ����ֵ��������ƺ�
//	string str = str2;
//	cout << str << endl;
//	//��stringͨ����ֵ�������ֵ
//	str = str1;
//	cout << str << endl;
//	str = " ";
//	//ͨ���ַ���ֵ
//	str = 'A';
//	cout << str << endl;
//	//ͨ��assign��Ա����
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


//stringƴ��

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
//	//ͨ����Ա����append
//	string str;
//	str.append("I love ");
//	str.append("play");
//	const char* s = " game!ee";
//	str.append(s, 0, 6);   //��һ��������Ҫ׷�ӵ��ַ��� �ڶ���������pos��0��ʼ ������������׷�ӵ��ַ�����
//	cout << str << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}




//string���Һ��滻
//find������rfind����  replace����

//void test1()
//{
//	//find�����ǲ��ң�����Ȼ�ģ����ҵ����ַ��������ַ�����pos��ʼ���ң���������,posĬ��Ϊ0,���Ҳ�������unsigned int ���ֵ
//	//���һ��find�ǲ��Ҵ���ǰn���ַ������Դ�3������ �� pos n
//	string str1 = "abbacaad";
//	string str2 = "caad";
//	int pos = str1.find(str2, 5);   //û���ҵ�����-1
//	cout << pos << endl;
//	char ch = 'd';
//	cout << str1.find(ch, 1) << endl;
//	//cout << INT_MAX << endl;
//	cout << str1.rfind('b') << endl;   //2
//
//	cout << str1.rfind("caad", 5, 2) << endl;   //��pos����caadǰn���ַ����һ�γ��ֵ�λ��
//
//
//}
//
//void test2()
//{
//	//replace�������滻����������pos n str ��pos��ʼ��n���ַ�����str
//	string str("haxyo world!\n");
//	const char* p = "Hello world!";
//	str.replace(0, 12, p);   //�滻�ı������滻n���ַ������p�л����ַ��Ļ��������滻�����ǽ������滻���
//	cout << str << endl;
//	string chinese = "������磡";    //������粻�����������滻11���ַ�Ҳ����ԭ�����ַ�
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





//�ַ����Ƚ�
//void test1()
//{
//	//ͨ��compare��Ա���� ����ַ�����ȷ���0��������ڷ���1 С�ڷ���-1
//	string str("abcde");
//	const char* p = "abcd";
//	int ret = str.compare(p);
//
//	if (0 == ret)
//	{
//		cout << "�ַ������" << endl;
//	}
//	else if (ret == 1)
//	{
//		cout << "str����p" << endl;
//	}
//	else
//	{
//		cout << "strС��p" << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}





//�ַ���ȡ
/*
* string�����ַ���ȡ��ʽ������
* 1.ͨ���±����ò�����[]
* 2.ͨ��at����
*/

//�ַ�������ͨ��length()�����õ�

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




//�ַ���������ɾ��
//ͨ��insert��erase����ʵ��
//inset��erase�ĵ�һ����������λ��
//insert�ĵڶ��������ǲ�����ַ������ַ���
//erase�ĵڶ���������Ҫɾ�����ַ���

//int main()
//{
//	string str1("Heo wld!");
//	string str2("ll");
//	str1.insert(2, str2);
//	const char* p = "or";
//	str1.insert(7, p);   //Hello wld!
//	cout << str1 << endl;
//
//	//ɾ����̾��
//	str1.erase(str1.length() - 1, 1);  //ɾ�������һ���ַ���ʼ��1���ַ�
//	cout << str1 << endl;
//	return 0;
//}


//rebegin �� reend
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


//�������ݻ���
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
	//�ҵ��ļ���׺
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