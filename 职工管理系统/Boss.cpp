#include "Boss.h"

Boss::Boss(int ID, string name, int DepartMentID)
{
	m_ID = ID;
	m_Name = name;
	m_DepartMentID = DepartMentID;
}

string Boss::getPostName()
{
	return (string)("�ϰ�");
}

void Boss::showData()
{
	cout << "���:" << m_ID
		<< "\tְ������:" << m_Name
		<< "\t��λ����:" << this->getPostName()
		<< "\t��λְ��:����˾��������" << endl;
}
