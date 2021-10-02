//1. 简单计算器
//模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，4种运算符的优先级相同，按从左到右的顺序计算。

#include <iostream>
using namespace std;
#include <stack>
#include <string>

bool isNum(char ch)
{
	if ((ch - '0') >= 0 && (ch - 0) <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}


//判断优先级函数
//bool isLarger(char stackElement, char e)
//{
//	//如果栈外优先级大返回true
//	if ((stackElement == '+' || stackElement == '-') && (e == '*' || e == '/'))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

int toInt(string num)
{
	int ret = 0;
	for (decltype(num.size()) i = 0; i < num.size(); i++)
	{
		ret *= 10;
		ret += num[i] - '0';
	}
	return ret;
}

int main()
{
	string input;
	char ch = 0;
	while (cin >> ch, ch != '=')
	{
		input += ch;
	}

	//cout << input << endl;
	//到这里得到了四则运算算式
	stack<char> st;
	string ret;
	for (decltype(input.size()) i = 0; i < input.size(); i++)
	{
		//1.栈为空直接且不是数字直接进
		//2.不是数字且优先级大于栈中的优先级
		//3.不是数字但是小于等于栈中的优先级

		//将数字直接放进ret中
		int flag = 1;
		while (i < input.size() && isNum(input[i]))
		{
			ret += input[i];
			i++;
			flag = 0;
		}
		if (flag == 0)
		{
			i--;
			ret += ' ';
			continue;
		}
	
		if (st.empty())
		{
			st.push(input[i]);
			continue;
		}
			
		//if (isLarger(st.top(), input[i]))
		//{
		//	//2.进栈
		//	st.push(input[i]);
		//}
		//else
		//{
		//	//3.全部出栈后进栈
		//	while (!st.empty())
		//	{
		//		ret += st.top();
		//		st.pop();
		//	}
		//	st.push(input[i]);
		//}

		//出栈再进栈
		ret += st.top();
		st.pop();
		st.push(input[i]);
		
	}

	//出栈
	while (!st.empty())
	{
		ret += st.top();
		st.pop();
	}

	//ret是后缀表达式
	//cout << ret << endl;

	//开始计算
	stack<int> cal;
	for (decltype(ret.size()) i = 0; i < ret.size(); i++)
	{
		//如果是空格则跳过
		if (i < ret.size() && ret[i] == ' ')
		{
			continue;
		}

		//如果是数字则进栈
		if (isNum(ret[i]))
		{
			string num;
			while (i < ret.size() && isNum(ret[i]))
			{
				num += ret[i];
				i++;
			}
			int getNum = toInt(num);  //将字符串数字转化为int类型的数字
			cal.push(getNum);   //将这个数字压入栈中
			//cout << getNum << " ";
			continue;  //i虽然指向了下一个位置但是不用减，数字后面肯定是' '；
		}

		//是符号拿出两个元素做运算之后在塞回去
		int temp2 = cal.top();
		cal.pop();
		int temp1 = cal.top();
		cal.pop();
		if (ret[i] == '+')
		{
			cal.push(temp1 + temp2);
		}
		else if (ret[i] == '-')
		{
			cal.push(temp1 - temp2);
		}
		else if (ret[i] == '*')
		{
			cal.push(temp1* temp2);
		}
		else if(ret[i] == '/')
		{
			if (temp2 == 0)
			{
				cout << "ERROE" << endl;
				return 0;
			}
			cal.push(temp1 / temp2);
		}
		else
		{
			cout << "ERROR" << endl;
			return 0;
		}
	}

	cout << cal.top() << endl;

	return 0;
}


