#include <iostream>
#include <string>
using namespace std;

//����ģ��
//template <class T>
//
//void mySowp(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	//���ַ�ʽʹ�ú���ģ��
//	//1.�Զ������Ƶ�
//	//mySowp(a, b);
//
//	//2.��ʾָ������
//	mySowp<int>(a, b);
//	cout << "a = " << a << ", b = " << b << endl;
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


//����ģ�尸��
//template <typename T>
//void slectSort(T& arr, int size)
//{
//	//ѡ������
//	for (int i = 0; i < size - 1; i++)
//	{
//		int j = i;
//		while (j >= 0 && arr[j] > arr[i + 1])
//		{
//			j--;
//		}
//
//		//��i���˵�j + 1��ʼ�ƶ�
//		int temp = arr[i + 1];
//		int k = i;
//		while (k >= j + 1)
//		{
//			arr[k + 1] = arr[k];
//			k--;
//		}
//
//		arr[j + 1] = temp;
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	slectSort(arr, 9);
//
//	char str[] = "gfihowgbs";
//	slectSort(str, 9);
//
//	return 0;
//}


//��ͨ������ģ�庯��������
//1.��ͨ�������Է�����ʽ����ת��
//2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3.����ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��

//��ͨ����
//int add1(int a, int b)
//{
//	return a + b;
//}
//
////ģ�庯��
//template <class T>
//T add2(T a, T b)
//{
//	return a + b;
//}
//
//int main()
//{
//	float a = 1.0f;
//	int b = 2;
//	cout << add1(a, b) << endl;
//	//cout << add2(a, b) << endl;  //- err
//
//	cout << add2<int>(a, b) << endl;
//
//	return 0;
//}



//��ͨ�����ͺ���ģ��ĵ��ù���
//1.�����ͨ�����ͺ���ģ�嶼���Ե��ã����ȵ�����ͨ����
//2.����ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//3.����ģ��Ҳ���Է�����������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

//void print(int a, int b)
//{
//	cout << "��ͨ��������" << endl;
//}
//
//template <class T>
//void print(T a, T b)
//{
//	cout << "����ģ�����" << endl;
//}
//
//template <class T>
//void print(T a, T b, T c)
//{
//	cout << "���غ���ģ�����" << endl;
//}
//
//void test1()
//{
//	print(5, 6);  //��ͨ��������
//	print(1.0, 2.0); //����ģ�����
//	print(1, 2, 3); 
//	print<>(1, 2);  //ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//}
//
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


//����ģ��ȱ�� - ���統�����Զ������ݽ��бȽ�ʱ���ǲ���ֱ�ӱȽϵ�
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	//bool operator==(Person& p1);
//
//
//	int m_Age;
//	string m_Name;
//};

//bool operator==(Person& p1, Person& p2)
//{
//	if (p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//
//	return false;
//}
//bool Person::operator==(Person& p1)
//{
//	if (p1.m_Age == this->m_Age)
//	{
//		return true;
//	}
//
//	return false;
//}

//template <class T>
//bool myCompare(T& a, T& b)
//{
//	return a == b;
//}
//
////���þ��廯Person�汾ʵ�ִ��룬���廯
//template<> bool myCompare(Person& a, Person& b)
//{
//	if (a.m_Age == b.m_Age)
//	{
//		return true;
//	}
//
//	return false;
//}
//
//int main()
//{
//	//int a = 1;
//	//int b = 5;
//	//int ret = myCompare(a, b);
//	//if (ret)
//	//{
//	//	cout << "a��b���" << endl;
//	//}
//	//else
//	//{
//	//	cout << "a��b�����" << endl;
//	//}
//
//	Person p1("����", 20);
//	Person p2("����", 20);
//	int ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "p1��p2���" << endl;
//	}
//	else
//	{
//		cout << "p1��p2�����" << endl;
//	}
//
//
//	return 0;
//}