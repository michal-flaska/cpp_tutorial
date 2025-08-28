#include <iostream>

int main(){

        int num[3];

        num[0] = 1;
        num[1] = 2;
        num[2] = 3;
        num[3] = 4;

        std::cout << "Array: " << num[0] << " " << num[1] << " " << num[2] << " " << num[3];

        return 0;
}

/*
Notes:
- Arrays hold multiple values of the same type
- Need to set size when declaring: int nums[5];
- Index starts at 0, so nums[0] is first element
- Can go out of bounds (nums[3] = 4 when array size is 3) - this compiles but causes weird behavior
- Better to initialize on declaration: int nums[] = {1, 2, 3};
*/