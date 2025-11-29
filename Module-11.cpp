#include <iostream>
using namespace std;

class Product {
    int id;
    string name;
    double price;
public:
    Product(int i, string n, double p) : id(i), name(n), price(p) {// Constructor
        cout << "Constructor called\n";
    }
    ~Product() {// Destructor
        cout << "Destructor called\n";
    }
    void printDetails() { //Method 
        cout << "ID: " << id << endl;
        cout <<"Name: " << name << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Product p(21090, "Fish Food", 10.59);
    p.printDetails();
    return 0;
}
