#include "european_country.hpp"

namespace countries {  //start of namespace

float europeanCountry::calculateDensity() {

    //apelam functia din clasa de baza
    float basicDensity=Country::calculateDensity();
    basicDensity*=47.0;
    return basicDensity/200.0;
}

} // end of namespace