#include <iostream>

int main(){

        const int size = 12;

        std::string foods[size] = {};

        // fill(foods, foods + size, "pizza");     // Fill the full array with "pizza"

        // fill(foods, foods + (size / 2), "pizza");               // Fill the first half of array with "pizza"
        // fill(foods + (size / 2), foods + size, "hamburger");    // Fill the second half of aray with "hamburger"

        fill(foods, foods + (size / 3), "pizza");                       // Fill 1/3 of array with "pizza"
        fill(foods + (size / 3), foods + (size / 3)*2, "hamburger");    // Fill 1/3 of array with "hamburger"
        fill(foods + (size / 3)*2, foods + size, "hotdog");             // Fill 1/3 of array with "hotdog"

        for(std::string food : foods){
                std::cout << food << '\n';
        }

        return 0;
}

/*
Notes:
-


fill() = Fills a range of elements with a specified value:
         fill (begin, end, value)
*/
