#include <iostream>
#include <fstream>
#include <string>
using namespace std;



// Base class
class User {
public:
    virtual void accessLevel() {
        cout << "General Access\n";
    }
};

// Derived from User
class Employee : public User {
public:
    void accessLevel() override {
        cout << "Employee Access\n";
    }
};

// Derived from Employee
class InventoryManager : public Employee {
public:
    void accessLevel() override {
        cout << "Full Inventory Management Access\n";
    }
};




 // Module 8: Bank Account Simulation
class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0.00;
    }

    void deposit(double cash) {
        balance += cash;
cout << "Cash Before Spending was " << balance << endl;
        saveTransaction("Deposit", cash);
    }

    void makePurchase(string item, double cost) {
        if (cost > balance) {
            cout << "Insufficient funds for " << item << endl;
        } else {
            balance -= cost;
    	cout << "Purchased: " << item << " " << cost << endl;
            saveTransaction("Purchase - " + item, cost);
        }
    }

    void displayBalance() {
        cout << "\nCurrent amount: $" << balance << endl;
    }

    void saveTransaction(string type, double cash) {
        ofstream file("transactions.txt", ios::app); //each action (deposit and purchase) is written to transaction.txt  
        if (file.is_open()) {
            file << type << ": $" << cash << endl;
            file.close();
        }
    }
};
 
 // Module 9: Inventory Management with Arrays
class Item {
public:
    string name;
    int quantity;
};

void Itemsearch( Item inventory[], int size, string Nametarget){
    for (int i = 0; i < size; i++) {
        if (inventory[i].name == Nametarget){
            cout << "Quantity is " << inventory[i].quantity << endl;
            return;
        }
    }
    cout << "Sorry, looks like the item is not in inventory." << endl;
}

 // Module 8: Bank Account Simulation
int main() {
    const int size = 7;  // Module 9: Arrays object
    Item inventory[size]; // Module 9: Amount of whats in inventory.
    
    BankAccount myAccount; //BankAccount object
    cout << "________________Bank Balance History________________ \n"; 
    
    cout << "\n" << endl;
    myAccount.deposit(793.21);
	cout << "\n" << endl;
	
    myAccount.makePurchase("Toy Truck", 9.99);
    myAccount.makePurchase("Fish Food", 15.00);
    myAccount.makePurchase("Lighter", 0.90);
    myAccount.makePurchase("Mittens", 12.50);

    myAccount.displayBalance(); //Prints final balance.
    

//_____________________________________________________________________________________________
 // Module 9: Inventory Management with Arrays
    cout << "Hello.\nPlease enter the name and quantity for " << size << " item. (NO SPACES):\n"; 
    for  (int i = 0; i < size; i++){
        cout << "\nItem " << i + 1 << " name: ";
        cin >> inventory[i].name;
        
        cout << "Quantity of item: ";
        cin >> inventory[i].quantity;
    }
    
    cout << "\n________________Inventory List________________ \n";
    for  (int i = 0; i < size; i++){
        cout << "Item: " << inventory[i].name << " | Quantity: " << inventory[i].quantity << endl;
    }
    
    
    string Namesearch;
    cout << "\nSearch for item name: ";
    cin >> Namesearch;
    
    Itemsearch(inventory, size, Namesearch);
    
    InventoryManager mgr;
    mgr.accessLevel(); // Should print: Full Inventory Management Access

    
    return 0;
}
