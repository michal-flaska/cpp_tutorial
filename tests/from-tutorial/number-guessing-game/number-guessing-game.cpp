#include <iostream>
#include <ctime>

// There's a bug that I don't know how to fix. Every time I finish a game, the total number of tries is shown as 32,764 or higher. I'm unable to find the problem.

int main(){

        int num;
        int guess;
        int tries;

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