//1. 简单计算器
//模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，4种运算符的优先级相同，按从左到右的顺序计算。
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
////判断优先级函数
////bool isLarger(char stackElement, char e)
////{
////	//如果栈外优先级大返回true
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
//	//到这里得到了四则运算算式
//	stack<char> st;
//	string ret;
//	for (decltype(input.size()) i = 0; i < input.size(); i++)
//	{
//		//1.栈为空直接且不是数字直接进
//		//2.不是数字且优先级大于栈中的优先级
//		//3.不是数字但是小于等于栈中的优先级
//
//		//将数字直接放进ret中
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
//		//	//2.进栈
//		//	st.push(input[i]);
//		//}
//		//else
//		//{
//		//	//3.全部出栈后进栈
//		//	while (!st.empty())
//		//	{
//		//		ret += st.top();
//		//		st.pop();
//		//	}
//		//	st.push(input[i]);
//		//}
//
//		//出栈再进栈
//		ret += st.top();
//		st.pop();
//		st.push(input[i]);
//		
//	}
//
//	//出栈
//	while (!st.empty())
//	{
//		ret += st.top();
//		st.pop();
//	}
//
//	//ret是后缀表达式
//	//cout << ret << endl;
//
//	//开始计算
//	stack<int> cal;
//	for (decltype(ret.size()) i = 0; i < ret.size(); i++)
//	{
//		//如果是空格则跳过
//		if (i < ret.size() && ret[i] == ' ')
//		{
//			continue;
//		}
//
//		//如果是数字则进栈
//		if (isNum(ret[i]))
//		{
//			string num;
//			while (i < ret.size() && isNum(ret[i]))
//			{
//				num += ret[i];
//				i++;
//			}
//			int getNum = toInt(num);  //将字符串数字转化为int类型的数字
//			cal.push(getNum);   //将这个数字压入栈中
//			//cout << getNum << " ";
//			continue;  //i虽然指向了下一个位置但是不用减，数字后面肯定是' '；
//		}
//
//		//是符号拿出两个元素做运算之后在塞回去
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
//	scanf("%d", &n2);   //第二组数量
//	int a = 0;  
//	int b = 0;//第二组次数
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
//				//找到了
//				arr1[j] += a;
//				flag = 0;
//				break;
//			}
//			j++;
//		}
//		if (flag == 1)
//		{
//			//独一无二的,先排后面
//			arr1[n1] = a;
//			arr2[n1] = b;
//			n1++;
//		}
//	}
//
//	bubble_sort(arr1, arr2, n1);
//
//	//printf("%d\n", n1);
//	//输出结果
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
//	cin >> s1;  //将输入读入s1中
//
//	stack<char> st;  //开一个栈
//	
//	string ret;  //存储答案
//
//	for (decltype(s1.size()) i = 0; i < s1.size(); i++)
//	{
//		//遍历字符串，如果是字母，直接放在ret字符串中，如果是操作符，再做逆波兰的操作
//		if (isalpha(s1[i]))
//		{
//			//字母
//			ret += s1[i];   //c++追加字符串方式，很方便
//		}
//		else
//		{
//
//			//走到这里都是操作符
//			//如果栈是空的，先放一个操作符进去
//			if (st.empty())
//			{
//				st.push(s1[i]);
//			}
//			else if (s1[i] == '(')
//			{
//				//首先如果是（，无论如何都进栈
//				st.push(s1[i]);  //进栈操作
//			}
//			else if (s1[i] == ')')
//			{
//				//如果是），出栈到（;
//				
//				//st.top()表示栈顶元素
//				while (st.top() != '(')
//				{
//					ret += st.top();//别忘了追加字符到结果上
//					st.pop();  //出栈
//				}
//				//把'('出栈
//				st.pop();
//			}
//			else if (st.top() == '(')
//			{
//				//如果栈顶是'(',直接压栈
//				st.push(s1[i]);
//			}
//			else if ((s1[i] == '*' || s1[i] == '/') && (st.top() == '+' || st.top() == '-'))
//			{
//				//如果是*/且栈顶是+-,那么外面优先级更大，压栈
//				
//				//判断'/'合法性
//				if (s1[i] == '/' && s1[i + 1] == '0')
//				{
//					printf("ERROR\n");
//					return 0;
//				}
//				else
//				{
//					//放心压栈
//					st.push(s1[i]);
//				}
//			}
//			else
//			{
//				//到这里也就是栈外优先级不会大于栈顶元素的情况，出栈再压栈
//				while (!st.empty())
//				{
//					//如果栈不空就循环出栈
//					char ch = st.top();  //栈顶元素
//					st.pop();  //出栈
//					ret += ch;  //加到结果串
//				}
//
//				//进栈
//				st.push(s1[i]);
//			}
//		}
//	}
//
//	//栈内的都要出来
//	while (!st.empty())
//	{
//		char ch = st.top();
//		st.pop();
//		ret += ch;
//	}
//
//	cout << ret << endl;  //输出答案
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
//#define STACK_INIT_SIZE 100 //存储空间初始分配量
//#define STACKINCREMENT 10 //存储空间分配增量
//
//typedef struct
//{
//    ElemType* base; //在栈构造和销毁之后，base的值为NULL
//    ElemType* top; //栈顶指针
//    int stacksize; //当前已分配的存储空间，以元素为单位
//}Stack;
//
//// 构造一个空栈S
//Status InitStack(Stack& S)
//{
//    S.base = (ElemType*)malloc(STACK_INIT_SIZE * sizeof(ElemType));
//    if (!S.base) //存储分配失败
//        exit(OVERFLOW);
//    S.top = S.base;
//    S.stacksize = STACK_INIT_SIZE;
//    return OK;
//}//InitStack
////若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR
//
//int Top(Stack S)
//{
//    int e;
//    if (S.top == S.base)
//        return ERROR;
//    e = *(S.top - 1);
//    return e;
//}//Top
////插入元素e为新的栈顶元素
//Status Push(Stack& S, ElemType e)
//{
//    if (S.top - S.base >= S.stacksize) //栈满，追加存储空间
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
////若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK;否则返回ERROR
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
//    //栈s1用于存放运算符，栈s2用于存放逆波兰式
//    Stack s1, s2;
//    InitStack(s1);
//    InitStack(s2);
//
//    //假设字符'#'是运算级别最低的运算符，并压入栈s1中
//    Push(s1, '#');
//    //p指针用于遍历传入的字符串，ch用于临时存放字符,length用于计算字符串长度 
//    char e;
//    char ch = 0;
//    char* p = (char*)malloc(sizeof(char) * 50);
//    scanf("%s", p);  //读入字符串
//    int length = 0;
//    //逐个字符访问
//    for (; *p != '\0'; p++) {
//        switch (*p) {
//            //遇'('则直接入栈s1
//        case '(':
//            Push(s1, *p);
//            break;
//            //遇')'则将距离栈s1栈顶的最近的'('之间的运算符，逐个出栈，依次送入栈s2,此时抛弃'('
//        case ')':
//            while (Top(s1) != '(') {
//                Pop(s1, ch);
//                Push(s2, ch);
//            }
//            Pop(s1, ch);
//            break;
//            //遇下列运算符，则分情况讨论：
//            //1.若当前栈s1的栈顶元素是'('，则当前运算符直接压入栈s1；
//            //2.否则，将当前运算符与栈s1的栈顶元素比较，若优先级较栈顶元素大，则直接压入栈s1中,
//            //  否则将s1栈顶元素弹出，并压入栈s2中，直到栈顶运算符的优先级别低于当前运算符，然后再将当前运算符压入栈s1中
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
//            //遇操作数则直接压入栈s2中
//        default:
//            Push(s2, *p);
//            length++;
//        }
//    }
//    //若栈s1非空，则将栈中元素依次弹出并压入栈s2中
//    while (!StackEmpty(s1) && Top(s1) != '#') {
//        Pop(s1, ch);
//        Push(s2, ch);
//    }
//    //最后将栈s2输出，逆序排列成字符串;
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

