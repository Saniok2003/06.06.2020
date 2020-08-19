#pragma once
#include <iostream>
#include "Worker.h"
using namespace std;
class Department
{
private:
	Worker* workers;
	int workerCount;
public:
	Department() : workerCount(0), workers(nullptr) {}
	Department(const Department& temp);
	~Department();
	void ShowWorkers()const;
	void AddWorker(Worker newWorke);
	void SearchByName(const char* name)const;
	void PrintByName(const char* name)const;
	void PrintByType(WorkerType type)const;
	double AverageZP()const;
	void PrintByExp(const int exp)const;

};