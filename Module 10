#include <iostream>
using namespace std;

// Base class
#ifndef THEUSER_H
#define THEUSER_H


class User {
public:
    virtual void accessLevel() {
        cout << "General Access\n";
    }
};
#endif
//____________________________
// Derived from User
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "User.h"

class Employee : public User {
public:
    void accessLevel() override {
        cout << "Employee Access\n";
    }
};
#endif

//____________________________
// Derived from Employee
#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H
#include "Employee.h"


class InventoryManager : public Employee {
public:
    void accessLevel() override {
        cout << "Full Inventory Management Access\n";
    }
};
#endif
//____________________________
// Derived from Main
#include <iostream>
#include "InventoryManager.h"
using namespace std;


int main() {
    InventoryManager mgr;
    mgr.accessLevel(); // Prints all of the inventory management access

    return 0;
}
