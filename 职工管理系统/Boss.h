#pragma once
#include "Worker.h"
class Boss : public Worker
{
public:
	//构造函数 - 读入信息
	Boss(int ID, string name, int DepartMentID);
	//显示个人信息
	void showData();
	//获取岗位名称
	string getPostName();
};

