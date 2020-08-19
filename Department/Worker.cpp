#include "Worker.h"

Worker::Worker()
{
	strcpy_s(name, "No name");
	startYear = 0;
	salary = 0;
	experience = 0;
	type = NONE;
}
Worker::Worker(const char* name, int startYear, double salary, int exp, WorkerType type)
{
	strcpy_s(this->name, name);
	this->startYear = startYear;
	this->salary = salary;
	this->experience = exp;
	this->type = type;
}
// ~seters~
void Worker::SetName(const char* name)
{
	strcpy_s(this->name, name);
}
void Worker::SetType(WorkerType type)
{
	this->type = type;
}
void Worker::SetStartYear(int startYear)
{
	this->startYear = startYear;
}
void Worker::SetSalary(double salary)
{
	this->salary = salary;
}
// ~geters~
const char* Worker::GetName()const
{
	return name;
}
WorkerType Worker::GetType()const
{
	return type;
}
int Worker::GetStartYear()const
{
	return startYear;
}
int Worker::GetExperience() const
{
	return experience;
}
double Worker::GetSalary()const
{
	return salary;
}
// ~methods~
void Worker::ShortPrint()const
{
	cout << "Name: " << name<<"   |   Salary: " << salary << endl;
}
void Worker::FullPrint()const

{
	cout << "Name: " << name << "   |   Start Year: " << startYear << "   |   Salary: " << salary <<"   |   Experience: "<< experience << "   |   Worker Type: " << type << endl;
}


