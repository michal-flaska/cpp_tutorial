#include <iostream>

int main(){

        /*
        int x; // Declaration (int -> integer)
        x = 5; // Assignment (assigns a value to x)

        // Can also be written as:
        int x = 5;
        */

        int x = 5;
        int y = 6;
        int sum = x + y;

        std::cout << x << '\n';
        std::cout << y << '\n';
        std::cout << sum << '\n';

        return 0;
}

/*
Notes:
- Variables store data that can change during program execution
- Must declare before using: int x;
- Can initialize when declaring: int x = 5;
- Choose meaningful names for variables
- Different types for different kinds of data (int, double, string, etc.)
*/