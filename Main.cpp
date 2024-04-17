#include <iostream>
#include <string>
#include <queue>
#include "EmpCompare.h"
#include "Employee.h"
#include "Star2.h"
#include "Star.h"
#include "StarCompare.h"
using namespace std;



int main() {
    // Priority queue of employees
    priority_queue<Employee, deque<Employee>, EmpComp2> empQueue;

    // Priority queue of stars
    priority_queue<Star2> starQueue;

    // Sample Employee objects
    Employee emp1{ 1000 };
    Employee emp2{ 2000 };
    Employee emp3{ 1500 };

    // Insert Employee objects into empQueue
    empQueue.push(emp1);
    empQueue.push(emp2);
    empQueue.push(emp3);

    // Sample Star2 objects
    Star2 star1{ "Star1", 10.5 };
    Star2 star2{ "Star2", 20.5 };
    Star2 star3{ "Star3", 15.5 };

    // Insert Star2 objects into starQueue
    starQueue.push(star1);
    starQueue.push(star2);
    starQueue.push(star3);

    // Output the top element from each queue
    cout << "Top employee salary in empQueue: " << empQueue.top().salary << endl;
    cout << "Top star identifier in starQueue: " << starQueue.top().getIdentifier() << endl;

    return 0;
}


