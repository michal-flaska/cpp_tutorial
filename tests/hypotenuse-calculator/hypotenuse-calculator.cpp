#include <iostream>
#include <cmath>   // For mathematical functions

int main (){

        double a;
        double b;
        double c;

        std::cout << "Enter the length of side a: ";
        std::cin >> a;

        std::cout << "Enter the length of side b: ";
        std::cin >> b;
        
        a = pow(a, 2);    // Square side a
        b = pow(b, 2);    // Square side b
        c = sqrt(a + b);  // Calculate the hypotenuse using the Pythagorean theorem

        // The 3 lines of code above can also be shortened like this:
        // c = sqrt(pow(a, 2) + pow(b, 2));

        std::cout << "The length of the hypotenuse is: " << c << '\n';

        return 0;
}

/*
Recap:
- This program calculates the length of the hypotenuse of a right triangle using the Pythagorean theorem.
- The Pythagorean theorem states that in a right triangle, the square of the length of the hypotenuse (c) is equal to the sum of the squares of the lengths of the other two sides (a and b).
- The `pow` function is used to square the lengths of sides a and b, and the `sqrt` function is used to calculate the square root of the sum of these squares to find the length of the hypotenuse.
*/