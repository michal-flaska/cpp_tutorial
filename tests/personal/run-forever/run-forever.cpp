#include <iostream>
#include <thread>
#include <chrono>

int main() {

        bool isInfinite = true;

        std::cout << "Started doing nothing" << '\n';

        while (isInfinite == true) {
                // Do nothing or minimal logic
                std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        return 0;
}
