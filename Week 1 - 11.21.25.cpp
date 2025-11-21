//Week 1


#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

// Module 6 Strings and Classes 
class Item {
public:
   string itemName ; 
   int quantity; 
   
   void saveToFile(){
        ofstream out("items.txt");
        out << itemName  << "," << quantity << endl;
        out.close();
   }
   
   
   void loadFromFile(){
        ifstream in("items.txt");
        getline(in, itemName, ',');
        in >> quantity;
        in.close();
        
        cout << "Loaded: " << itemName << " , " << quantity << endl;
   }
};
  
// Module 11:  Advanced Classes – Constructors & Destructors
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
        cout << "Product Destroyed:" << name << endl;   
    }
    
    void printDetails (){
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Price: $" << price << endl;
    }
};

int main() {
    Item tool; //Created item
    
    tool.itemName  = "Werench"; //Assiggning their values
    tool.quantity = 5;
    
    tool.saveToFile(); //Save to file
    
    Item loadedTool; //Loads from file 
    loadedTool.loadFromFile();
    
// Module 11:  Advanced Classes – Constructors & Destructors
    Product p(101, "Laptop", 799.99);
    p.printDetails();
;    
    return 0;
}


