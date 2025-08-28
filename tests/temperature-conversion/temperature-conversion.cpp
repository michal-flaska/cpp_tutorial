#include <iostream>

int main() {

        double temperature;
        char unit; // Celsius or Fahrenheit

        std::cout << "------------------ Temperature Calculator ------------------" << '\n';
        std::cout << "F = Fahrenheit" << '\n';
        std::cout << "C = Celsius" << '\n';
        std::cout << "What unit would you like to convert to: ";
        std::cin >> unit;

        if(unit == 'F' || unit == 'f'){
                std::cout << "Enter the temperature in Celsius: ";
                std::cin >> temperature;
                temperature = (1.8 * temperature) + 32.0; // Convert Celsius to Fahrenheit
                std::cout << "Temperature is: " << temperature << "F" << '\n';

        }
        else if(unit == 'C' || unit == 'c'){
                std::cout << "Enter the temperature in Fahrenheit: ";
                std::cin >> temperature;
                temperature = (temperature - 32.0) / 1.8; // Convert Fahrenheit to Celsius
                std::cout << "Temperature is: " << temperature << "C" << '\n';
        }
        else {
                std::cout << "Invalid unit. Please enter either 'F' or 'C'." << '\n';
        }

        std::cout << "------------------------------------------------------------" << '\n';
        return 0;
}

/*
Notes:
- Simple conversion program using if-else statements
- Handles both uppercase and lowercase input with || operator
- Math formulas: C to F = (C * 1.8) + 32, F to C = (F - 32) / 1.8
- Input validation for invalid units
- Good practice with user input and mathematical operations
*/