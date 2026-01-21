#include <iostream>

void printInfo(const std::string name, const int age);

int main(){

        std::string name = "Mike";
        int age = 16;



        return 0;
}

void printInfo(const std::string name, const int age){
        name = " ";
        age = 0;

        std::cout << name << '\n';
        std::cout << age;
}

// this will obviously throw an error because in our printInfo function we are trying to modify const variables
