#include <iostream>

class Stove{
        public:
                int getTemperature(){
                        return temperature;
                }

                void setTemperature(int temperature){

                        if(temperature < 0){
                                this->temperature = 0;
                        }
                        else if(temperature >= 10){
                                this->temperature = 10;
                        }
                        else{
                                this->temperature = temperature;
                        }
                }

                Stove(int temperature){
                        setTemperature(temperature);
                }

        private:
                int temperature = 0;
};

int main(){

        Stove stove(0);

        std::cout << stove.getTemperature() << '\n';

        stove.setTemperature(1000);

        std::cout << stove.getTemperature() << '\n';

        return 0;
}
