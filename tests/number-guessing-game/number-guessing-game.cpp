#include <iostream>
#include <ctime>

int main(){

        int num;
        int guess;
        int tries = 0;  // initialize to zero, this fixed the bug where the total number of tries was shown as 32,764
                        // previously, it was `int tries;`
                        // Sometimes the memory where tries lives just happens to be zero or a small value on that system, that compiler, that execution.
                        // machine, compiler, OS, or runtime context probably left garbage in that memory slot.

        const int MAX_NUMBER = 10;
        const int MIN_NUMBER = 2;

        srand(time(NULL));

        num = (rand() % MAX_NUMBER) + MIN_NUMBER;

        do {
                std::cout << "Enter a guess between (" << MIN_NUMBER << " - " << MAX_NUMBER << "): ";
                std::cin >> guess;
                tries++;

                if(guess > num){
                        std::cout << "Too high!" << '\n';
                }
                else if (guess < num){
                        std::cout << "Too low!" << "\n";
                }
                else {
                        std::cout << "Correct!" << '\n';
                        std::cout << "Total Tries: " << tries << '\n';
                }

        } while(guess != num);

        return 0;
}

/*
Notes:
- Had to initialize tries = 0 because uninitialized variables contain garbage values
- srand(time(NULL)) seeds the random generator so we get different numbers each run
- rand() % MAX_NUMBER gives 0 to MAX_NUMBER-1, so +MIN_NUMBER shifts the range
- do-while perfect here because we want to ask at least once
- This was fun to make, good practice with loops and random numbers
*/