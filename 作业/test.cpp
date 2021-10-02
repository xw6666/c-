//1. �򵥼�����
//ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬�������ͽ������������4������������ȼ���ͬ���������ҵ�˳����㡣

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


//�ж����ȼ�����
//bool isLarger(char stackElement, char e)
//{
//	//���ջ�����ȼ��󷵻�true
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
	//������õ�������������ʽ
	stack<char> st;
	string ret;
	for (decltype(input.size()) i = 0; i < input.size(); i++)
	{
		//1.ջΪ��ֱ���Ҳ�������ֱ�ӽ�
		//2.�������������ȼ�����ջ�е����ȼ�
		//3.�������ֵ���С�ڵ���ջ�е����ȼ�

		//������ֱ�ӷŽ�ret��
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
		//	//2.��ջ
		//	st.push(input[i]);
		//}
		//else
		//{
		//	//3.ȫ����ջ���ջ
		//	while (!st.empty())
		//	{
		//		ret += st.top();
		//		st.pop();
		//	}
		//	st.push(input[i]);
		//}

		//��ջ�ٽ�ջ
		ret += st.top();
		st.pop();
		st.push(input[i]);
		
	}

	//��ջ
	while (!st.empty())
	{
		ret += st.top();
		st.pop();
	}

	//ret�Ǻ�׺���ʽ
	//cout << ret << endl;

	//��ʼ����
	stack<int> cal;
	for (decltype(ret.size()) i = 0; i < ret.size(); i++)
	{
		//����ǿո�������
		if (i < ret.size() && ret[i] == ' ')
		{
			continue;
		}

		//������������ջ
		if (isNum(ret[i]))
		{
			string num;
			while (i < ret.size() && isNum(ret[i]))
			{
				num += ret[i];
				i++;
			}
			int getNum = toInt(num);  //���ַ�������ת��Ϊint���͵�����
			cal.push(getNum);   //���������ѹ��ջ��
			//cout << getNum << " ";
			continue;  //i��Ȼָ������һ��λ�õ��ǲ��ü������ֺ���϶���' '��
		}

		//�Ƿ����ó�����Ԫ��������֮��������ȥ
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


