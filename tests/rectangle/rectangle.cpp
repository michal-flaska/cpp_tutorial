#include <iostream>

int main() {

        int rows;
        int columns;
        char symbol;

        std::cout << "How many rows?: ";
        std::cin >> rows;

        std::cout << "How many columns?: ";
        std::cin >> columns;

        std::cout << "What symbol do you want to use?: ";
        std::cin >> symbol;

        for(int i = 1; i <= rows; i++){
                for(int j = 1; j <= columns; j++){
                        std::cout << symbol;
                }
                std::cout << '\n'; // New line after each inner loop iteration
        }

        return 0;
}

/*
Notes:
- Nested loops create 2D patterns - outer for rows, inner for columns
- Each inner loop completes fully before outer loop increments
- Good practice for understanding how nested loops work
- Could modify this to make different shapes or patterns
- Shows how user input can control program behavior
*/