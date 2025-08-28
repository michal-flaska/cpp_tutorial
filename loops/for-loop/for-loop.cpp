#include <iostream>

int main(){

        for(int i = 10; i >=0; i--){            // A for loop that counts down from 10 to 0
                std::cout << i << '\n';         // This will output the numbers from 10 to 0, each on a new line.
        }

        std::cout << "Happy new year!" << '\n'; // This will output "Happy new year!" after the countdown is complete.

        return 0;
}

/*
Notes:

- A for loop is used to execute a block of code a specific number of times.
- It consists of three parts: initialization, condition, and increment/decrement.
- The initialization is executed once at the beginning, the condition is checked before each iteration, and the increment/decrement is executed after each iteration.
- The loop continues as long as the condition is true.
- It is commonly used for iterating over arrays, collections, or performing a fixed number of iterations.

- The syntax of a for loop is:

  for (initialization; condition; increment/decrement) {
      // Code to be executed
  }

- Example of a for loop that prints numbers from 1 to 5 (People usually shorten `index` to `i`, but here we use `index` for clarity.):

        for (int index = 1; index <= 5; index++) {
                std::cout << i << '\n';
        }

- This will output the numbers 1 to 5, each on a new line.
- The loop starts with `i` initialized to 1, checks if `i` is less than or equal to 5, and increments `i` by 1 after each iteration.
- The loop will terminate when `i` becomes greater than 5.
*/