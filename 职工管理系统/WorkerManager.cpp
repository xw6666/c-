#include "WorkerManager.h"

WorkerManager::WorkerManager()
{
	//分三种情况
	//1.没有保存文档
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	if (!ifs.is_open())
	{
		//打开失败
		//cout << "没有保存文档！" << endl;
		m_WorkerNum = 0;
		space = NULL;
		isEmpty = true;
		ifs.close();
		return;
	}

	//2.有保存文档，但是文档为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//文档为空
		//cout << "文档为空！" << endl;
		m_WorkerNum = 0;
		space = NULL;
		isEmpty = true;
		ifs.close();
		return;
	}
	ifs.close();

	//3.有保存文档，文档不为空
	//进行拷贝
	
	//统计现有职工数量
	int num = saveNum();
	//cout << "现有" << num << "名员工" << endl;
	
	//更新员工数
	m_WorkerNum = num;
	
	//对相应员工数进行空间开辟
	space = new Worker * [m_WorkerNum];

	//拷贝数据到space
	int ID;
	string name;
	int DepartmentID;
	int index = 0;  //作为存放时使用的数组下标
	ifs.open(FILENAME, ios::in);
	while (ifs >> ID && ifs >> name && ifs >> DepartmentID)
	{
		Worker* worker = NULL;
		if (DepartmentID == 1)
		{
			//员工
			worker = new Employee(ID, name, DepartmentID);
		}
		else if (DepartmentID == 2)
		{
			//经理
			worker = new Manager(ID, name, DepartmentID);
		}
		else
		{
			//老板
			worker = new Boss(ID, name, DepartmentID);
		}

		//通过index存放数据
		this->space[index++] = worker;
	}
}

void WorkerManager::showMenu()
{
	std::cout << "********************************************" << std::endl;
	std::cout << "*********  欢迎使用职工管理系统！ **********" << std::endl;
	std::cout << "*************  0.退出管理程序  *************" << std::endl;
	std::cout << "*************  1.增加职工信息  *************" << std::endl;
	std::cout << "*************  2.显示职工信息  *************" << std::endl;
	std::cout << "*************  3.删除离职职工  *************" << std::endl;
	std::cout << "*************  4.修改职工信息  *************" << std::endl;
	std::cout << "*************  5.查找职工信息  *************" << std::endl;
	std::cout << "*************  6.按照编号排序  *************" << std::endl;
	std::cout << "*************  7.清空所有文档  *************" << std::endl;
	std::cout << "********************************************" << std::endl;
	std::cout << std::endl;
}

void WorkerManager::exitSystem()
{
	std::cout << "欢迎下次使用" << std::endl;
	system("pause");
	exit(-1);
}

