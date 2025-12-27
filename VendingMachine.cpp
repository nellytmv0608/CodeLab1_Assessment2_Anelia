// Program developed by me (Anelia Tomova).
// General C++ struct, vector, and input-handling techniques informed by tutorials:
// - cplusplus.com: https://cplusplus.com/reference/vector/vector/
// - GeeksforGeeks (Structures in C++): https://www.geeksforgeeks.org/structures-in-cpp/
// - YouTube C++ tutorials
// All logic, structure, and implementation adapted and written by me (Anelia Tomova).

#include <iostream> // input/output stream library (cin and cout)
#include <vector> // store many items in a list
#include <limits> // handle input validation safely
using namespace std;

// Item Structure
struct Item {
    int id;  // item number used for selection
    string name; // name of the item
    string category; // item category
    double price; // cost
    int stock; // number of items available
};

// Display menu
void displayMenu(const vector<Item>& items) {
    cout << "\n==== VENDING MACHINE MENU ====\n";
    for (const auto& item : items) { // loop through all items and to display their details
        cout << item.id << ") " << item.name 
             << " (" << item.category << ") - £" 
             << item.price << " | Stock: " << item.stock << endl;
    }
    cout << "===============================\n";
}

// Input validation for numbers ; to make sures the program doesn't crash is the user enters invalid number
int getIntInput() {
    int value;
    while (!(cin >> value)) { // keep asking the user until a valid number is entered
        cout << "Invalid input. Please enter a number: ";
        cin.clear(); // this clears error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // removes the incorrect input
    }
    return value;
}

// Get user-selected item by ID
int getItemIndex(const vector<Item>& items, int id) {
    for (int i = 0; i < items.size(); i++) {
        if (items[i].id == id) return i; // return index if item is found
    }
    return -1; // returns -1 if item doesn't exist
}

// Main Program
int main() {
    double money = 0.0; // this stores the user's money balance

    // Pre-set items of the vending machine
    vector<Item> items = {
        {1, "Sprite", "Cold Drink", 1.20, 5},
        {2, "Water", "Cold Drink", 1.00, 5},
        {3, "Tea", "Hot Drink", 1.50, 5},
        {4, "Hot chocolate", "Hot Drink", 1.80, 5},
        {5, "Crisps", "Snack", 1.00, 5},
        {6, "Kinder Bueno", "Snack", 1.30, 5}
    };

    cout << "Welcome to the Vending Machine!\n";

    // Asks the user to insert money
    cout << "Please insert money: £";
    cin >> money;

    // This validates if it's money(number) input
    while (!cin.good() || money <= 0) { // keep asking the user until a valid number is entered
        cout << "Invalid amount. Enter positive number: £";
        cin.clear(); // clears error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // removes the incorrect input
        cin >> money;
    }

    bool running = true; // this controls the main loop

    while (running) { // main vending loop
        displayMenu(items); // shows the available items

        cout << "Enter item number to purchase (or 0 to exit): "; // asks the user to choose item
        int choice = getIntInput(); // returns what the user has selected

        // Exit option: if the user's choice is 0=exit
        if (choice == 0) {
            running = false;
            break;
        }

        int index = getItemIndex(items, choice); // this finds the selected item by the user

        if (index == -1) { // if item doesn't exist
            cout << "Item does not exist.\n";
            continue;
        }

        Item& selected = items[index]; // refetence to chosem item

        // Checks if item is out of stock
        if (selected.stock <= 0) {
            cout << "Sorry, " << selected.name << " is out of stock.\n"; // returns a message if item is unavailable
            continue;
        }

        // Money check: checks if the user has enough money
        if (money < selected.price) {
            cout << "Not enough money to buy " << selected.name << ".\n";
            continue;
        }

        // Purchase successful
        money -= selected.price; // deducted price
        selected.stock--; // reduce stock

        cout << "Dispensing " << selected.name << "...\n"; // returning message saying the selected item is dispensing
        cout << "You have £" << money << " left.\n"; // returning message saying how much money the user is left with

        // Ask to continue: if the user wants to buy more things
        cout << "Would you like to buy another item? (1 = Yes, 0 = No): ";
        int again = getIntInput();

        if (again == 0) {
            running = false;
        }
    }

    // This is the end of the program message
    cout << "Transaction complete. Returning change: £" << money << endl;
    cout << "Thank you for using the vending machine!\n";

    return 0;
}
