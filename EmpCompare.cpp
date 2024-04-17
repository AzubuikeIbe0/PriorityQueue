#include "EmpCompare.h"

bool EmpComp2::operator()(const Employee& emp1, const Employee& emp2) const
{
	return emp1.salary > emp2.salary;
}
