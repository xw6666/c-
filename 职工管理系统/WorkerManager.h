#pragma once
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#define FILENAME "workerdata.txt"

class WorkerManager
{
public:
	WorkerManager();
	//��ӡ�˵�
	void showMenu();
	//�˳��ӿ�
	void exitSystem();
	//����Ա����Ϣ
	void addWorkerData();
	//�����ļ�
	void save();
	//���б���ְ����
	int saveNum();
	//չʾְ����Ϣ
	void showWorkerData();
	//ɾ����ְְ��
	void deleteWorkers();
	//�޸�ְ����Ϣ
	void changeWorkerData();
	//���ձ������
	void sortByID();
	//��������ĵ�
	void shutDown();
	//����ְ����Ϣ
	void findWorker();
	~WorkerManager();

	//��¼Ա������
	int m_WorkerNum;
	//ά���洢�ռ�
	Worker** space;
	//�ж�Ա�������Ƿ�Ϊ��
	bool isEmpty;
};