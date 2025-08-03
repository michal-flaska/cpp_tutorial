#include <iostream>

int main() {

        // Constant variable - Constant variables are used to store values that do not change.
        // const int MAX_USERS = 100;                         // Maximum number of users
        // const std::string APP_NAME = "My Application";     // Name of the application

        const double PI = 3.14159; // Constant for Pi
        double radius = 5.0; // Radius of a circle
        double circumference = 2 * PI * radius; // Calculate circumference

        std::cout << circumference << '\n'; // Output the circumference

        return 0;
}