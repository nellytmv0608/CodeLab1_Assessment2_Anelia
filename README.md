Development Documentation

Name: Anelia Tomova | BSU ID No: 583849 | Submission date:
Programme: BSc Computing  | Module name and code: CodeLab1 - CCO4000 |
Title: Assessment 2:Utility App |
Assessor name: Meenakshi Megavarnam

# CodeLab1_Assessment2: Vending Machine_Utility App

# Specification
In this project, I have built a basic vending machine program using C++. The program shows a menu of items, lets the user pick a product by entering a number, accepts money, and gives back the correct change. My vending machine includes six items, which are grouped into simple categories like drinks and snacks. It also checks for valid input, keeps track of stock, and lets the user buy more than one item if they want to. The whole program was made using core C++ skills such as structs, vectors, loops, and functions.

# System Flowchart
<img width="322" height="479" alt="final flowchart" src="https://github.com/user-attachments/assets/1bd8165a-d312-46c5-bad4-999163344de6" />

The flowchart shows the full process of how the vending machine program operates. It begins with the user inserting money, followed by the system displaying all available items. The diagram illustrates the key decision points, including validating input, checking whether the selected item exists, confirming it is in stock, and ensuring the user has enough money. It then shows how the program dispenses the item, updates the remaining balance, and offers the user the option to make another purchase. Finally, it ends by returning any leftover change and completing the transaction.

# Technical Implementation
Link to my Walkthrough video: https://youtu.be/2305xN911vs
 * Data Structure - an item struct is used to store product details such as name, category, price and stock
 * Functions - used to keep the code in order: displayMenu(), getIntInput(), getItemIndex()
 * Input Validation - handled using cin checks to ensure only valid numeric values are accepted
 * Stock Management - each item has a stock value that decreases after every purchase this helps the program preventing users from buying items that are out of stock
 * Money Handling - checks the user enters a valid amount of money and remaining balance is displayed after each transaction
 * Error Handling - asks the user to enter a valid numeric amount all over again until entering it
 * Iteration and Selection - a while loop allows multiple purchases at once, while if and else statements handle decisions like valid input, item availability and exit conditions

 # Critical Reflection 
Developing this vending machine program has been a really useful experience because it helped me understand how basic C++ concepts can be combined to create a complete, working application. One aspect I really liked was seeing how the struct and vector worked together to store all the item details. It made the menu system feel organised and easy to update. I also found the input validation part satisfying, because it prevents the program from crashing when the user types something unexpected. Watching the program reject bad input and continue running smoothly feels like a big improvement compared to earlier projects I’ve done. Another element I’m pleased with is the stock system, which makes the vending machine behave more realistically.
Even though the program works well, there are definitely things I would like to improve. For example, everything is currently hard-coded into the program, so adding new items means editing the code manually. In the future, I’d like to add file handling so the machine could load items from a text file and automatically update stock levels. The user interface could also be improved to make it look cleaner or more visually appealing. Adding features like an admin panel or even product suggestions could also make the program more interesting.
To achieve these improvements, I need to develop a few more skills. I want to learn more about object-oriented programming so I can convert the program from using a struct into a class-based design. I also want to explore file input/output and practise building more modular code structures. These skills would help me turn this simple vending machine into a more advanced and flexible application.

# Appendix
<img width="380" height="350" alt="image" src="https://github.com/user-attachments/assets/7ab36fc3-5bdd-4305-abae-0d5f4cbecbbf" />
<img width="380" height="331" alt="image" src="https://github.com/user-attachments/assets/2e06604a-0efb-42bc-b247-af2631f33c8b" />
<img width="399" height="334" alt="image" src="https://github.com/user-attachments/assets/4e0164c4-9b6d-4ca0-aa96-f2e1c342c75b" />
<img width="409" height="105" alt="image" src="https://github.com/user-attachments/assets/25399433-5ee1-4c1a-b1d5-46d0fd1e94bc" />

# Deliverables 
* Vending Machine C++ code (can be found here in my GitHub repository)
* Development Document (this file)
* Walkthrough video (can be found here in the 'Technical Implementation' section)
* System flowchart (can be found here in the 'System Flowchart' section)
* Appendix (screenshots of my code)
   
