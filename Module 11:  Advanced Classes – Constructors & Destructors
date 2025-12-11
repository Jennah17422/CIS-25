#include <iostream>

using namespace std;

class Product {
private:
    int id;
    string name;
    double price;

public:

    Product(int pid, string pname, double pPrice){
        id = pid;
        name = pname;
        price = pPrice;
    }
    ~Product() {
        cout << "Destroyed called." << endl;   
    }
    
    void printDetails (){
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Price: $" << price << endl;
    }
};

int main() {
    
    Product p(100013291, "Iphone", 639.57);
    p.printDetails();
   
    return 0;
}
