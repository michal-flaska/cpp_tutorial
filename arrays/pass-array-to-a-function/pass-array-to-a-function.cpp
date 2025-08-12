#include <iostream>

double getTotal(double prices[], int size);

int main(){

        double prices[] = {19.99, 10.01, 18.6, 26};
        int size = sizeof(prices)/sizeof(double);
        double total = getTotal(prices, size);

        std::cout << "$" << total;

        return 0;
}

double getTotal(double prices[], int size){

        double total = 0;

        for(int i = 0; i < size; i++){
                total += prices[i];
        }


        return total;
}