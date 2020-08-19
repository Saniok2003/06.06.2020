#include "Department.h"

Department::Department(const Department& temp)
{
	workerCount = temp.workerCount;
	workers = new Worker[workerCount];
	for (int i = 0; i < workerCount; i++)
	{
		workers[i] = temp.workers[i];
	}
}
Department::~Department()
{
	delete[] workers;
}
void Department::ShowWorkers()const
{
	for (int i = 0; i < workerCount; i++)
	{
		workers[i].FullPrint();
	}
}
void Department::AddWorker(Worker newWorke)
{
	Worker* NewWorkers = new Worker[1 + workerCount];
	for (int i = 0; i < workerCount; i++)
	{
		NewWorkers[i] = workers[i];
	}
	NewWorkers[workerCount - 1] = newWorke;
	delete[]workers;
	workers = NewWorkers;
}
void Department::SearchByName(const char* name)const
{
	for (int i = 0; i < workerCount; i++)
	{
		if (!strcmp(workers[i].GetName(), name))
		{
			workers[i].FullPrint();
		}
	}
}
void Department::PrintByType(WorkerType type)const
{
	for (int i = 0; i < workerCount; i++)
	{
		if (workers[i].GetType() == type)
		{
			workers[i].FullPrint();
		}
	}
}
void Department::PrintByName(const char* name)const
{
	for (int i = 0; i < workerCount; i++)
	{
		if (workers[i].GetName() == name)
		{
			workers[i].ShortPrint();
		}
	}
}
double Department::AverageZP()const
{
	double avzp = 0;
	for (int i = 0; i < workerCount; i++)
	{
		avzp = avzp + workers[i].GetSalary();
	}
	return avzp / double(workerCount);
}

void Department::PrintByExp(const int exp)const
{
	for (int i = 0; i < workerCount; i++)
	{
		if (workers[i].GetExperience() >= exp)
		{
			workers[i].FullPrint();
		}
	}
}

