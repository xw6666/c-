#pragma once
#include "Worker.h"
class Manager : public Worker
{
public:
	//���캯�� - ������Ϣ
	Manager(int ID, string name, int DepartMentID);
	//��ʾ������Ϣ
	void showData();
	//��ȡ��λ����
	string getPostName();
};

