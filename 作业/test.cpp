//1. �򵥼�����
//ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬�������ͽ������������4������������ȼ���ͬ���������ҵ�˳����㡣
#define _CRT_SECURE_NO_WARNINGS 1

//
//bool isNum(char ch)
//{
//	if ((ch - '0') >= 0 && (ch - 0) <= '9')
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//
////�ж����ȼ�����
////bool isLarger(char stackElement, char e)
////{
////	//���ջ�����ȼ��󷵻�true
////	if ((stackElement == '+' || stackElement == '-') && (e == '*' || e == '/'))
////	{
////		return true;
////	}
////	else
////	{
////		return false;
////	}
////}
//
//int toInt(string num)
//{
//	int ret = 0;
//	for (decltype(num.size()) i = 0; i < num.size(); i++)
//	{
//		ret *= 10;
//		ret += num[i] - '0';
//	}
//	return ret;
//}
//
//int main()
//{
//	string input;
//	char ch = 0;
//	while (cin >> ch, ch != '=')
//	{
//		input += ch;
//	}
//
//	//cout << input << endl;
//	//������õ�������������ʽ
//	stack<char> st;
//	string ret;
//	for (decltype(input.size()) i = 0; i < input.size(); i++)
//	{
//		//1.ջΪ��ֱ���Ҳ�������ֱ�ӽ�
//		//2.�������������ȼ�����ջ�е����ȼ�
//		//3.�������ֵ���С�ڵ���ջ�е����ȼ�
//
//		//������ֱ�ӷŽ�ret��
//		int flag = 1;
//		while (i < input.size() && isNum(input[i]))
//		{
//			ret += input[i];
//			i++;
//			flag = 0;
//		}
//		if (flag == 0)
//		{
//			i--;
//			ret += ' ';
//			continue;
//		}
//	
//		if (st.empty())
//		{
//			st.push(input[i]);
//			continue;
//		}
//			
//		//if (isLarger(st.top(), input[i]))
//		//{
//		//	//2.��ջ
//		//	st.push(input[i]);
//		//}
//		//else
//		//{
//		//	//3.ȫ����ջ���ջ
//		//	while (!st.empty())
//		//	{
//		//		ret += st.top();
//		//		st.pop();
//		//	}
//		//	st.push(input[i]);
//		//}
//
//		//��ջ�ٽ�ջ
//		ret += st.top();
//		st.pop();
//		st.push(input[i]);
//		
//	}
//
//	//��ջ
//	while (!st.empty())
//	{
//		ret += st.top();
//		st.pop();
//	}
//
//	//ret�Ǻ�׺���ʽ
//	//cout << ret << endl;
//
//	//��ʼ����
//	stack<int> cal;
//	for (decltype(ret.size()) i = 0; i < ret.size(); i++)
//	{
//		//����ǿո�������
//		if (i < ret.size() && ret[i] == ' ')
//		{
//			continue;
//		}
//
//		//������������ջ
//		if (isNum(ret[i]))
//		{
//			string num;
//			while (i < ret.size() && isNum(ret[i]))
//			{
//				num += ret[i];
//				i++;
//			}
//			int getNum = toInt(num);  //���ַ�������ת��Ϊint���͵�����
//			cal.push(getNum);   //���������ѹ��ջ��
//			//cout << getNum << " ";
//			continue;  //i��Ȼָ������һ��λ�õ��ǲ��ü������ֺ���϶���' '��
//		}
//
//		//�Ƿ����ó�����Ԫ��������֮��������ȥ
//		int temp2 = cal.top();
//		cal.pop();
//		int temp1 = cal.top();
//		cal.pop();
//		if (ret[i] == '+')
//		{
//			cal.push(temp1 + temp2);
//		}
//		else if (ret[i] == '-')
//		{
//			cal.push(temp1 - temp2);
//		}
//		else if (ret[i] == '*')
//		{
//			cal.push(temp1* temp2);
//		}
//		else if(ret[i] == '/')
//		{
//			if (temp2 == 0)
//			{
//				cout << "ERROE" << endl;
//				return 0;
//			}
//			cal.push(temp1 / temp2);
//		}
//		else
//		{
//			cout << "ERROR" << endl;
//			return 0;
//		}
//	}
//
//	cout << cal.top() << endl;
//
//	return 0;
//}
//
//


