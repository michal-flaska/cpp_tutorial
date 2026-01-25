#include <iostream>

class Student{
        public:
                std::string name;
                int age;
                double gpa;

        Student(std::string name, int age, double gpa){
                this->name = name; // if variables in class and constructor have the same name, we use `this->`
                this->age = age;
                this->gpa = gpa;
        }
};

class ObjectLocation{
        public:
                float x;
                float y;
                float z;

        ObjectLocation(float myX, float myY, float myZ){
                x = myX; // if variables in class and constructor don't have the same name, we dont have to use `this->`
                y = myY;
                z = myZ;
        }
};

int main(){

        Student student1("Spongebob", 25, 3.2);
        ObjectLocation cube1(42.1, 12.28, -6.6);

        std::cout << student1.name << '\n';
        std::cout << student1.age << '\n';
        std::cout << student1.gpa << '\n';

        std::cout << '\n';

        std::cout << cube1.x << '\n';
        std::cout << cube1.y << '\n';
        std::cout << cube1.z << '\n';

        return 0;
}
