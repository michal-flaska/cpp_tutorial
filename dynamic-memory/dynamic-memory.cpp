/*
// EXAMPLE 1:

#include <iostream>

int main(){

        int* ptr_num = NULL;

        ptr_num = new int;

        *ptr_num = 21;

        std::cout << ptr_num << '\n';
        std::cout << *ptr_num << '\n';

        delete ptr_num; // free up the memory and avoid memory leak

        return 0;
}
*/

// EXAMPLE 2:

#include <iostream>

int main(){

        char* ptr_grades = NULL;
        int size;

        // ptr_grades = new char[5];

        std::cout << "How many grades to enter in?: ";
        std::cin >> size;

        ptr_grades = new char[size];

        for(int i = 0; i < size; i++){
                std::cout << "Enter grade #" << i + 1 << ": ";
                std::cin >> ptr_grades[i]; // or also `ptr_grades + i`
        }

        for(int i = 0; i < size; i++){
                std::cout << ptr_grades[i] << " ";
        }

        delete[] ptr_grades; // when deleting an array, make sure to add [] after the delete

        return 0;
}
