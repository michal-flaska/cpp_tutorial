#include <iostream>

int main(){

        int age = 16;
        std::string name = "Mike";
        bool student = true;

        std::cout << &age << '\n';
        std::cout << &name << '\n';
        std::cout << &student << '\n';

        return 0;
}

/*
Notes:
- memory address is a location in a memory where data is stored
- a memory address can be accessed with & (address-of operator)
*/
