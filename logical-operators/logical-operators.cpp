#include <iostream>

int main() {

        int temperature;
        bool sunny;

        std::cout << "Enter the temperature: ";
        std::cin >> temperature;

        /*
        EXAMPLE 1:

        if(temperature > 0 && temperature < 30){ // Both of these conditions must be true to execute (`condition1 && condition2`).
                std::cout << "The weather is good.";
        }
        else{
                std::cout << "The weather is bad.";
        }
        */

        if(temperature <= 0 || temperature >= 30){ // At least one of these conditions must be true to execute (`condition1 || condition2`). If both are false, the code will not execute.
                std::cout << "The weather is bad." << '\n';
        }
        else{
                std::cout << "The weather is good." << '\n';
        }      
        
        if(sunny == !true){ // A way to check if the variable `sunny` is false. It is equivalent to `if(sunny == false)`. If there is '!' before a variable, it means "not". So `!true` is `false` and `!false` is `true`.
                std::cout << "It is sunny Outside";
        }
        else{
                std::cout << "It is cloudy Outside";
        }

        return 0;
}

/*
Notes:
- Logical operators are used to combine multiple conditions in control flow statements like `if`, `while`, etc.
- The `&&` operator is the logical AND operator, which returns true if both conditions are true.
- The `||` operator is the logical OR operator, which returns true if at least one of the conditions is true.
- The `!` operator is the logical NOT operator, which negates the value of a boolean expression.
- Logical operators can be used to create complex conditions by combining multiple simple conditions.
*/