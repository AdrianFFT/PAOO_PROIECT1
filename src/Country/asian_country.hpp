#include "country.hpp"
#include <algorithm>
#include <cctype>

namespace countries { //start of namespace

class asianCountry : public Country {
public:
    // Constructor implicit
    asianCountry() = default;

    // constructor din clasa mostenita
    using Country::Country;

    // Supraîncărcarea metodei 'calculateDensity'
    float calculateDensity() override;
};

} //end of namespace