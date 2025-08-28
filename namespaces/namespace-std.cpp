#include <iostream>

int main() {

        using namespace std; // Using the standard namespace allows us to use standard library features without prefixing them with `std::`
        using std::cout; // This allows us to use cout directly without the std:: prefix

        cout << "Hello, World!" << '\n'; // Output: Hello, World! Without the need for std:: prefix

        return 0;
}

/*
Notes:
- using namespace std; lets you skip writing std:: everywhere
- Can also do specific ones like using std::cout;
- Makes code cleaner but some people say it's bad practice
- In big projects it can cause name conflicts
- For learning/small programs it's totally fine
*/