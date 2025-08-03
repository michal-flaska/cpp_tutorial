#include <iostream>

int main() {

        char op;
        double num1;
        double num2;
        double result;

        // Can also be written as `double num1, num2, result;`

        std::cout << "-------------------------- Console Calculator --------------------------" << '\n';

        std::cout << "Enter either (+ - * /) for the operation you want to perform: ";
        std::cin >> op; 

        std::cout << "Enter the first number: ";
        std::cin >> num1;

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        switch(op){
                case '+':
                        result = num1 + num2;
                        std::cout << "Result: " << result << '\n';
                        break;
                case '-':
                        result = num1 - num2;
                        std::cout << "Result: " << result << '\n';
                        break;
                case '*':
                        result = num1 * num2;
                        std::cout << "Result: " << result << '\n';
                        break;
                case '/':
                        if(num2 != 0){
                                result = num1 / num2;
                                std::cout << "Result: " << result << '\n';
                        } else {
                                std::cout << "Error: Division by zero is not allowed." << '\n';
                        }
                        break;
                default:
                        std::cout << "Error: Invalid operator." << '\n';
        }

        std::cout << "------------------------------------------------------------------------";

        return 0;
}

/*
Recap:
- This program is a simple console calculator that performs basic arithmetic operations: addition, subtraction, multiplication, and division.
- It uses a `switch` statement to determine which operation to perform based on the operator input by the user.
- The program prompts the user to enter an operator and two numbers, then performs the corresponding operation and displays the result.
- It also handles division by zero by checking if the second number is zero before performing the division operation. - I created this to prevent runtime errors :DD
- If the user enters an invalid operator, the program will display an error message.
*/