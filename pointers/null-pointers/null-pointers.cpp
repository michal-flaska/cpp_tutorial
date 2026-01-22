#include <iostream>

int main(){

        int* ptr_myPointer = nullptr;
        int x = 123;

        ptr_myPointer = &x;

        if(ptr_myPointer == nullptr){
                std::cout << "address was not assigned" << '\n';
                // std::cout << *ptr_myPointer; //prankless harm
        }
        else{
                std::cout << "address was assigned" << '\n';
                std::cout << *ptr_myPointer;
        }

        return 0;
}
