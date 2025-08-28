#include <iostream>

std::string concatStrings(std::string string1, std::string string2);

int main(){

        std::string firstName = "Michal";
        std::string lastName = "Flaška";  // Changed š to s, because it was causing problems (output was Fla┼íka)
        std::string fullName = concatStrings(firstName, lastName);

        std::cout << "Hello " << fullName;

        return 0;
}

std::string concatStrings(std::string string1, std::string string2){
        return string1 + " " + string2;
}

/*
Notes:
- Functions can return any data type, including strings
- + operator works on strings to concatenate them
- Much cleaner to return the result directly instead of storing in variable first
- The returned value can be stored in a variable or used directly
*/