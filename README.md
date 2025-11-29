# Week 6

// Module 3: Input/Output & Variables 

Building a menu using cout, cin, variables, and naming conventions:
  - The program asks the user to enter an item, quantity, and the name of the item.
  - And it multiplies the cost per item, then displays the total to the user. 

  
__________________________________________________________________________________________________________
// Module 4: Debugging and Logic, Menu system

Debugging, logical errors vs. syntax errors, logical operators, if-statements, nested if-statements:

  - Displays 4 options to the user, coded in we can see if/else-if statements used, and this displays the correct message based on the option the user chooses. 
  
//       Part 2: Debugging Code 
  - Added corrections to the code that do not change the code dramatically, but makes it run smoothly. 


__________________________________________________________________________________________________________
// Module 5: Functions and Loops

Functions, header files, loops :

  - Creates a menu with 4 options, showingMenu displays those 4 choices for the user to pick. 
  - The do-while loop shows the menu to the user till they pick option 4, which is to exit the program.


__________________________________________________________________________________________________________
 // Module 6: Strings and Classes 
 
Building a class to manage inventory items and using file I/O to save and retrieve the item data:

  - Class name is Item, beneath is the string name and quantity.
  - loadFromFile to read the display data from the file.
  - Then saveToFile saves data into items.txt.


__________________________________________________________________________________________________________
 // Module 7: Structs, Binary Search, Pointers, and Dynamic Memory
 
Use dynamic memory allocation and applying binary search to locate items in an list: This uses a structure 
  - Created a struct named InventoryItem that holds the item's name and also an ID.
  -  Made a dynamic array of 50 InventoryItem objects, then filled the array, assigning each item an ID from 1 to 50. When ran the name will be "Item_" + the number of 1 to 50, the binary search function finds the number the user entered. 
  - If the number isn't within the range of the user's input, then it will say item not found.
  - Delete[] frees the dynamic array, and the memory is cleaned up.


__________________________________________________________________________________________________________
 // Module 8: Bank Account Simulation
 
Class Design and File:
  - Created a class called BankAccount with the attributes and methods that manage the account purchases and balance.
  - It saves the transactions to transactions.txt for users' permanent account records.
  - The account has 4 purchases in its history, a set amount of money, and the balance after all transactions. The user will see all of this when the program is ran. 
  - PDF will be uploaded with running program. 


__________________________________________________________________________________________________________
 // Module 9: Inventory Management with Arrays
 
Arrays, loops, class usage, basic inventory tracking:

  - Itemsearch is what I named my function; it holds takes the array of items, looks for matching names input by the user, and prints the same quantity if it's there. If not, then it informs the user it's not in the array.  
  - Created a class labeled Item that stores the name of the object and the integer quantity. 
  - Then made an array of item objects with 7 items. The user will input the name of the object, then the number of quantity, and a loop will run to display the same prompt till the full 7 have been inputed by user. 


__________________________________________________________________________________________________________
 // Module 10: Inheritance, Method Overriding

Inheritance, method overriding, and access control in class hierarchies:

  - Virtual function is called accessLevel(), which creates a base name for the user.
  - Made a derived class called Employee, which inherits from User and inside it it overrides the accessLevel() function, which will print a message instead of the base version. 
  - Then made another derived class named InventoryManager, which takes from Employee. I overrode accessLevel() AGAIN, so now it prints all the inventory manager level access.
  - In main.cpp I created an InventoryManager object and called the accessLevel() to demonstrate which version is executed.
  - Then, finally, made each class into its own header file.

__________________________________________________________________________________________________________
 // Module 11:  Advanced Classes – Constructors & Destructors
 
Functions, header files, loops :

  - 
  - 

