#include <iostream>
#include <string>

int main(){

        std::string name;

        std::cout << "Enter your name: ";
        std::getline(std::cin, name);   // Using getline to read a full line including spaces


        // PASTE ANY EXAMPLE CODE FROM BOTTOM (RECAP) HERE TO TEST THE STRING METHODS


        return 0;
}

/*
Notes:

- C++ provides several useful methods for manipulating strings.
- These methods can be used to perform various operations on strings, such as checking their length, clearing them, appending text, accessing characters, inserting text, finding substrings, and erasing parts of the string.
- The `std::string` class provides these methods, and they can be called on string variables.
- We use `std::getline(std::cin, name)` to read a full line of input, allowing for spaces in the name (if we used `std::cin >> name`, it would only read until the first space).

-------------------------------------------------------------------------------------------

- `stringName.length()` is a method that returns the number of characters in a string.
- It is useful for validating input, such as checking if a name exceeds a certain length.

EXAMPLE:

if(name.length() > 12){
        std::cout << "Your name cant be over 12 characters." << '\n';
}
else{
        std::cout << "Welcome, " << name << "!" << '\n';
        std::cout << "Your name has " << name.length() << " characters." << '\n';
}

-------------------------------------------------------------------------------------------

- `stringName.empty()` is a method that checks if a string is empty (i.e., has no characters).
- It is useful for validating input, such as checking if a user has entered a name.

EXAMPLE:

if(name.empty()){
        std::cout << "You did not enter a name." << '\n';
}
else{
        std::cout << "Hello, " << name << '\n';
}

-------------------------------------------------------------------------------------------

- `stringName.clear()` is a method that removes all characters from a string, making it empty.
- It is useful for resetting a string variable.

EXAMPLE:

name.clear();
std::cout << "Hello, " << name << '\n';

- This will output "Hello, " since the name variable is now empty.

-------------------------------------------------------------------------------------------

- `stringName.append("text")` is a method that appends the specified text to the end of the string.
- It is useful for building strings dynamically, such as creating an email address from a name.

EXAMPLE:

name.append("@gmail.com"); // Appending "@gmail.com" to the name
std::cout << "Your email is: " << name << '\n';

- This will output the name followed by "@gmail.com".

-------------------------------------------------------------------------------------------

- `stringName.at(index)` is a method that returns the character at the specified index in the string.
- It is useful for accessing specific characters in a string.
- `stringName[index]` is another way to access the character at the specified index.
- Both methods can be used interchangeably, but `at()` provides bounds checking and will throw an exception if the index is out of range.

EXAMPLE:

std::cout << name.at(0) << '\n';        // Outputs the first character of the name
std::cout << name[0] << '\n';           // Another way to access the first character of the name

- This will output the first character of the name entered by the user.

-------------------------------------------------------------------------------------------

- `stringName.insert(index, "text")` is a method that inserts the specified text at the specified index in the string.
- It is useful for modifying strings by adding text at a specific position.
- The `index` parameter specifies where to insert the text, and the text will be inserted before the character at that index.
- If the index is 0, the text will be inserted at the beginning of the string.

EXAMPLE:

name.insert(0, "@");            // Inserting "@" at the beginning of the string
std::cout << name << '\n';      // Output the modified name ( @mike )

-------------------------------------------------------------------------------------------

- `stringName.find("text")` is a method that searches for the first occurrence of the specified text in the string and returns its index.
- If the text is not found, it returns `std::string::npos`, which is a constant representing the largest possible value for an index.

EXAMPLE:

std::cout << name.find(' ') << '\n'; // Outputs the index of the first space in the name

-------------------------------------------------------------------------------------------

- `stringName.erase(startIndex, length)` is a method that removes a specified number of characters from the string starting at the specified index.
- It is useful for removing parts of a string, such as a prefix or suffix.
- The `startIndex` parameter specifies where to start removing characters, and the `length` parameter specifies how many characters to remove.
- If `length` is not specified, it removes all characters from the `startIndex` to the end of the string.
- Ending index is not included in the removal.

EXAMPLE:

name.erase(0, 3); // Example of erasing the first 3 characters from the name
std::cout << "Your new name is: " << name << '\n';

- If my name is "Mike", after erasing the first 3 characters, it will output "Your new name is: e".
*/