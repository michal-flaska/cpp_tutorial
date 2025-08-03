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

*/