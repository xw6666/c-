#include <iostream>
using namespace std;
//int main()
//{
//	int a = 10;
//	int c = 5;
//	//���õĻ����﷨
//	//��������+&+������ = ������
//	int& b = a;  //int* const b = &a;
//	//b = c;  //error
//
//	//int* const p = &a;
//	//p = &c;
//
//	//������ȷȷʵʵ���˸�����
//	//a��b���ڴ���һ�µ�
//	//�������Ϊ - ��b�ĵ�ַ��ͬ��a�ĵ�ַ
//
//	b = 50;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	//ע�⣺������һ��Ҫ��ʼ����
//	
//	//int &b; - ����
//	//int &a = b; - ��ȷ
//	//ע�⣺����һ����ʼ�����Ͳ��ܸ���
//
//	//ʵ���ϣ����õı��ʾ���һ������ָ�� - int* const p;
//
//	system("pause");
//}



//��������������

//�����Ľ�������
//void swap1(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
////���ð� - Ӧ������ȥ��ָ������ʵ��
////���ַ����Ч��һ��
//void swap2(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 5;
//	swap2(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = "<< b << endl;
//	system("pause");
//}


//Ӧ������������ֵ

//int& test1()
//{
//	int a = 10;
//
//	return a;
//}
//
//int& test2()
//{
//	static int a = 10;
//	return a;
//}
//int main()
//{
//	////1.��Ҫ���ؾֲ�����������
//	//int& ret = test1();//����ջ���е�a�ڴ��Ѿ��ͷţ����ص�����ַ��Ӧ�Ŀռ��Ѿ����ܿ�����
//	//cout << "ret = " << ret << endl;//10
//	//cout << "ret = " << ret << endl;//����
//
//	//2.�����ĵ��ÿ�����Ϊ��ֵ
//	int& ret = test2();
//	cout << "ret = " << ret << endl;
//	test2() = 1000;
//	cout << "ret = " << ret << endl;
//
//	return 0;
//}



//��������

void Print(const int& a)
{
	//��������Է�ֹa��żȻ���޸�
}

int main()
{
	//����const���ֻ���������޸�
	//const int& a = 10;

	//Ӧ�ó����������βη��ñ������޸�
	
	//const int a = 50;
	
	int a = 10;
	
	return 0;
}