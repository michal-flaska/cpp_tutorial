#include <iostream>
#include <string> // Fix for getline to work properly with strings.

int main() {

        std::string name;
        int age;

        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        std::cout << "Enter your age: ";
        std::cin >> age;

        std::cout << "Hello " << name << '\n';
        std::cout << "You are " << age << " years old." << '\n';

        return 0;
}

/*
Notes:
- if you are in vscode, you must set the terminal to be the output terminal, not the debug console.

- `cout <<` is used to output text to the console.
- `cin >>` is used to take input from the user.
- that `c` in `cout` and `cin` stands for "character", not for "console".

- to accept strings with spaces, use `std::getline(std::cin, name)` instead of `std::cin >> name`.
- if we accept some user input with cin and then try to use getline, it may not work as expected because the newline character from the previous input remains in the input buffer.
- To fix this problem above, you can replace `std::getline(std::cin, name);` with `std::getline(std::cin >> std:ws, name);`.

*/