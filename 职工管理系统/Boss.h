#pragma once
#include "Worker.h"
class Boss : public Worker
{
public:
	//���캯�� - ������Ϣ
	Boss(int ID, string name, int DepartMentID);
	//��ʾ������Ϣ
	void showData();
	//��ȡ��λ����
	string getPostName();
};

