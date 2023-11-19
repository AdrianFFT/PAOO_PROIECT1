#include "country.hpp"

#pragma once

namespace countries { //start of namespace

class europeanCountry : public Country {
public:
    // Constructor implicit
    europeanCountry() = default;

    // constructor din clasa mostenita
    using Country::Country;

    // Supraîncărcarea metodei 'calculateDensity'
    float calculateDensity() override;
};

} //end of namespace