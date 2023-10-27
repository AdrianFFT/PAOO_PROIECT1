# include "country.hpp"
# include <cstring>
# include <iostream>

// Constructor
Country::Country(){
    std::cout << "Constructor called" << std::endl;
};

// Copy Constructor
Country::Country(const Country& prevCountry) {
    std::cout << "Copy Constructor called" << std::endl;
};

// Move Constructor
Country::Country(Country&& prevCountry) {
    std::cout << "Move Constructor called" << std::endl;
};

// Destructor
Country::Country() {
    std::cout << "Destructor called" << std::endl;
};