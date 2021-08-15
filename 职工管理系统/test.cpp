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
		cout << "��ѡ��:>";
		cin >> input;
		switch (input)
		{
		case 1:
			//����ְ����Ϣ
			wm.addWorkerData();
			break;
		case 2:
			//��ʾְ����Ϣ
			wm.showWorkerData();
			break;
		case 3:
			//ɾ����ְְ��
			wm.deleteWorkers();
			break;
		case 4:
			//�޸�ְ����Ϣ
			wm.changeWorkerData();
			break;
		case 5:
			//����ְ����Ϣ
			wm.findWorker();
			break;
		case 6:
			//���ձ������
			wm.sortByID();
			break;
		case 7:
			//��������ĵ�
			wm.shutDown();
			break;
		default:
			//ֱ���˳�����
			wm.exitSystem();
		}

	} while (input);

	system("pause");
	return 0;
}