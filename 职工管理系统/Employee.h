#pragma once
#include "Worker.h"

class Employee : public Worker
{
public:
	//���캯�� - ������Ϣ
	Employee(int ID, string name, int DepartMentID);
	//��ʾ������Ϣ
	void showData();
	//��ȡ��λ����
	string getPostName();
};