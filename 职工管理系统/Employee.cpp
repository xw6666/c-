#include "Employee.h"

Employee::Employee(int ID, string name, int DepartMentID)
{
	m_ID = ID;
	m_Name = name;
	m_DepartMentID = DepartMentID;
}

string Employee::getPostName()
{
	return (string)("Ա��");
}

void Employee::showData()
{
	cout << "���:" << m_ID
		<< "\tְ������:" << m_Name
		<< "\t��λ����:" << this->getPostName()
		<< "\t��λְ��:��ɾ�����������" << endl;
}


