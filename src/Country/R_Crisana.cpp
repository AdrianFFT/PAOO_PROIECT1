#include "R_Crisana.hpp"
#include <iostream>

namespace regiune {
    R_Crisana::R_Crisana() : name(nullptr) {}

    void R_Crisana::setName(const char* newName) {
        name = newName;
    }

    const char* R_Crisana::getName() const {
        return name;
    }

    void R_Crisana::displayInfo() const {
        std::cout << "Crisana Region: " << getName() << std::endl;
    }
}
