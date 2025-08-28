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

/*
Notes:
- Variables in C++ are used to store data that can change during the execution of a program.
- Different types of variables are used to store different kinds of data, such as integers, doubles, characters, booleans, and strings.
- Integer variables store whole numbers, double variables store decimal numbers, character variables store single characters, boolean variables store true or false values, and string variables store sequences of text.
- It is important to choose the appropriate variable type based on the data you want to store.
- Variables must be declared before they can be used, and they can be initialized with a value at the time of declaration.
- Variable names should be descriptive and follow naming conventions, such as starting with a letter and using camelCase or snake_case.
*/