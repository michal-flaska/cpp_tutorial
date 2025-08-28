#include <iostream>

void happyBirthday(std::string name, int age);

int main(){

        std::string name = "Mike";
        int age = 16;

        happyBirthday(name, age);

        return 0;
}

// Our Function
void happyBirthday(std::string name, int age){

        std::cout << "Happy Birthday dear" << name << '\n';
        std::cout << "You are " << age << " years old." << '\n';
}

/*
Notes:
- Function is a block of reusable code.
*/