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
	//打印菜单
	void showMenu();
	//退出接口
	void exitSystem();
	//增加员工信息
	void addWorkerData();
	//保存文件
	void save();
	//现有保存职工数
	int saveNum();
	//展示职工信息
	void showWorkerData();
	//删除离职职工
	void deleteWorkers();
	//修改职工信息
	void changeWorkerData();
	//按照编号排序
	void sortByID();
	//清空所有文档
	void shutDown();
	//查找职工信息
	void findWorker();
	~WorkerManager();

	//记录员工人数
	int m_WorkerNum;
	//维护存储空间
	Worker** space;
	//判断员工数量是否为空
	bool isEmpty;
};