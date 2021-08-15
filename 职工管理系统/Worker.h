#pragma once
#include <iostream>
#include <string>
using namespace std;

//职工抽象基类
class Worker
{
public:
	//显示个人信息
	virtual void showData() = 0;
	//获取岗位名称
	virtual string getPostName() = 0;
	//编号
	int m_ID;
	//姓名
	string m_Name;
	//职工所在部门编号
	int m_DepartMentID;
};