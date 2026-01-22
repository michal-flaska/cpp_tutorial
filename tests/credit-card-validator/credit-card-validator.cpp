#include <iostream>
#include <string>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){

        std::string cardNumber;
        int result = 0;

        std::cout << "Enter a credit card number: ";
        std::cin >> cardNumber;

        result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

        if(result % 10 == 0){
                std::cout << "Card number is valid";
        }
        else{
                std::cout << "Card number is not valid";
        }

        return 0;
}

int getDigit(const int number){

        return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber){

        int sum = 0;

        for(int i = cardNumber.size() - 1; i >= 0; i-=2){
                sum += cardNumber[i] - '0';
        }

        return sum;
}

int sumEvenDigits(const std::string cardNumber){

        int sum = 0;

        for(int i = cardNumber.size() - 2; i >= 0; i-=2){
                sum += getDigit((cardNumber[i] - '0') * 2);
        }

        return sum;
}

/*
Notes:

- Luhn algorithm:
  1. Double every second digit from right to left. if doubled number is 2 digits, split them
  2. Add all single digits from step 1
  3. Add all odd numbered digits from right to left
  4. Sum results from steps 2 & 3
  5. If step 4 is divisible by 10, # is valid

  ---

- https://www.paypalobjects.com/en_GB/vhelp/paypalmanager_help/credit_card_numbers.htm

- American Express 378282246310005
- American Express 371449635398431
- American Express Corporate 378734493671000
- Australian BankCard 5610591081018250
- Diners Club 30569309025904
- Diners Club 38520000023237
- Discover 6011111111111117
- Discover 6011000990139424
- JCB 3530111333300000
- JCB 3566002020360505
- MasterCard 5555555555554444
- MasterCard 5105105105105100
- Visa 4111111111111111
- Visa 4012888888881881
- Visa 4222222222222 - Note : Even though this number has a different character count than the other test numbers, it is the correct and functional number.

Processor-specific Cards

- Dankort (PBS) 76009244561
- Dankort (PBS) 5019717010103742
- Switch/Solo (Paymentech) 6331101999990016

*/
