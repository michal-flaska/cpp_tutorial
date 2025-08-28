#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){

        bakePizza();
        bakePizza("pepperoni");
        bakePizza("pepperoni", "mushroom");

        return 0;
}

void bakePizza(){
        std::cout << "Here is your pizza!" << '\n';
}

void bakePizza(std::string topping1){
        std::cout << "Here is your " << topping1 << " pizza!" << '\n';
}

void bakePizza(std::string topping1, std::string topping2){
        std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!" << '\n';
}

/*
Notes:
- Function overloading = same function name, different parameters
- Compiler picks the right one based on what arguments you pass
- Parameters must be different (number or type), return type doesn't matter
- Really useful for functions that do similar things with different inputs
- Like having one print function for int, another for string, etc.
*/