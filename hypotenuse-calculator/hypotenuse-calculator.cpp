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