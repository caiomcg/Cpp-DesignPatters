#include <iostream>
#include "Logger.h"

int main() {
    try {
        Logger::getInstance().debug("On the main() scope");
    } catch(std::runtime_error& error) {
        std::cerr << "Could not log - " << error.what();
    }
    auto lambda = []() {
        try {
            Logger::getInstance().info("Calling from a lambda scope");
        } catch(std::runtime_error& error) {
            std::cerr << "Could not log - " << error.what();
        }
    };
    lambda();

    return 0;
}
