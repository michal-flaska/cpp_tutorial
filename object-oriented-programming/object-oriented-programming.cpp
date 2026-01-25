#include <iostream>

class Car{
        public:
                std::string make;
                std::string model;
                int year;
                std::string color;

                void accelerate(){
                        std::cout << "You step on the gas" << '\n';
                }

                void brake(){
                        std::cout << "You step on the brakes" << '\n';
                }
};

int main(){

        Car car1;

        car1.make = "ford";
        car1.model = "mustang";
        car1.year = 2023;
        car1.color = "silver";

        car1.accelerate();
        car1.brake();

        return 0;
}


/*
// OTHER EXAMPLE

#include <iostream>

class Human{
        public:
                std::string name;
                std::string occupation;
                int age;

                void eat(){
                        std::cout << "This person is eating" << '\n';
                }

                void drink(){
                        std::cout << "This person is drinking" << '\n';
                }

                void sleep(){
                        std::cout << "This person is sleeping" << '\n';
                }

        private:
};

int main(){

        Human human1;
        Human human2;

        human1.name = "Rick";
        human1.occupation = "Scientist";
        human1.age = 70;

        human2.name = "Morty";
        human2.occupation = "Student";
        human2.age = 15;

        std::cout << human1.name << '\n';
        std::cout << human1.occupation << '\n';
        std::cout << human1.age << '\n';

        std::cout << human2.name << '\n';
        std::cout << human2.occupation << '\n';
        std::cout << human2.age << '\n';

        human1.eat();
        human1.drink();
        human1.sleep();

        human2.eat();
        human2.drink();
        human2.sleep();

        return 0;
}
*/
