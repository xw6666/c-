#include "Employee.h"

Employee::Employee(int ID, string name, int DepartMentID)
{
	m_ID = ID;
	m_Name = name;
	m_DepartMentID = DepartMentID;
}

string Employee::getPostName()
{
	return (string)("员工");
}

void Employee::showData()
{
	cout << "编号:" << m_ID
		<< "\t职工姓名:" << m_Name
		<< "\t岗位名称:" << this->getPostName()
		<< "\t岗位职责:完成经理交给的任务" << endl;
}


