#include <iostream>
using namespace std;
#include "WorkerManager.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

int main()
{
	WorkerManager wm;

	int input = 0;
	do
	{
		wm.showMenu();
		cout << "请选择:>";
		cin >> input;
		switch (input)
		{
		case 1:
			//增加职工信息
			wm.addWorkerData();
			break;
		case 2:
			//显示职工信息
			wm.showWorkerData();
			break;
		case 3:
			//删除离职职工
			wm.deleteWorkers();
			break;
		case 4:
			//修改职工信息
			wm.changeWorkerData();
			break;
		case 5:
			//查找职工信息
			wm.findWorker();
			break;
		case 6:
			//按照编号排序
			wm.sortByID();
			break;
		case 7:
			//清空所有文档
			wm.shutDown();
			break;
		default:
			//直接退出程序
			wm.exitSystem();
		}

	} while (input);

	system("pause");
	return 0;
}