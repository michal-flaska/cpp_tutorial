#include <iostream>
#include <thread>
#include <chrono>

int main() {

        std::cout << "Started doing nothing" << '\n';

        while (true) {
                // Do nothing or minimal logic
                std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        return 0;
}
