#include <iostream>

int main(){

        std::string names[] = {"Mike", "Martin", "Maty", "Johnny"};

        // We can use this instead of manually writing std::cout for each array child
        // or how to say it...
        for(int i = 0; i < sizeof(names)/sizeof(std::string); i++){
                std::cout << names[i] << '\n';
        }

        return 0;
}

/*
Notes:
- sizeof(array)/sizeof(type) gives you array length
- Much better than hardcoding the size in the loop
- for loops are perfect for going through arrays
- i < length, not i <= length (that would go out of bounds)
*/