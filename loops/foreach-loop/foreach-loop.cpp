#include <iostream>

int main(){

        std::string names[] = {"Mike", "Martin", "Maty", "Johnny"};

        /*
        for(int i = 0; i < sizeof(names)/sizeof(std::string); i++){
                std::cout << names[i] << '\n';
        }
        */

        // `For each loop` is simplified `for loop`. But its much less flexible.
        // Runs from start to the end.
        // use case: display all elements of an array.
        for(std::string name : names){
                std::cout << name << '\n';
        }

        return 0;
}