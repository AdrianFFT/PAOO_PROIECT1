#include <cstring>
#include "country.hpp"
#include <iostream>

#include "european_country.hpp"
#include "asian_country.hpp"

using namespace countries;

#include "Region.hpp"
#include "R_Banat.hpp"
#include "R_Crisana.hpp"

using namespace regiune;

int main() {
    //main implementation for hw 2

    europeanCountry europe((char *)"Romania", 19100000, 238397);
    asianCountry    asia((char *)"New Romania", 19100000, 238397);

    float densityEuro = europe.calculateDensity();
    float densityAsia = asia.calculateDensity();

    std::cout<<"ONU density of Romania in Europe : "<<densityEuro<<std::endl;
    std::cout<<"ONU density of Romania in Asia : "<<densityAsia<<std::endl;

    R_Banat banat;
    banat.setName("Banat");
    banat.displayInfo();

    R_Crisana crisana;
    crisana.setName("Crisana");
    crisana.displayInfo();
    /*
    //main implementation for hw 1

    // Create a country and initialize its members
    Country romania((char*)"Romania", 19100000, 238397);

    // Display information about the country
    std::cout << "Name: " << romania.getName() << std::endl;
    std::cout << "Population: " << romania.getPopulation() << std::endl;
    std::cout << "Area: " << romania.getArea() << " km^2" << std::endl;
    std::cout << "Density: " << romania.calculateDensity() << " people/km^2" << std::endl;

    // Create a copy of the country
    Country copyOfRomania = romania;

    // Modify the name of the copy
    copyOfRomania.setName((char*)"New Romania");

    // Display the name of the original country and the copy
    std::cout << "Original country name: " << romania.getName() << std::endl;
    std::cout << "Copy of the country name: " << copyOfRomania.getName() << std::endl;

    // Move a country
    Country anotherCountry((char*)"Another Country", 1000000, 50000);
    Country movedCountry = std::move(anotherCountry);

    // Display the name of the moved country
    std::cout << "Name of the moved country: " << movedCountry.getName() << std::endl; // example that we moved the resources from anotherCountry to movedCountry
    */
}
