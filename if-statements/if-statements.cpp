#include <iostream>

int main(){

        int age;

        std::cout << "Enter your age: ";
        std::cin >> age;
        
        if(age >= 18 && age < 100){ // I added `&& age < 100` there because we want to check if the user is not too old to enter the club and we dont want to move `else if(age >= 100){}` to the top of the if-else chain.

                std::cout << "Welcome to the club!" << '\n';
        }
        else if(age < 0){

                std::cout << "How are you even alive?" << '\n';
        }
        else if(age >= 100){

                std::cout << "You are too old to enter the club." << '\n';
        }
        else {

                std::cout << "You are not old enough to enter the club." << '\n';
        }

        return 0;
}

/*
Recap:
- The condition inside the `if` statement can be any expression that evaluates to a boolean value (true or false).
- If the condition is true, the code block inside the `if` statement will be executed
- We dont use `=` in `if` statements, we use `==` to check for equality. Because `=` is used for assignment, not comparison.
- We can also use `>=`, `<=`, `>`, `<`, `!=` for comparisons. 
*/