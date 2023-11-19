#include "asian_country.hpp"

namespace countries {  //start of namespace

float asianCountry::calculateDensity() {

    //apelam functia din clasa de baza
    float basicDensity=Country::calculateDensity();
    basicDensity*=53.0;
    return basicDensity/500.0;
}

} // end of namespace