#include "WorkerManager.h"

WorkerManager::WorkerManager()
{
	//���������
	//1.û�б����ĵ�
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	if (!ifs.is_open())
	{
		//��ʧ��
		//cout << "û�б����ĵ���" << endl;
		m_WorkerNum = 0;
		space = NULL;
		isEmpty = true;
		ifs.close();
		return;
	}

	//2.�б����ĵ��������ĵ�Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//�ĵ�Ϊ��
		//cout << "�ĵ�Ϊ�գ�" << endl;
		m_WorkerNum = 0;
		space = NULL;
		isEmpty = true;
		ifs.close();
		return;
	}
	ifs.close();

	//3.�б����ĵ����ĵ���Ϊ��
	//���п���
	
	//ͳ������ְ������
	int num = saveNum();
	//cout << "����" << num << "��Ա��" << endl;
	
	//����Ա����
	m_WorkerNum = num;
	
	//����ӦԱ�������пռ俪��
	space = new Worker * [m_WorkerNum];

	//�������ݵ�space
	int ID;
	string name;
	int DepartmentID;
	int index = 0;  //��Ϊ���ʱʹ�õ������±�
	ifs.open(FILENAME, ios::in);
	while (ifs >> ID && ifs >> name && ifs >> DepartmentID)
	{
		Worker* worker = NULL;
		if (DepartmentID == 1)
		{
			//Ա��
			worker = new Employee(ID, name, DepartmentID);
		}
		else if (DepartmentID == 2)
		{
			//����
			worker = new Manager(ID, name, DepartmentID);
		}
		else
		{
			//�ϰ�
			worker = new Boss(ID, name, DepartmentID);
		}

		//ͨ��index�������
		this->space[index++] = worker;
	}
}

void WorkerManager::showMenu()
{
	std::cout << "********************************************" << std::endl;
	std::cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << std::endl;
	std::cout << "*************  0.�˳��������  *************" << std::endl;
	std::cout << "*************  1.����ְ����Ϣ  *************" << std::endl;
	std::cout << "*************  2.��ʾְ����Ϣ  *************" << std::endl;
	std::cout << "*************  3.ɾ����ְְ��  *************" << std::endl;
	std::cout << "*************  4.�޸�ְ����Ϣ  *************" << std::endl;
	std::cout << "*************  5.����ְ����Ϣ  *************" << std::endl;
	std::cout << "*************  6.���ձ������  *************" << std::endl;
	std::cout << "*************  7.��������ĵ�  *************" << std::endl;
	std::cout << "********************************************" << std::endl;
	std::cout << std::endl;
}

void WorkerManager::exitSystem()
{
	std::cout << "��ӭ�´�ʹ��" << std::endl;
	system("pause");
	exit(-1);
}

