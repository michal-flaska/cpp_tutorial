#include <iostream>

void sort(int array[], int size);

int main(){

        int array[] = {4, 8, 2, 9, 7, 10, 3, 1, 5, 6};
        int size = sizeof(array)/sizeof(array[0]);

        sort(array, size);

        for(int element : array){
                std::cout << element << " ";
        }

        return 0;
}

void sort(int array[], int size){

        int temp;
        for(int i = 0; i < size - 1; i++){
                for(int j = 0; j < size - i - 1; j++){
                        if(array[j] > array[j + 1]){ // if we'd like to change it to descending order, we can change the '>' operator to '<' at this line
                                temp = array [j];
                                array[j] = array[j + 1];
                                array[j + 1] = temp;
                        }
                }
        }

}

/*
Notes:
- in this example, we used Bubble Sort
- it is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
*/
