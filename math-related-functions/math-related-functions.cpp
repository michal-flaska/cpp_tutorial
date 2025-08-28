#include <iostream>
#include <cmath>        // Include cmath for mathematical functions. 
                        // However `std::max` and `std::min` do not need to import `cmath` as they are part of the standard library.
                        // https://cplusplus.com/reference/cmath/ - cmath documentation.

int main() {

        double x = 3.14;
        double y = 4;
        double z;

        /*
        z = std::max(x, y);     // Using `std::max` to find the maximum of x and y.
        z = std::min(x, y);     // Using `std::min` to find the minimum of x and y.
        z = pow(2, 3);          // Using `pow` to calculate 2 raised to the power of 3.
        z = sqrt(9);            // Using `sqrt` to calculate the square root of 9.
        z = abs(-5);            // Using `abs` to get the absolute value of -5.
        z = round(x);           // Using `round` to round `x` to the nearest integer.
        z = ceil(x);            // Using `ceil` to round `x` UP to the nearest integer.
        z = floor(x);           // Using `floor` to round `x` DOWN to the nearest integer.
        */
       
        std::cout << z;

        return 0;
}

/*
Notes:
- `std::max` and `std::min` are used to find the maximum
   and minimum of two values, respectively.
- `pow` is used to calculate the power of a number.
- `sqrt` is used to calculate the square root of a number.
- `abs` is used to get the absolute value of a number.
- `round` is used to round a number to the nearest integer.
- `ceil` is used to round a number UP to the nearest integer.
- `floor` is used to round a number DOWN to the nearest integer.
- These functions are part of the C++ standard library and can be used for various mathematical operations.
- The `cmath` header is included to use these mathematical functions, but some functions like `std::max` and `std::min` do not require it as they are part of the standard library.
- Always remember to include the necessary headers for the functions we are using.
*/