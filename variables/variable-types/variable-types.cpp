#include <iostream>

int main(){

        // Integer variables - Integer variables are used to store whole numbers.
        int age = 25;
        int year = 2023;
        int days = 7;

        // Double variables - Double variables are used to store decimal numbers.
        double price = 10.99;
        double gpa = 2.5;
        double temperature = 25.1;

        // Single character variable - Single character variables are used to store a single character.
        char grade = 'A';
        char initial = 'B';
        char currency = '$';

        // Boolean variable - Boolean variables are used to store true or false values.
        bool isStudent = true;
        bool powerOn = false;
        bool forSale = true;

        // String variable - String variables are used to store a sequence of text.
        std::string name = "John Doe";
        std::string city = "New York";
        std::string message = "Hello, World!";

        std::cout << "Hello " << name << '\n';
        std::cout << "You are " << age << " years old." << '\n';
        std::cout << "The price is " << currency << price << '\n';

        return 0;
}