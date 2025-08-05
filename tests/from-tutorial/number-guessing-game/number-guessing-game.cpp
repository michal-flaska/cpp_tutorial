#include <iostream>
#include <ctime>

int main(){

        int num;
        int guess;
        int tries = 0;  // initialize to zero, this fixed the bug where the total number of tries was shown as 32,764
                        // previously, it was `int tries;`
                        // Sometimes the memory where tries lives just happens to be zero or a small value on that system, that compiler, that execution.
                        // machine, compiler, OS, or runtime context probably left garbage in that memory slot.

        srand(time(NULL));

        num = (rand() % 100) + 1;

        do {
                std::cout << "Enter a guess between (1 - 100): ";
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