#include "R_Banat.hpp"
#include <iostream>

namespace regiune {
    R_Banat::R_Banat() : name(nullptr) {}

    void R_Banat::setName(const char* newName) {
        name = newName;
    }

    const char* R_Banat::getName() const {
        return name;
    }

    void R_Banat::displayInfo() const {
        std::cout << "Banat Region: " << getName() << std::endl;
    }
}
