#include "Manager.h"

Manager::Manager(int ID, string name, int DepartMentID)
{
	m_ID = ID;
	m_Name = name;
	m_DepartMentID = DepartMentID;
}

string Manager::getPostName()
{
	return (string)("����");
}

void Manager::showData()
{
	cout << "���:" << m_ID
		<< "\tְ������:" << m_Name
		<< "\t��λ����:" << this->getPostName()
		<< "\t��λְ��:����ϰ岼�õ�����" << endl;
}
