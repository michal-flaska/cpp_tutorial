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