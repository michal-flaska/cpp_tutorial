#include <iostream>

int main(){

        std::string cars[3][3] = {{"mustang", "escape", "F-150"},
                                 {"corvette", "equinox", "silverado"},
                                 {"challenger", "durango", "ram 1500"}};

        // std::cout << cars[0][0] << '\n';

        int rows = sizeof(cars)/sizeof(cars[0]);
        int columns = sizeof(cars[0])/sizeof(cars[0][0]);

        for(int i = 0; i < rows; i++){
                for(int j = 0; j < columns; j++){
                        std::cout << cars[i][j] << " ";
                }
                std::cout << '\n';
        }

        return 0;
}

/*
Notes:
- it's an array made up of separate arrays (2d array = {array1, array2, array3, ... })
- they are useful because they can represent a grid or matrix of data with rows and columns
*/
