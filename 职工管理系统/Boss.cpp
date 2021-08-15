#include "Boss.h"

Boss::Boss(int ID, string name, int DepartMentID)
{
	m_ID = ID;
	m_Name = name;
	m_DepartMentID = DepartMentID;
}

string Boss::getPostName()
{
	return (string)("老板");
}

void Boss::showData()
{
	cout << "编号:" << m_ID
		<< "\t职工姓名:" << m_Name
		<< "\t岗位名称:" << this->getPostName()
		<< "\t岗位职责:处理公司所有事务" << endl;
}
