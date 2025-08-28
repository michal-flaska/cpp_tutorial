#include <iostream>

int main() {

        for(int i = 1; i <= 20; i++){   // Loop from 1 to 20, adding 1 to i in each iteration

                if(i == 13){
                        // continue;       // Skip the number 13
                        // break;          // Exit the loop if i is 13
                }

                std::cout << i << '\n';
        }

        return 0;
}

/*
Notes:
- The `continue` statement is used to skip the current iteration of a loop and move to the next iteration.
- The `break` statement is used to exit the loop entirely, regardless of the loop's condition.
- In this example, the loop iterates from 1 to 20, but when `i` is equal to 13, the `continue` statement is executed, which skips the output for that iteration.
- If the `break` statement were to be executed instead, the loop would terminate immediately when `i` is 13, and no further iterations would occur.
- The `continue` statement is useful when you want to skip certain values in a loop without terminating the entire loop.

- The `break` statement is useful when you want to exit the loop early based on a specific condition.
- The `continue` statement is useful when you want to skip the rest of the code in the current iteration and move to the next iteration.
*/