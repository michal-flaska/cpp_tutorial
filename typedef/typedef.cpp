#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t; // Define a type alias for a vector of pairs.
                                                                // This can be used to store a list of pairs where each pair consists of a string and an integer.
                                                                // Best practice is to end type aliases with `_t` to indicate that it is a type.

// --- Using `typedef` to create type aliases ---
typedef std::string text_t;   // Define a type alias for std::string.
typedef int number_t;         // Define a type alias for int.

// --- Using `using` keyword to create type aliases ---
// The `using` keyword is a modern alternative to `typedef` for creating type aliases.
using number_t = int;
using text_t = std::string;

int main() {

        text_t firstName = "Mike"; // Use the type alias to declare a string variable.

        number_t age = 16;         // Use the type alias to declare an integer variable.

        std::cout << "Hello, " << firstName << "!" << '\n'; // Output: Hello, Mike!
        std::cout << "My age is " << age << "." << '\n';    // Output: My age is 16.

        return 0;
}

// Recap:
// - `typedef` and `using` are used to create type aliases in C++.
// - Type aliases can make code more readable and easier to maintain.
// - Best practice is to use descriptive names for type aliases and to end them with `_t` to indicate that they are types.
// - The `using` keyword is preferred in modern C++ for creating type aliases.
// - Type aliases can be used to simplify complex types, such as containers or function pointers.