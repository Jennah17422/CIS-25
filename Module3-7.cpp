#include <iostream>
#include <fstream> 
#include <string> 
using namespace std;

// Module 7: Pointers and Memory 
struct InventoryItem {
    string name;
    int id;
};


// Module 6: Strings and Classes 
class Item { 
public: 
   string name; 
   int amount; 
   
   void saveToFile() { 
       ofstream out("items.txt"); 
       if (out.is_open()) { 
           out << name << "," << amount; 
           out.close(); 
       }
   }

    void loadFromFile() { 
           ifstream in("items.txt");
           getline(in, name, ',');
           in >> amount;
           in.close();
           
           cout << "Loaded: " << name << ", " << amount << endl;
    } 
};



// Module 5: Functions and Loops
void showingMenu() { 
cout << "1. Add\n2. Subtract\n3. view\n4. Exit\n"; 
} 

// Module 7: Pointers and Memory 
int binarySearch(InventoryItem* arr, int size, int targetID){
    int left = 0;
    int right = size - 1;
    
    while (left <= right){
        int mid = (left + right ) / 2;
        if (arr[mid].id == targetID){
            return mid;
        }
        else if (arr[mid].id > targetID){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
// Module 3: Input/Output & Variables 
    string item_name; 
	int quantity; 
	int cost; 
    int option; // Module 4: Debugging and Logic
    int size = 50; // Module 7: Pointers and Memory 

    cout << "Hello. " << "Please input item name: "; 
	cin >> item_name; 
	
	cout << "Enter quantity: "; 
	cin >> quantity; 
	
	cout << "Enter cost of item: "; 
	cin >> cost; 
 
	cout << "Total cost for " << item_name << ": $" << (quantity * cost) << endl; 

    cout << "Now please provide cash or card. "; 


// Module 4: Debugging and Logic

    cout << "1. Add an Item\n2. View Items\n3. Delete an Item\n Exit This Menu\n"; 
    cout << "Please choose an option: "; 
    cin >> option; 
 
    if (option == 1) cout << "Item added!\n"; 
    else if (option == 2) cout << "Showcase items...\n"; 
    else if (option == 3) cout << "Delete Item\n"; 
    else if (option == 4) cout << "Exiting...\n"; 
    else cout << "Invalid option.\n";

    
    
// Module 4: Debugging and Logic - Part 2
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    
    if(n1 >= n2 && n1 >= n3) {
        cout << "Largest number: " << n1;
    }
    else if(n2 >= n1 && n2 >= n3) {
        cout << "Largest number: " << n2;
    }
    else {
        cout << "Largest number: " << n3;
    }
    
// Module 5: Functions and Loops
	cout << "\n"; 

    int menu_option; 
	do { 
    	showingMenu(); 
    	cin >> menu_option; 
    } while (menu_option != 4);

// Module 6: Strings and Classes 
    Item tool;
    tool.name  = "Wrench";
    tool.amount = 9;

    tool.saveToFile();
    
    Item loadTool;
    loadTool.loadFromFile();

// Module 7: Pointers and Memory 
    InventoryItem* inventory = new InventoryItem[size];

    for (int i = 0; i < size; i++){
        inventory[i].id = i + 1;
        inventory[i].name = "Item_" + to_string(i + 1);
    }

    int target;
    cout << "Please enter an item ID to search, your numbers are 1 to 100: ";
    cin >> target;

    int result = binarySearch(inventory, size, target);
    if (result != -1){
        cout << "Here it is! Name: " << inventory[result].name << " | ID: " << inventory[result].id << endl;
    }else{
        cout << "Item with the ID " << target << " was not found." << endl;
    }
    
    delete[] inventory;

    
    return 0; 
}
