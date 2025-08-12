#include <iostream>

int main(){

        int num[3];

        num[0] = 1;
        num[1] = 2;
        num[2] = 3;
        num[3] = 4;

        std::cout << "Array: " << num[0] << " " << num[1] << " " << num[2] << " " << num[3];

        return 0;
}

/*
Notes: 
- Arrays should all be of the same data type.
- You can create array on declaration, or just declare an array and assign the values later in the code, but we first need to set a size to the array, because its a static data structure.
- 
*/