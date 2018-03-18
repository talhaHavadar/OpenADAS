#include "abstraction/StandardUtils.hpp"

#include <iostream>

#ifdef env_simulation
void StandardUtils::print(std::string s) {
    std::cout << s << std::endl;
}
#endif
#ifdef env_car
void StandardUtils::print(std::string s) {
    // TODO: needs to be implemented
}
#endif // env_car
