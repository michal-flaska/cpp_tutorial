#include <iostream>

int main(){

        int students = 30; // Number of students in the class

        // Arithmetic operators are used to perform mathematical operations on variables.
        // Addition (+), Subtraction (-), Multiplication (*), Division (/), Modulus (%), Increment (++) and Decrement (--).

        // Addition
        // students = students + 1;      // This is a way to increment the number of students by 1, but it can be simplified.
        // students += 1;                // Better way to increment the number of students by 1
        // students++;                   // Another way to increment the number of students by 1. But here we are able to add only 1.

        // Subtraction
        // students = students - 1;      // This is a way to decrement the number of students by 1, but it can be simplified.
        // students -= 1;                // Better way to decrement the number of students by 1.
        // students--;                   // Another way to decrement the number of students by 1. But here we are able to subtract only 1.

        // Multiplication
        // students = students * 2;      // This is a way to double the number of students, but it can be simplified.
        // students *= 2;                // Better way to double the number of students.

        // Division
        // students = students / 2;      // This is a way to halve the number of students, but it can be simplified.
        // students /= 2;                // Better way to halve the number of students.

        // Modulus
        // int remainder = students % 2; // This gives the remainder when the number of students is divided by 2.
        // students %= 2;                // This is a way to update the number of students to the remainder when divided by 2.

        // Increment and Decrement (already shown above)
        // students++;                   // Increment the number of students by 1.
        // students--;                   // Decrement the number of students by 1.

        // Notes:
        // - The increment (++) and decrement (--) operators can only add or subtract 1.
        // - The addition, subtraction, multiplication, division, and modulus operators can be used with any numeric type (int, float, double).
        // - The shorthand operators (+=, -=, *=, /=, %=) are preferred for readability and conciseness.
        // - The increment and decrement operators can be used in both prefix (e.g., ++students) and postfix (e.g., students++) forms, but the postfix form is more commonly used for readability.
        // - If we have `int students = 20` and we divide it by 3, the result will be 6 because it performs integer division (the decimal part is discarded). If we want to keep the decimal part, we should use a floating-point type like `double` or `float`.

        // If we have `int students = 6 - 5 + 4 * 3 / 2 % 1`, the operations will be performed in the order of precedence:
        // 1. Multiplication (*) and Division (/) are performed first, from left toright.
        // 2. Then Addition (+) and Subtraction (-) are performed, from left to right.
        // 3. Finally, Modulus (%) is performed.
        // The result will be `6 - 5 + 4 * 3 / 2 % 1 = 6 - 5 + 12 / 2 % 1 = 6 - 5 + 6 % 1 = 6 - 5 + 0 = 1`.
        // BUT
        // You can force the order of operations by using parentheses. For example, if you want to add 6 and 5 first, you can write it as `(6 + 5) * 4 / 2 % 1`, which will give you a different result.
        // The result will be `6 - (5 + 4) * 3 / 2 % 1 = 6 - 9 * 3 / 2 % 1 = 6 - 27 / 2 % 1 = 6 - 13.5 % 1 = 6 - 0.5 = 5.5`.


        return 0;
}

/*
Notes:
- Basic math operators: +, -, *, /, %
- Shorthand versions are way cleaner: +=, -=, *=, /=, %=
- ++ and -- only work for adding/subtracting 1
- Order matters! * and / happen before + and -, use () to force order
- Integer division cuts off decimals (6/4 = 1, not 1.5)
- % gives remainder after division (useful for checking even/odd numbers)
*/