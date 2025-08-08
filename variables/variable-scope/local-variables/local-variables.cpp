#include <iostream>

// Function declaration
void printNum(int num);

int main(){

        // Define local variable (function within )
        int num = 10;

        // Execute function
        printNum(num);

        return 0;
}

// Function
void printNum(int num){

        std::cout << "Number is: " << num << '\n';
}