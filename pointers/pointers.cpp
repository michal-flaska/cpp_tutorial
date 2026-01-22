#include <iostream>
#include <string>

int main(){

        std::string name = "Mike";
        std::string* ptr_name = &name;  // https://pilot2254.github.io/blog/pointers-in-cpp/

        std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4" /* ... */};
        std::string* ptr_freePizzas = freePizzas; // now, we dont need to use the asterisk because array already contains a memory address

        std::cout << ptr_name << '\n';  // displays the memory address thats stored in the pointer
        std::cout << *ptr_name << '\n'; // displays the value of address thats stored in the pointer

        return 0;
}

/*
Notes:
- pointer is a variable that stores a memory address of another variable
- sometimes its easier to work with an address

- example: I have a stack of maybe 20 pizzas that I'm going to give out for free to my neighborhood, instead of going around house to house carrying the free pizza and handing it out, it's a lot easier to go door too and tell people where the pizza is located hey there's free pizza at my house at this address come and get some. and that's one of the uses of pointers sometimes it's easier to just work with an address I'll tell people where the free pizza is rather than carry it around with me

- & -> address of operator
- * -> dereference of operator
*/
