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