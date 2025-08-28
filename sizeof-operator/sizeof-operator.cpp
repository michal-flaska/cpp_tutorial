#include <iostream>

int main(){

        // variables
        int num1 = 123;
        float num2 = 45.6;
        double num3 = 7.89;
        std::string name = "mike";
        char character = 'x';
        bool boolean = true;

        // arrays
        std::string food[] = {"pizza", "pancakes", "more food"};
        bool settings[] = {0, 0, 1, 0, 1, 1, 0};

        // size of variables
        std::cout << "Size of int is "          << sizeof(num1)         << " bytes" << '\n';
        std::cout << "Size of float is "        << sizeof(num2)         << " bytes" << '\n';
        std::cout << "Size of double is "       << sizeof(num3)         << " bytes" << '\n';
        std::cout << "Size of string is "       << sizeof(name)         << " bytes" << '\n';
        std::cout << "Size of char is "         << sizeof(character)    << " bytes" << '\n';
        std::cout << "Size of bool is "         << sizeof(boolean)      << " bytes" << '\n';
        
        // size of arrays
        std::cout << "Size of string array is: "<< sizeof(food)         << " bytes" << '\n';
        std::cout << "Size of bool array is: "  << sizeof(settings)     << " bytes" << '\n';
        
        // number of content in arrays
        std::cout << "There is " << sizeof(food)/sizeof(std::string)    << " food in our string array" << '\n';
        std::cout << "There is " << sizeof(settings)/sizeof(bool)       << " settings in our bool array" << '\n';
        
        return 0;
}

/*
Notes:
- sizeof() tells you how many bytes something takes in memory
- Different data types take different amounts of space
- Arrays: total size = element size × number of elements
- sizeof(array)/sizeof(type) gives you number of elements
- Useful for loops when you don't know array size beforehand
- String size is always 32 bytes regardless of content (it's an object)
*/