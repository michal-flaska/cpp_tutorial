#include <iostream>

int main(){

        std::string questions[] = {     "1. What year was c++ created? ",
                                        "2. Who invented c++? ",
                                        "3. What is the predcessor of c++? ",
                                        "4. Is the earth flat? "
                        };

        std::string options[][4] = {    {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckenberg"},
                                        {"A. C", "B. C+", "C. C--", "D. B++"},
                                        {"A. yes", "B. no", "C. sometimes", "D. what's earth?"}
                                };

        char answerKey[] = {'C', 'B', 'A', 'B'};
        int size = sizeof(questions)/sizeof(questions[0]);
        char guess;
        int score = 0;

        for(int i = 0; i < size; i++){
                std::cout << questions[i] << '\n';

                for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
                        std::cout << options[i][j] << '\n';
                }

                std::cin >> guess;
                guess = toupper(guess); // capitalize guess (in case user enters answer in lowercase)

                if(guess == answerKey[i]){
                        std::cout << "Correct!" << '\n';
                        score++;
                }
                else{
                        std::cout << "Wrong!" << '\n';
                        std::cout << "Correct answer was: " << answerKey[i] << '\n';
                }

                std::cout << '\n';
        }

        std::cout << "RESULTS: " << '\n';
        std::cout << "Correct Guesses: " << score << '\n';
        std::cout << "Number of Questions: " << size << '\n';
        std::cout << "Score: " << (score/(double)size)*100 << "%";

        return 0;
}
