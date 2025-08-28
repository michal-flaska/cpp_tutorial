#include <iostream>

int main() {

        // Constant variable - Constant variables are used to store values that do not change.
        // const int MAX_USERS = 100;                         // Maximum number of users
        // const std::string APP_NAME = "My Application";     // Name of the application

        // Best practice for constant variables is to use uppercase letters with underscores.

        const double PI = 3.14159;
        const int LIGHT_SPEED = 299792458;
        const int WIDTH = 1920;
        const int HEIGHT = 1080;

        // Recap: const is used to declare constant variables that cannot be modified after initialization.
        // These constants can be used throughout the program to represent fixed values.

        return 0;
}

/*
Notes:
- Constant variables are declared using the `const` keyword, which indicates that their value cannot be changed after initialization.
- They are typically used for values that are fixed and do not change throughout the program, such as mathematical constants (like `PI`), configuration values, or settings.
- Using constant variables improves code readability and maintainability, as it makes the purpose of the variable clear and prevents accidental modification of values that should remain constant.
- It is a good practice to use uppercase letters with underscores for constant variable names to distinguish them from regular variables.
*/