void WorkerManager::addWorkerData()
{
	cout << "请输入要添加的职工数量:>";
	int addNum = 0;
	cin >> addNum;
	cout << endl;
	if (addNum > 0)
	{
		int newNum = m_WorkerNum + addNum;  //新的职工数量 = 原来的职工数量 + 增加的数量
		Worker** newSpace = new Worker* [newNum];
		
		//如果有原来的数据，拷贝到新空间
		if (space != NULL)
		{
			for (int i = 0; i < m_WorkerNum; i++)
			{
				newSpace[i] = space[i];
			}
			//拷贝完后释放掉原来的空间
			delete space;
			space = NULL;
		}

		//开始存入新数据
		int j = 1; //记录存储到第几个员工
		for (int i = m_WorkerNum; i < newNum; i++)
		{
			int ID = 0;
			string name;
			int DepartMentID = 0;
			cout << "请输入第" << j << "个职工编号:>";
			cin >> ID;
			cout << endl;
			cout << "请输入第" << j << "职工工姓名:>";
			cin >> name;
			cout << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cout << "请选择职工职位:>";
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
				cout << "输入错误！" << endl;
				break;
			}

			j++;  //更新添加的员工数
		}
		

		//更新现有员工数和管理指针
		m_WorkerNum = newNum;
		space = newSpace;
		//存完以后进行保存

		//保存
		save();
		cout << "添加成功！" << endl;

	}
	else
	{
		//输入错误
		cout << "输入错误!" << endl;
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
	//通过读取行来计算个数
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
	//判断是否有没有员工
	if (m_WorkerNum != 0)
	{
		//有员工，进行打印操作
		//通过space打印
		for (int i = 0; i < m_WorkerNum; i++)
		{
			space[i]->showData();
		}
	}
	else
	{
		cout << "没有任何职工！" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManager::deleteWorkers()
{
	if (m_WorkerNum != 0)
	{
		cout << "请输入需要删除的职工位数:>";
		int num = 0;
		cin >> num;
		cout << endl;

		if (num > 0 && num <= m_WorkerNum)
		{
			int index = 1;

			while (index <= num)
			{
				cout << "请输入你要删除的第" << index << "位职工的标号>:";
				int ID = 0;
				cin >> ID;
				//查找id为i的员工
				int i = 0;
				for (i = 0; i < m_WorkerNum; i++)
				{
					if (space[i]->m_ID == ID)
					{
						//找到元素开始删除
						Worker* temp = space[i];
						int j = i + 1;
						//覆盖前面一个元素
						while (j < m_WorkerNum)
						{
							space[j - 1] = space[j];
							j++;
						}
						delete temp;
						m_WorkerNum--;
						cout << "删除成功！" << endl;
						break;
					}
				}

				if (i == m_WorkerNum && m_WorkerNum != 0)
				{
					cout << "未查找到此编号对应的员工！" << endl;
				}
				index++;
			}

			//删除完毕，保存现有职工
			save();
		}
		else
		{
			cout << "输入人数非法！" << endl;
		}
	}
	else
	{
		cout << "没有任何职工！" << endl;
	}

	system("pause");
	system("cls");
}

void WorkerManager::changeWorkerData()
{
	//职工数为0直接不做
	if (m_WorkerNum != 0)
	{
		cout << "请输入需要修改的职工的编号:>";
		int id;
		cin >> id;
		cout << endl;

		//查找该员工
		int i = 0;
		for (i = 0; i < m_WorkerNum; i++)
		{
			if (space[i]->m_ID == id)
			{
				//找到了，进行修改
				cout << "1.编号" << endl;
				cout << "2.姓名" << endl;
				cout << "3.职位" << endl;
				cout << "请选择要修改的选项:>";
				int select = 0;
				cin >> select;
				cout << endl;
				if (select >= 1 && select <= 3)
				{
					if (select == 1)
					{
						cout << "请输入新的编号" << endl;
						int newID = 0;
						cin >> newID;
						cout << endl;
						
						space[i]->m_ID = newID;
						cout << "修改成功" << endl;
					}
					else if (select == 2)
					{
						cout << "请输入新的姓名" << endl;
						string newName;
						cin >> newName;
						cout << endl;

						space[i]->m_Name = newName;
						cout << "修改成功" << endl;
					}
					else
					{
						cout << "1.员工" << endl;
						cout << "2.经理" << endl;
						cout << "3.老板" << endl;
						cout << "请输入新的职位" << endl;
						int newDid = 0;
						cin >> newDid;
						cout << endl;

						if (newDid >= 1 && newDid <= 3&& (newDid != space[i]->m_DepartMentID))
						{
							Worker* worker = 0;
							if (newDid == 1)
							{
								//改成员工
								worker = new Employee(space[i]->m_ID, space[i]->m_Name, 1);
								Worker* temp = space[i];
								space[i] = worker;
								delete temp;
							}
							else if (newDid == 2)
							{
								//改成经理
								worker = new Manager(space[i]->m_ID, space[i]->m_Name, 2);
								Worker* temp = space[i];
								space[i] = worker;
								delete temp;
							}
							else
							{
								//改成老板
								worker = new Boss(space[i]->m_ID, space[i]->m_Name, 3);
								Worker* temp = space[i];
								space[i] = worker;
								delete temp;
							}
							cout << "修改成功" << endl;
						}
						else
						{
							cout << "选择错误!" << endl;
						}
					}
				}
				else
				{
					cout << "输入错误！" << endl;
				}

				break;
			}
		}

		if (i == m_WorkerNum)
		{
			cout << "未查到编号为" << id << "的员工" << endl;
		}
		else
		{
			//保存修改后的职工信息
			save();
		}
	}
	else
	{
		cout << "没有任何职工！" << endl;
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
	cout << "排序完成！" << endl;
	system("pause");
	system("cls");
}

void WorkerManager::shutDown()
{
	char input = 0;
	cout << "你确定要清空吗？" << endl;
	cout << "请输入1以确认,若要取消，按任意数字键即可:>";
	cin >> input;
	cout << endl;
	if (input == '1')
	{
		//cout << "清除成功！" << endl;
		delete space;
		space = NULL;
		m_WorkerNum = 0;
		save();
		cout << "清除成功！" << endl;

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
		cout << "请输入员工的编号进行查找:>";
		cin >> input;
		cout << endl;
		int i = 0;
		for (i = 0; i < m_WorkerNum; i++)
		{
			if (space[i]->m_ID == (input - '0'))
			{
				//找到了
				cout << "查找成功！" << endl;
				space[i]->showData();
				break;
			}
		}

		if (i == m_WorkerNum)
		{
			cout << "没有找到该员工！" << endl;
		}
	}
	else
	{
		cout << "没有任何职工" << endl;
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
