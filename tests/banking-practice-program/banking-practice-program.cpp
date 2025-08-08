#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

        double balance = 0;
        int choice = 0;
        
        do{
                std::cout << "Enter your choice: " << '\n';
                std::cout << "1. Show Balance" << '\n';
                std::cout << "2. Deposit Money" << '\n';
                std::cout << "3. Withdraw Money" << '\n';
                std::cout << "4. Exit" << '\n';
                
                std::cin >> choice;

                switch(choice){
                        case 1: showBalance(balance);
                                break;
                        case 2: balance += deposit(); // Shortened form of `balance = balance + deposit();`
                                break;
                        case 3: balance -= withdraw(balance);
                                break;
                        case 4: std::cout << "Thanks for visiting!" << '\n';
                                break;
                        default:
                                std::cout << "Invalid choice" << '\n';
                }
        }while(choice != 4);

        return 0;
}

void showBalance(){

}
double deposit(){

        return 0;
}
double withdraw(){

        return 0;
}