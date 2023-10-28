# include "country.hpp"
# include <cstring>
# include <iostream>

// Constructor
Country::Country(char *name, int population, float area){
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
Country::~Country() {
    std::cout << "Destructor called" << std::endl;
};

//Getters
    char* Country::getName(){
        return name;
    }
    int Country::getPopulation(){
        return population;
    }
    float Country::getArea(){
        return area;
    }

    //Setters
    void Country::setName(char* newName){
        delete[] this->name;
        this->name = new char[strlen(newName) + 1];
        strcpy(this->name, newName);
    }
    void Country::setPopulation(int newPopulation){
        this->population=newPopulation;
    }
    void Country::setArea(float newArea){
        this->area=newArea;
    }

    //Calculate Country Density
    float Country::calculateDensity(){
        return (float)population/area;
    }