#include <iostream>

int main(){

        for(int i = 1; i <= 3; i++){
                for(int j = 1; j <= 10; j++){
                        std::cout << j << ' ';
                }
                std::cout << '\n'; // New line after each inner loop iteration
        }

        return 0;
}

/*
Notes:
- Nested loops = loop inside another loop
- Outer loop runs once, inner loop runs completely each time
- In this example: outer runs 3 times, inner runs 10 times each = 30 total prints
- Useful for 2D stuff like grids, tables, or patterns
- Can get slow quickly - 100x100 nested loop = 10,000 iterations
*/