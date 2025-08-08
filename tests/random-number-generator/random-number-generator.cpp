#include <iostream>
#include <ctime> // For time() function to seed random number generator

int main() {

        // Seed the random number generator with the current time
        // This ensures different random values on each run
        srand(time(NULL));

        // Generate three pseudo-random numbers between 1 and 6
        int num1 = (rand() % 6) + 1; // rand() % 6 gives 0–5, +1 gives 1–6
        int num2 = (rand() % 6) + 1;
        int num3 = (rand() % 6) + 1;

        // Output the three random numbers
        std::cout << num1 << '\n';
        std::cout << num2 << '\n';
        std::cout << num3 << '\n';

        return 0;
}

/*
Recap:
- #include <iostream>: Lets you use std::cout for output
- #include <ctime>: Lets you use time(NULL) to get current time for seeding random
- srand(time(NULL)): Seeds the pseudo-random number generator with current time
- rand(): Returns a pseudo-random integer
- (rand() % 6) + 1: Gets a number from 1 to 6 (like a dice roll)
- std::cout: Prints values to the console
- Pseudo-random: Not truly random, but close enough for basic use
*/