//void bubble_sort(int arr1[50], int arr2[50], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr2[j] > arr2[j + 1])
//			{
//				int temp = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j + 1] = temp;
//				temp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr1[50] = { 0 };
//	int arr2[50] = { 0 };
//	int n1 = 0;
//	scanf("%d", &n1);
//	for (int i = 0; i < n1; i++)
//	{
//		scanf("%d", &arr1[i]);
//		scanf("%d", &arr2[i]);
//	}
//
//	
//	int n2 = 0;
//	scanf("%d", &n2);   //�ڶ�������
//	int a = 0;  
//	int b = 0;//�ڶ������
//	for (int i = 0; i < n2; i++)
//	{
//		scanf("%d", &a);
//		scanf("%d", &b);
//		int flag = 1;
//		int j = 0;
//		while (j < n1)
//		{
//			if (arr2[j] == b)
//			{
//				//�ҵ���
//				arr1[j] += a;
//				flag = 0;
//				break;
//			}
//			j++;
//		}
//		if (flag == 1)
//		{
//			//��һ�޶���,���ź���
//			arr1[n1] = a;
//			arr2[n1] = b;
//			n1++;
//		}
//	}
//
//	bubble_sort(arr1, arr2, n1);
//
//	//printf("%d\n", n1);
//	//������
//	for (int i = 0; i < n1; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			continue;
//		}
//		if (i < n1 - 1)
//		{
//			printf("%dx^%d+", arr1[i], arr2[i]);
//		}
//		else
//		{
//			printf("%dx^%d\n", arr1[i], arr2[i]);
//		}
//	}
//	
//	
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char ch = 0;
//	int temp = 0;
//	scanf("%d", &ret);
//	while (scanf("%c", &ch), ch != '=')
//	{
//		switch (ch)
//		{
//		case '+':
//			scanf("%d", &temp);
//			ret += temp;
//			break;
//		case '-':
//			scanf("%d", &temp);
//			ret -= temp;
//			break;
//		case '*':
//			scanf("%d", &temp);
//			ret *= temp;
//			break;
//		case '/':
//			scanf("%d", &temp);
//			if (temp == 0)
//			{
//				printf("ERROR\n");
//				return 0;
//			}
//			ret /= temp;
//			break;
//		default:
//			printf("ERROR\n");
//			return 0;
//		}
//	}
//
//	printf("%d\n", ret);
//
//
//	return 0;
//}
//

