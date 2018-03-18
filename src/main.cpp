#include "config.h"

#include <iostream>
#include "abstraction/StandardUtils.hpp"

int main() {
    StandardUtils utils;
    utils.print("deneme");
#ifdef env_simulation
    std::cout << "Simulation test" << std::endl;
#endif
    std::cout << "Hello Moto!!" << std::endl;
}
