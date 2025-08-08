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