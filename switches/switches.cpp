#include <iostream>

int main(){

        int month;
        std::cout << "Enter the month number (1-12): ";
        std::cin >> month;

        switch(month){
                case 1:
                        std::cout << "It is January" << '\n';
                        break;
                case 2:
                        std::cout << "It is February" << '\n';
                        break;
                case 3:
                        std::cout << "It is March" << '\n';
                        break;
                case 4:
                        std::cout << "It is April" << '\n';
                        break;
                case 5:
                        std::cout << "It is May" << '\n';
                        break;
                case 6:
                        std::cout << "It is June" << '\n';
                        break;
                case 7:
                        std::cout << "It is July" << '\n';
                        break;
                case 8:
                        std::cout << "It is August" << '\n';
                        break;
                case 9:
                        std::cout << "It is September" << '\n';
                        break;
                case 10:
                        std::cout << "It is October" << '\n';
                        break;
                case 11:
                        std::cout << "It is November" << '\n';
                        break;
                case 12:
                        std::cout << "It is December" << '\n';
                        break;
                default:
                        std::cout << "Invalid month number!" << '\n';
        }

        return 0;
}

/*
Recap:
- `switch` statements are used to execute one block of code among many based on the value of a variable.
- Each `case` represents a possible value of the variable, and the code block under that case will be executed if the variable matches that value.
- The `break` statement is used to exit the `switch` statement after executing the code block for the matched case.
- If none of the cases match, the `default` case will be executed.
- `switch` statements are more efficient and easier to read than multiple `if-else` statements when checking a variable against many possible values.
- It is a good practice to use `switch` statements when you have a variable that can take on a limited set of values, such as integers or characters.
- `switch` statements can only be used with integral types (like `int`, `char`, etc.) and cannot be used with floating-point types or strings.
- Include a `default` case to handle unexpected values. `default` is like `else` in `if-else` statements.
- `switch` statements can be nested, but it is generally better to avoid deep nesting for readability.

--------------- BELOW IS A C++ PROGRAM EXAMPLE OF WHAT WE DONT WANT TO DO: ---------------

#include <iostream>

int main(){

        int month;

        std::cout << "Enter the month number (1-12): ";
        std::cin >> month;

        if(month == 1){
                std::cout << "It is January" << '\n';
        }
        else if(month == 2){
                std::cout << "It is February" << '\n';
        }
        else if(month == 3){
                std::cout << "It is March" << '\n';
        }
        else if(month == 4){
                std::cout << "It is April" << '\n';
        }
        else if(month == 5){
                std::cout << "It is May" << '\n';
        }
        else if(month == 6){
                std::cout << "It is June" << '\n';
        }
        else if(month == 7){
                std::cout << "It is July" << '\n';
        }
        else if(month == 8){
                std::cout << "It is August" << '\n';
        }
        else if(month == 9){
                std::cout << "It is September" << '\n';
        }
        else if(month == 10){
                std::cout << "It is October" << '\n';
        }
        else if(month == 11){
                std::cout << "It is November" << '\n';
        }
        else if(month == 12){
                std::cout << "It is December" << '\n';
        }
        else {
                std::cout << "It is Invalid month number!" << '\n';
        }
        
        return 0;
}

NOW, this was a lot of code, and we can do better than that :)
That's why we use `switch` statements, which are more efficient and easier to read for this kind of task.
*/