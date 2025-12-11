#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 


class Item { 
public: 
   string itemName; 
   int quantity; 
 
    void saveToFile() { 
       ofstream out("items.txt"); 
       if (out.is_open()) { 
           out << itemName << ", " << quantity << endl; 
           out.close(); 
           cout << "Item is saved to file." << endl; 
       } else { 
           cout << "Sorry. Unable to open file for writing." << endl; 
       } 
   } 
 


   void loadFromFile() { 
       ifstream in("items.txt"); 
       if (in.is_open()) { 
           string line; 
           while (getline(in, line)) { 
               cout << "File content: " << line << endl; 
           } 
           in.close(); 
       } else { 
           cout << "Sorry. Unable to open file for writing." << endl; 
       } 
   } 
}; 

int main() { 
    
    Item tool; //Created item
    
    //Assigning their values
    tool.quantity = 5;
    tool.itemName  = "Werench"; 

    //Save to file
    tool.saveToFile(); 
   
    //Loads from file 
    Item loadedTool; 
    loadedTool.loadFromFile();
    
    
   return 0; 
} 
