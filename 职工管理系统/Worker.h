#pragma once
#include <iostream>
#include <string>
using namespace std;

//ְ���������
class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showData() = 0;
	//��ȡ��λ����
	virtual string getPostName() = 0;
	//���
	int m_ID;
	//����
	string m_Name;
	//ְ�����ڲ��ű��
	int m_DepartMentID;
};