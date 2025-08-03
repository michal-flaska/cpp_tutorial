#include <iostream>

int main() {

        /*
        Example 1:
        int x = 3.14;           // This will be implicitly converted to int, resulting in x = 3.

        std::cout << x <<;      // Output: 3
        */

        /*
        Example 2:
        double x = (int) 3.14;  // This is an explicit conversion, where we manually convert 3.14 to int, resulting in x = 3.
        
        std::cout << x <<;      // Output: 3
                                // Note: The explicit conversion is done using the cast operator (int).
        */

        /*
        Example 3:
        char x = 100;           // This will be implicitly converted to char, resulting in x = 'd' (ASCII value 100).
        std::cout << x;         // Output: d
        */

        /*
        Example 4:
        std::cout << (char) 100; // This is an explicit conversion, where we manually convert 100 to char, resulting in 'd'.
        */

        /*
        Example 5 (showing how this can be used in practice):
        
        int correctAnswers = 8;
        int totalQuestions = 10;
        double score = correctAnswers / totalQuestions; // This will perform integer division, resulting in score = 0.

        std::cout << "Score: " << score << "%";         // Output: Score: 0%
                                                        // To get the correct score, we need to explicitly convert one of the integers to double:
        */

        /*
        Example 6 (still showing how this can be used in practice):
        
        int correctAnswers = 8;
        int totalQuestions = 10;
        double score = correctAnswers / (double)totalQuestions; // This will perform the division as double, resulting in score = 0.8.
                                                                // Compared to the example above, This is an explicit conversion, where we manually convert totalQuestions to double.

        std::cout << "Score: " << score << "%";         // Output: Score: 0%
                                                        // To get the correct score, we need to explicitly convert one of the integers to double:
        */


        return 0;
}

/*
Notes: 
- Type conversion = conversion of one data type to another.
- We have two types of type conversion in C++: implicit and explicit.
        - Implicit conversion = automatic conversion by the compiler.
        - Explicit conversion = manual conversion by the programmer using casting operators.

*/
