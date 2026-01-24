#include <iostream>

struct student{
        std::string name;
        double gpa;
        bool enrolled;

        // bool enrolled = true; <- `true` will be the default value for enrolled
};

int main(){

        student student1;
        student student2;
        student student3;

        student1.name = "Spongebob";
        student1.gpa = 3.2;
        student1.enrolled = true;

        student2.name = "Patrick";
        student2.gpa = 2.1;
        student2.enrolled = true;

        student3.name = "Squidward";
        student3.gpa = 1.5;
        student3.enrolled = false;

        std::cout << student1.name << '\n';
        std::cout << student1.gpa << '\n';
        std::cout << student1.enrolled << '\n';

        std::cout << '\n';

        std::cout << student2.name << '\n';
        std::cout << student2.gpa << '\n';
        std::cout << student2.enrolled << '\n';

        std::cout << '\n';

        std::cout << student3.name << '\n';
        std::cout << student3.gpa << '\n';
        std::cout << student3.enrolled << '\n';

        return 0;
}
