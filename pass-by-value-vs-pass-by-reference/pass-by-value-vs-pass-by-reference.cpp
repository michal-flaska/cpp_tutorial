#include <iostream>

void swap(std::string &x, std::string &y);

int main(){

        std::string x = "Kool Aid";
        std::string y = "Water";

        swap(x, y);

        std::cout << "X: " << x << '\n';
        std::cout << "Y: " << y << '\n';

        return 0;
}

void swap(std::string &x, std::string &y){
        std::string temp;

        temp = x;
        x = y;
        y = temp;

}

/*

THIS WONT WORK, WHY?
Because normally when we pass a variable to a function,
we are passing by value, when we invoke this function we're creating copies of the original values.
And we are only switching the copies, not the original values.

#include <iostream>

void swap(std::string x, std::string y);

int main(){

        std::string x = "Kool Aid";
        std::string y = "Water";

        swap(x, y);

        std::cout << "X: " << x << '\n';
        std::cout << "Y: " << y << '\n';

        return 0;
}

void swap(std::string x, std::string y){
        std::string temp;

        temp = x;
        x = y;
        y = temp;
}
*/
