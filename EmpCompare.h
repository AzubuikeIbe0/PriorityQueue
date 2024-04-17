#pragma once
#include "Employee.h"
#include <iostream>
#include <string>
#include <queue>

class EmpComp2 {
public:
    bool operator()(const Employee& emp1, const Employee& emp2) const;
};

