#include <iostream>

double square(double length);
double cube(double length);

int main(){

        double length = 5.0;
        double area = square(length);
        double volume = cube(length);

        std::cout << "Area: " << area << "cm^2" << '\n';
        std::cout << "Volume: " << volume << "cm^3" << '\n';

        return 0;
}

double square(double length){
        double result = length * length;
        return result;

        // can also be written in 1 line of code:
        // `return length * length;`
}

double cube(double length){
        double result = length * length * length;
        return result;
}

/*
Notes:
- return sends a value back to whoever called the function
- Function stops executing as soon as it hits return
- The data type after return must match what the function promises to return
- Can return the calculation directly: return length * length;
- void functions don't return anything, just use return; to exit early
*/