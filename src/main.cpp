#include <cstring>
#include "country.hpp"
#include <iostream>

int main() {
    // Create a country and initialize its members
    Country romania("Romania", 19100000, 238397);

    // Display information about the country
    std::cout << "Name: " << romania.getName() << std::endl;
    std::cout << "Population: " << romania.getPopulation() << std::endl;
    std::cout << "Area: " << romania.getArea() << " km^2" << std::endl;
    std::cout << "Density: " << romania.calculateDensity() << " people/km^2" << std::endl;

    // Create a copy of the country
    Country copyOfRomania = romania;

    // Modify the name of the copy
    copyOfRomania.setName("New Romania");

    // Display the name of the original country and the copy
    std::cout << "Original country name: " << romania.getName() << std::endl;
    std::cout << "Copy of the country name: " << copyOfRomania.getName() << std::endl;

    // Move a country
    Country anotherCountry("Another Country", 1000000, 50000);
    Country movedCountry = std::move(anotherCountry);

    // Display the name of the second country
    std::cout << "Name of the second country: " << anotherCountry.getName() << std::endl; // This should be an empty string, as we moved the resources

    return 0;
}
