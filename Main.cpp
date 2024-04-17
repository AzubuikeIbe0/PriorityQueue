#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include "EmpCompare.h"
#include "Employee.h"
#include "Star2.h"
#include "Star.h"
#include "StarCompare.h"
using namespace std;



int main() {

    const vector<int> data = { 10, 2, 4, 8, 6, 9 };
    // defining priority queue
    priority_queue<int> pq;
    // printing array
    cout << "Vector: ";
        for (auto i : data) {
            cout << i << ' ';
        }
    cout << endl;

    // pushing array sequentially one by one
    for (int i = 0; i < 6; i++) {
        pq.push(data[i]);
    }
    // printing priority queue
    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
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