//#include <iostream>
//#include <stack>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	string s1;
//	cin >> s1;  //���������s1��
//
//	stack<char> st;  //��һ��ջ
//	
//	string ret;  //�洢��
//
//	for (decltype(s1.size()) i = 0; i < s1.size(); i++)
//	{
//		//�����ַ������������ĸ��ֱ�ӷ���ret�ַ����У�����ǲ������������沨���Ĳ���
//		if (isalpha(s1[i]))
//		{
//			//��ĸ
//			ret += s1[i];   //c++׷���ַ�����ʽ���ܷ���
//		}
//		else
//		{
//
//			//�ߵ����ﶼ�ǲ�����
//			//���ջ�ǿյģ��ȷ�һ����������ȥ
//			if (st.empty())
//			{
//				st.push(s1[i]);
//			}
//			else if (s1[i] == '(')
//			{
//				//��������ǣ���������ζ���ջ
//				st.push(s1[i]);  //��ջ����
//			}
//			else if (s1[i] == ')')
//			{
//				//����ǣ�����ջ����;
//				
//				//st.top()��ʾջ��Ԫ��
//				while (st.top() != '(')
//				{
//					ret += st.top();//������׷���ַ��������
//					st.pop();  //��ջ
//				}
//				//��'('��ջ
//				st.pop();
//			}
//			else if (st.top() == '(')
//			{
//				//���ջ����'(',ֱ��ѹջ
//				st.push(s1[i]);
//			}
//			else if ((s1[i] == '*' || s1[i] == '/') && (st.top() == '+' || st.top() == '-'))
//			{
//				//�����*/��ջ����+-,��ô�������ȼ�����ѹջ
//				
//				//�ж�'/'�Ϸ���
//				if (s1[i] == '/' && s1[i + 1] == '0')
//				{
//					printf("ERROR\n");
//					return 0;
//				}
//				else
//				{
//					//����ѹջ
//					st.push(s1[i]);
//				}
//			}
//			else
//			{
//				//������Ҳ����ջ�����ȼ��������ջ��Ԫ�ص��������ջ��ѹջ
//				while (!st.empty())
//				{
//					//���ջ���վ�ѭ����ջ
//					char ch = st.top();  //ջ��Ԫ��
//					st.pop();  //��ջ
//					ret += ch;  //�ӵ������
//				}
//
//				//��ջ
//				st.push(s1[i]);
//			}
//		}
//	}
//
//	//ջ�ڵĶ�Ҫ����
//	while (!st.empty())
//	{
//		char ch = st.top();
//		st.pop();
//		ret += ch;
//	}
//
//	cout << ret << endl;  //�����
//
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<stdlib.h>
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -2
//#define TRUE 1
//#define FALSE 0
//typedef char ElemType;
//typedef int Status;
//#define STACK_INIT_SIZE 100 //�洢�ռ��ʼ������
//#define STACKINCREMENT 10 //�洢�ռ��������
//
//typedef struct
//{
//    ElemType* base; //��ջ���������֮��base��ֵΪNULL
//    ElemType* top; //ջ��ָ��
//    int stacksize; //��ǰ�ѷ���Ĵ洢�ռ䣬��Ԫ��Ϊ��λ
//}Stack;
//
//// ����һ����ջS
//Status InitStack(Stack& S)
//{
//    S.base = (ElemType*)malloc(STACK_INIT_SIZE * sizeof(ElemType));
//    if (!S.base) //�洢����ʧ��
//        exit(OVERFLOW);
//    S.top = S.base;
//    S.stacksize = STACK_INIT_SIZE;
//    return OK;
//}//InitStack
////��ջ���գ�����e����S��ջ��Ԫ�أ�������OK�����򷵻�ERROR
//
//int Top(Stack S)
//{
//    int e;
//    if (S.top == S.base)
//        return ERROR;
//    e = *(S.top - 1);
//    return e;
//}//Top
////����Ԫ��eΪ�µ�ջ��Ԫ��
//Status Push(Stack& S, ElemType e)
//{
//    if (S.top - S.base >= S.stacksize) //ջ����׷�Ӵ洢�ռ�
//    {
//        S.base = (ElemType*)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(ElemType));
//        if (!S.base)
//            exit(OVERFLOW);
//        S.top = S.base + S.stacksize;
//        S.stacksize += STACKINCREMENT;
//    }
//    *S.top++ = e;
//    return OK;
//}//Push
////��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK;���򷵻�ERROR
//Status Pop(Stack& S, ElemType& e)
//{
//    if (S.top == S.base)
//        return ERROR;
//    e = *--S.top;
//    return OK;
//}//Pop
//Status StackEmpty(Stack S)
//{
//    if (!S.base)
//        return ERROR;
//    if (S.base == S.top)
//        return TRUE;
//    else
//        return FALSE;
//}
//
//int main() {
//    //ջs1���ڴ���������ջs2���ڴ���沨��ʽ
//    Stack s1, s2;
//    InitStack(s1);
//    InitStack(s2);
//
//    //�����ַ�'#'�����㼶����͵����������ѹ��ջs1��
//    Push(s1, '#');
//    //pָ�����ڱ���������ַ�����ch������ʱ����ַ�,length���ڼ����ַ������� 
//    char e;
//    char ch = 0;
//    char* p = (char*)malloc(sizeof(char) * 50);
//    scanf("%s", p);  //�����ַ���
//    int length = 0;
//    //����ַ�����
//    for (; *p != '\0'; p++) {
//        switch (*p) {
//            //��'('��ֱ����ջs1
//        case '(':
//            Push(s1, *p);
//            break;
//            //��')'�򽫾���ջs1ջ���������'('֮���������������ջ����������ջs2,��ʱ����'('
//        case ')':
//            while (Top(s1) != '(') {
//                Pop(s1, ch);
//                Push(s2, ch);
//            }
//            Pop(s1, ch);
//            break;
//            //����������������������ۣ�
//            //1.����ǰջs1��ջ��Ԫ����'('����ǰ�����ֱ��ѹ��ջs1��
//            //2.���򣬽���ǰ�������ջs1��ջ��Ԫ�رȽϣ������ȼ���ջ��Ԫ�ش���ֱ��ѹ��ջs1��,
//            //  ����s1ջ��Ԫ�ص�������ѹ��ջs2�У�ֱ��ջ������������ȼ�����ڵ�ǰ�������Ȼ���ٽ���ǰ�����ѹ��ջs1��
//        case '+':
//        case '-':
//            for (ch = Top(s1); ch != '#'; ch = Top(s1)) {
//                if (ch == '(') {
//                    break;
//                }
//                else {
//                    Pop(s1, ch);
//                    Push(s2, ch);
//                }
//            }
//            Push(s1, *p);
//            length++;
//            break;
//        case '*':
//        case '/':
//            for (ch = Top(s1); ch != '#' && ch != '+' && ch != '-'; ch = Top(s1)) {
//                if (ch == '(') {
//                    break;
//                }
//                else {
//                    Pop(s1, ch);
//                    Push(s2, ch);
//                }
//            }
//            Push(s1, *p);
//            length++;
//            break;
//            //����������ֱ��ѹ��ջs2��
//        default:
//            Push(s2, *p);
//            length++;
//        }
//    }
//    //��ջs1�ǿգ���ջ��Ԫ�����ε�����ѹ��ջs2��
//    while (!StackEmpty(s1) && Top(s1) != '#') {
//        Pop(s1, ch);
//        Push(s2, ch);
//    }
//    //���ջs2������������г��ַ���;
//    char* result = (char*)malloc(sizeof(char) * (length + 1));
//
//    //result += length;
//    //*result = '\0';
//
//    //for (; !StackEmpty(s2); result--) {
//    //    Pop(s2, ch);
//    //    *result = ch;
//    //}
//    //++result;
//    result[length] = '\0';
//    int i = length;
//    while (!StackEmpty(s2))
//    {
//        Pop(s2, ch);
//        result[--length] = ch;
//    }
//
// 
//    printf("%s\n", result);
//
//    return 0;
//}

//#include <stdio.h>
//#define MAXSIZE 1000
//typedef int Elemtype;
//bool push(Elemtype a[], int& top, Elemtype x)
//{
//    if (top == MAXSIZE - 1)
//    {
//        printf("err\n");
//        return false;
//    }
//    a[++top] = x;
//    return true;
//}
//int main()
//{
//    Elemtype arr[MAXSIZE];
//    int top = -1;
//    int n;
//    scanf("%d", &n);
//    while (n > 0)
//    {
//        push(arr, top, n % 2);
//        n = n / 2;
//    }
//    while (top >= 0)
//    {
//        printf("%d", arr[top]);
//        top--;
//    }
//    return 0;
//}

