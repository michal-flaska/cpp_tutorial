#include <iostream>

class Shape{
        public:
                double area;
                double volume;
};

class Cube : public Shape{
        public:
                double side;

        Cube(double side){
                this->side = side;
                this->area = side * side * 6;
                this->volume = side * side * side;
        }
};

class Sphere : public Shape{
        public:
                double radius;

        Sphere(double radius){
                this->radius = radius;
                this->area = 4 * 3.14159 * (radius * radius);
                this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);
        }
};

int main(){

        Cube cube(10);
        Sphere sphere(5);

        std::cout << cube.side          << "cm" << '\n';
        std::cout << cube.area          << "cm^2" << '\n';
        std::cout << cube.volume        << "cm^3" << '\n';

        std::cout << '\n';

        std::cout << sphere.radius      << "cm" << '\n';
        std::cout << sphere.area        << "cm^2" << '\n';
        std::cout << sphere.volume      << "cm^3" << '\n';

        return 0;
}

/*
// EXAMPLE 1

#include <iostream>

class Animal{

        public:
                bool alive = true;

        void eat(){
                std::cout << "This animal is eating" << '\n';
        }

};

class Dog : public Animal{
        public:

        void bark(){
                std::cout << "The dog goes woof!" << '\n';
        }
};

class Cat : public Animal{
        public:

        void meow(){
                std::cout << "The cat goes meow" << '\n';
        }
};

int main(){

        Dog dog;
        Cat cat;

        std::cout << dog.alive << '\n';
        dog.eat();
        dog.bark();

        std::cout << cat.alive << '\n';
        cat.eat();
        cat.meow();

        return 0;
}
*/
