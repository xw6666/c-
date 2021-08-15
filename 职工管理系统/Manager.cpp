#include "Manager.h"

Manager::Manager(int ID, string name, int DepartMentID)
{
	m_ID = ID;
	m_Name = name;
	m_DepartMentID = DepartMentID;
}

string Manager::getPostName()
{
	return (string)("经理");
}

void Manager::showData()
{
	cout << "编号:" << m_ID
		<< "\t职工姓名:" << m_Name
		<< "\t岗位名称:" << this->getPostName()
		<< "\t岗位职责:完成老板布置的任务" << endl;
}
