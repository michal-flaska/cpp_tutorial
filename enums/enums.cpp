#include <iostream>

enum Day {
        sunday = 0,
        monday = 1,
        tuesday = 2,
        wednesday = 3,
        thursday = 4,
        friday = 5,
        saturday = 6
};

enum Flavor {
        vanilla,
        chocolate,
        strawberry,
        mint
};

enum Color {
        red,
        orange,
        yellow,
        green,
        blue,
        purple
};

enum Planet {
        mercury = 4880,
        venus = 12104,
        earth = 12756,
        mars = 6794,
        jupiter = 142984,
        saturn = 108728,
        uranus = 51118,
        neptune = 49532,
        pluto = 2320
};

int main(){

        Day today = sunday;

        switch(today){

                case sunday:    std::cout << "It is sunday"     << '\n'; break;
                case monday:    std::cout << "It is monday"     << '\n'; break;
                case tuesday:   std::cout << "It is tuesday"    << '\n'; break;
                case wednesday: std::cout << "It is wednesday"  << '\n'; break;
                case thursday:  std::cout << "It is thursday"   << '\n'; break;
                case friday:    std::cout << "It is friday"     << '\n'; break;
                case saturday:  std::cout << "It is saturday"   << '\n'; break;

        }

        return 0;
}
