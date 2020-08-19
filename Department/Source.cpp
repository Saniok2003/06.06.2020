#include <iostream>
#include "Department.h"

int main()
{
	Worker r1("Alex", 2020, 500, 100, ADMIN);
	r1.FullPrint();
	r1.ShortPrint();

	return 0;
}