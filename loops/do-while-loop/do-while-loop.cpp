#include <iostream>
#include <string>

int main() {

        int number;

        // Loop until the user enters a non-negative number
        do {
                std::cout << "Enter positive number: ";
                std::cin >> number;
        } while (number < 0); // Condition to check if the number is negative, if so, the loop continues.

        // After the loop we can safely assume that the number is non-negative.
        std::cout << "The number is: " << number << '\n';

        return 0;
}

/*
Notes:
- A do-while loop is similar to a while loop, but it guarantees that the code block will be executed at least once before checking the condition.
- The loop continues to execute as long as the specified condition is true, but the condition is checked after the code block has been executed.
- This is useful for scenarios where you want to ensure that the user has a chance to input data before validating it.
*/