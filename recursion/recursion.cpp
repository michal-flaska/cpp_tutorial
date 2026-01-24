#include <iostream>

int main(){

        return 0;
}


// ------------------------------------------------- BASICS --------------------------------------------------

/*
// ITERATIVE APPROACH:

#include <iostream>

void walk(int steps);

int main(){

        walk(100);

        return 0;
}

void walk(int steps){

        for(int i = 0; i < steps; i++){
                std::cout << "You take a step #" << i + 1 << '\n';
        }
}

// RECURSIVE APPROACH:

#include <iostream>

void walk(int steps);

int main(){

        walk(100);

        return 0;
}

void walk(int steps){

        if(steps > 0){
                std::cout << "You take a step #" << steps << '\n';
                walk(steps - 1);
        }
}
*/

// ------------------------------------------------ FACTORIAL ------------------------------------------------

/*
ITERATIVE APPROACH:

#include <iostream>

int factorial(int num);

int main(){

        std::cout << factorial(10);

        return 0;
}

int factorial(int num){
        int result = 1;

        for(int i = 1; i <= num; i++){
                result = result * i;
        }

        return result;
}

// RECURSIVE APPROACH:

#include <iostream>

int factorial(int num);

int main(){

        std::cout << factorial(10);

        return 0;
}

int factorial(int num){

        if(num > 1){
                return num * factorial(num - 1);
        }
        else{
                return 1;
        }
}
*/
