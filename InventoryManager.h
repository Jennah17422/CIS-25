#include <iostream>
using namespace std;


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