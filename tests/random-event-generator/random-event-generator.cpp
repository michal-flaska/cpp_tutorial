#include <iostream>
#include <ctime>

int main(){

        srand(time(0));
        int randNum = rand() % 5 + 1;

        switch(randNum){
                case 1: std::cout << "You Win a bumper sticker!" << '\n';
                        break;
                case 2: std::cout << "You Win a t-shirt!" << '\n';
                        break;
                case 3: std::cout << "You Win a lunch!" << '\n';
                        break;
                case 4: std::cout << "You Win a giftcard!" << '\n';
                        break;
                case 5: std::cout << "You Win a concert tickets!" << '\n';
                        break;
        }

        return 0;
}

/*
Notes:
- Simple random event picker using switch statement
- srand(time(0)) makes sure we get different results each time
- rand() % 5 + 1 gives numbers 1-5
- Could easily add more cases or change the prizes
- Good practice for combining random numbers with switch statements
*/