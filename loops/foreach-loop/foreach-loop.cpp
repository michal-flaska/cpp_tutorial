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

/*
Notes:
- Range-based for loop (foreach) is way simpler than regular for loop
- Automatically goes through each element, no need for indexing
- Can't modify the original array elements unless you use references
- Less flexible - can't skip elements or go backwards
- Perfect when you just need to read/display all elements
*/