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

/*
Notes:
- Local variables only exist within the function/block where they're declared
- Must be passed as parameters to be used in other functions
- Safer than global variables - no accidental modifications
- Memory is automatically freed when function ends
- Preferred over global variables in most cases
*/