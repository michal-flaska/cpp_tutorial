#include <iostream>
#include <string>

int main() {

    std::string name;

    // A while loop that continues until the user provides a non-empty name
    while (name.empty()) {
        // Prompt the user to enter their name
        std::cout << "Please enter your name: ";

        // Use std::getline to read the entire line of input, including spaces
        std::getline(std::cin, name);

        // If the user enters an empty string, the loop will repeat.
    }

    // Once a valid name is entered, greet the user
    std::cout << "Hello, " << name << '\n';

    return 0;
}

/*
Recap:
- A while loop is used to repeatedly execute a block of code as long as a specified condition is true.
- In this example, the loop continues until the user provides a non-empty name.
- The loop will keep prompting the user until they enter a valid name, demonstrating how while loops can be used for input validation.
*/