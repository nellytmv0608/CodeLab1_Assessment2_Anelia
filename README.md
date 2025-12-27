Development Documentation

Name: Anelia Tomova
# CodeLab1_Assessment2: Vending Machine_Utility App

# Specification
In this project, I have built a basic vending machine program using C++. The program shows a menu of items, lets the user pick a product by entering a number, accepts money, and gives back the correct change. My vending machine includes six items, which are grouped into simple categories like drinks and snacks. It also checks for valid input, keeps track of stock, and lets the user buy more than one item if they want to. The whole program was made using core C++ skills such as structs, vectors, loops, and functions.

# System Flow
A flowchart that I have included in my Word document shows how the vending machine program works: ask the user to insert money - check whether the amount entered is valid - menu is being displayed - checks if the item is in stock and if the user has enough money for it - dispensing and updating the remaining balance - user can continue buying more items or choose to finish - program returns change - end

# Technical Implementation
 * Data Structure - an item struct is used to store product details such as name, category, price and stock
 * Functions - used to keep the code in order: displayMenu(), getIntInput(), getItemIndex()
 * Input Validation - handled using cin checks to ensure only valid numeric values are accepted
 * Stock Management - each item has a stock value that decreases after every purchase this helps the program preventing users from buying items that are out of stock
 * Money Handling - checks the user enters a valid amount of money and remaining balance is displayed after each transaction
 * Error Handling - asks the user to enter a valid numeric amount all over again until entering it
 * Iteration and Selection - a while loop allows multiple purchases at once, while if and else statements handle decisions like valid input, item availability and exit conditions

 # Critical Reflection 
The program that I have created shows effective use of C++ consepts such as structs, vectors, input validation, iteration, and conditional logic to create a functional vending machine. Features like stock control, balance checking, and repeated purchasing improve realism and usability. Through this project, I developed a stronger understanding of program structure and modular design. Future improvements could include loading items from files, improving the user interface, and expanding the system using classes and more advanced object-oriented techniques.

# Deliverables 
* Vending Machine C++ code can be found in GitHub repository
* Development Document (this file and World document)
* Walkthrough video (can be found in my World document)
* System flowchart (can be found in my World document)
   
