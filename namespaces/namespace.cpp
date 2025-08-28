#include <iostream>

namespace first{
        int x = 1;
}

namespace second{
        int x = 2;
}

int main() {

        using namespace first; // This allows us to use the first namespace without prefixing it (with `first::x`)
        using namespace second; // This allows us to use the second namespace without prefixing it (with `second::x`)

        int x = 0;

        std::cout << x << '\n'; // Output: 0
        std::cout << first::x << '\n'; // Output: 1
        std::cout << second::x << '\n'; // Output: 2

        // The two colons (::) are used to access the variables from the namespaces.
        // This is known as the scope resolution operator, which allows you to specify which namespace's variable you want to use.

        return 0;
}

/*
Notes:
- Namespaces prevent name conflicts when you have same variable names
- :: is the scope resolution operator - tells which namespace to use
- Can have multiple namespaces with same variable names
- using namespace lets you skip the prefix, but can cause confusion
- Local variables take priority over namespace variables
*/