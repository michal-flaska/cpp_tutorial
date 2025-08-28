#include <iostream>

// Define global variable
int num = 10;

// Function declaration
void printNum();

int main(){

        // Execute function
        printNum();

        return 0;
}

// Function
void printNum(){

        std::cout << "Number is: " << num << '\n';
}

/*
Notes:
- Global variables can be accessed from anywhere in the program
- Declared outside of all functions
- Available to all functions without passing as parameter
- Generally not recommended - can make debugging harder
- Local variables with same name will hide global ones
*/