void WorkerManager::addWorkerData()
{
	cout << "������Ҫ��ӵ�ְ������:>";
	int addNum = 0;
	cin >> addNum;
	cout << endl;
	if (addNum > 0)
	{
		int newNum = m_WorkerNum + addNum;  //�µ�ְ������ = ԭ����ְ������ + ���ӵ�����
		Worker** newSpace = new Worker* [newNum];
		
		//�����ԭ�������ݣ��������¿ռ�
		if (space != NULL)
		{
			for (int i = 0; i < m_WorkerNum; i++)
			{
				newSpace[i] = space[i];
			}
			//��������ͷŵ�ԭ���Ŀռ�
			delete space;
			space = NULL;
		}

		//��ʼ����������
		int j = 1; //��¼�洢���ڼ���Ա��
		for (int i = m_WorkerNum; i < newNum; i++)
		{
			int ID = 0;
			string name;
			int DepartMentID = 0;
			cout << "�������" << j << "��ְ�����:>";
			cin >> ID;
			cout << endl;
			cout << "�������" << j << "ְ��������:>";
			cin >> name;
			cout << endl;
			cout << "1.Ա��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cout << "��ѡ��ְ��ְλ:>";
			cin >> DepartMentID;
			cout << endl;
			
			Worker* worker = NULL;
			switch (DepartMentID)
			{
			case 1:
				worker = new Employee(ID, name, DepartMentID);
				newSpace[i] = worker;
				break;
			case 2:
				worker = new Manager(ID, name, DepartMentID);
				newSpace[i] = worker;
				break;
			case 3:
				worker = new Boss(ID, name, DepartMentID);
				newSpace[i] = worker;
				break;
			default:
				cout << "�������" << endl;
				break;
			}

			j++;  //������ӵ�Ա����
		}
		

		//��������Ա�����͹���ָ��
		m_WorkerNum = newNum;
		space = newSpace;
		//�����Ժ���б���

		//����
		save();
		cout << "��ӳɹ���" << endl;

	}
	else
	{
		//�������
		cout << "�������!" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	
	for (int i = 0; i < m_WorkerNum; i++)
	{
		ofs << (*(space + i))->m_ID << " "
			<< (*(space + i))->m_Name << " "
			<< (*(space + i))->m_DepartMentID << endl;
	}

	ofs.close();
}

int WorkerManager::saveNum()
{
	//ͨ����ȡ�����������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	int ID;
	string name;
	int DepartmentID;
	int num = 0;
	while (ifs >> ID && ifs >> name && ifs >> DepartmentID)
	{
		num++;
	}

	return num;
}

void WorkerManager::showWorkerData()
{
	//�ж��Ƿ���û��Ա��
	if (m_WorkerNum != 0)
	{
		//��Ա�������д�ӡ����
		//ͨ��space��ӡ
		for (int i = 0; i < m_WorkerNum; i++)
		{
			space[i]->showData();
		}
	}
	else
	{
		cout << "û���κ�ְ����" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManager::deleteWorkers()
{
	if (m_WorkerNum != 0)
	{
		cout << "��������Ҫɾ����ְ��λ��:>";
		int num = 0;
		cin >> num;
		cout << endl;

		if (num > 0 && num <= m_WorkerNum)
		{
			int index = 1;

			while (index <= num)
			{
				cout << "��������Ҫɾ���ĵ�" << index << "λְ���ı��>:";
				int ID = 0;
				cin >> ID;
				//����idΪi��Ա��
				int i = 0;
				for (i = 0; i < m_WorkerNum; i++)
				{
					if (space[i]->m_ID == ID)
					{
						//�ҵ�Ԫ�ؿ�ʼɾ��
						Worker* temp = space[i];
						int j = i + 1;
						//����ǰ��һ��Ԫ��
						while (j < m_WorkerNum)
						{
							space[j - 1] = space[j];
							j++;
						}
						delete temp;
						m_WorkerNum--;
						cout << "ɾ���ɹ���" << endl;
						break;
					}
				}

				if (i == m_WorkerNum && m_WorkerNum != 0)
				{
					cout << "δ���ҵ��˱�Ŷ�Ӧ��Ա����" << endl;
				}
				index++;
			}

			//ɾ����ϣ���������ְ��
			save();
		}
		else
		{
			cout << "���������Ƿ���" << endl;
		}
	}
	else
	{
		cout << "û���κ�ְ����" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManager::changeWorkerData()
{
	//ְ����Ϊ0ֱ�Ӳ���
	if (m_WorkerNum != 0)
	{
		cout << "��������Ҫ�޸ĵ�ְ���ı��:>";
		int id;
		cin >> id;
		cout << endl;

		//���Ҹ�Ա��
		int i = 0;
		for (i = 0; i < m_WorkerNum; i++)
		{
			if (space[i]->m_ID == id)
			{
				//�ҵ��ˣ������޸�
				cout << "1.���" << endl;
				cout << "2.����" << endl;
				cout << "3.ְλ" << endl;
				cout << "��ѡ��Ҫ�޸ĵ�ѡ��:>";
				int select = 0;
				cin >> select;
				cout << endl;
				if (select >= 1 && select <= 3)
				{
					if (select == 1)
					{
						cout << "�������µı��" << endl;
						int newID = 0;
						cin >> newID;
						cout << endl;
						
						space[i]->m_ID = newID;
						cout << "�޸ĳɹ�" << endl;
					}
					else if (select == 2)
					{
						cout << "�������µ�����" << endl;
						string newName;
						cin >> newName;
						cout << endl;

						space[i]->m_Name = newName;
						cout << "�޸ĳɹ�" << endl;
					}
					else
					{
						cout << "1.Ա��" << endl;
						cout << "2.����" << endl;
						cout << "3.�ϰ�" << endl;
						cout << "�������µ�ְλ" << endl;
						int newDid = 0;
						cin >> newDid;
						cout << endl;

						if (newDid >= 1 && newDid <= 3&& (newDid != space[i]->m_DepartMentID))
						{
							Worker* worker = 0;
							if (newDid == 1)
							{
								//�ĳ�Ա��
								worker = new Employee(space[i]->m_ID, space[i]->m_Name, 1);
								Worker* temp = space[i];
								space[i] = worker;
								delete temp;
							}
							else if (newDid == 2)
							{
								//�ĳɾ���
								worker = new Manager(space[i]->m_ID, space[i]->m_Name, 2);
								Worker* temp = space[i];
								space[i] = worker;
								delete temp;
							}
							else
							{
								//�ĳ��ϰ�
								worker = new Boss(space[i]->m_ID, space[i]->m_Name, 3);
								Worker* temp = space[i];
								space[i] = worker;
								delete temp;
							}
							cout << "�޸ĳɹ�" << endl;
						}
						else
						{
							cout << "ѡ�����!" << endl;
						}
					}
				}
				else
				{
					cout << "�������" << endl;
				}

				break;
			}
		}

		if (i == m_WorkerNum)
		{
			cout << "δ�鵽���Ϊ" << id << "��Ա��" << endl;
		}
		else
		{
			//�����޸ĺ��ְ����Ϣ
			save();
		}
	}
	else
	{
		cout << "û���κ�ְ����" << endl;
	}

	system("pause");
	system("cls");
}


void WorkerManager::sortByID()
{
	for (int i = 0; i < m_WorkerNum - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < m_WorkerNum - 1 - i; j++)
		{
			if (space[j]->m_ID > space[j + 1]->m_ID)
			{
				flag = 0;
				Worker* temp = space[j];
				space[j] = space[j + 1];
				space[j + 1] = temp;
			}
		}

		if (flag == 1)
		{
			break;
		}
	}

	save();
	cout << "������ɣ�" << endl;
	system("pause");
	system("cls");
}

void WorkerManager::shutDown()
{
	char input = 0;
	cout << "��ȷ��Ҫ�����" << endl;
	cout << "������1��ȷ��,��Ҫȡ�������������ּ�����:>";
	cin >> input;
	cout << endl;
	if (input == '1')
	{
		//cout << "����ɹ���" << endl;
		delete space;
		space = NULL;
		m_WorkerNum = 0;
		save();
		cout << "����ɹ���" << endl;

		system("pause");
		system("cls");
	}
	else
	{

		system("pause");
		system("cls");
		return;
	}

}

void WorkerManager::findWorker()
{
	if (m_WorkerNum != 0)
	{
		char input = 0;
		cout << "������Ա���ı�Ž��в���:>";
		cin >> input;
		cout << endl;
		int i = 0;
		for (i = 0; i < m_WorkerNum; i++)
		{
			if (space[i]->m_ID == (input - '0'))
			{
				//�ҵ���
				cout << "���ҳɹ���" << endl;
				space[i]->showData();
				break;
			}
		}

		if (i == m_WorkerNum)
		{
			cout << "û���ҵ���Ա����" << endl;
		}
	}
	else
	{
		cout << "û���κ�ְ��" << endl;
	}

	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()
{
	if (space != NULL)
	{
		delete space;
		space = NULL;
	}
}
