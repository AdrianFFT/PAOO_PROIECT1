# include "country.hpp"
# include <cstring>
# include <iostream>

// Constructor
Country::Country(char *name, int population, float area){
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->population=population;
    this->area=area;
    std::cout << "Country: " << this->name << " was constructed." << std::endl;
};

// Copy Constructor
Country::Country(const Country& prevCountry) {
    this->name = new char[strlen(prevCountry.name) + 1];
    strcpy(this->name, prevCountry.name);
    this->population=prevCountry.population;
    this->area=prevCountry.area;
    std::cout << "Country: " << this->name << " was copied." << std::endl;
};

// Move Constructor
Country::Country(Country&& prevCountry) {
    this->name=prevCountry.name;
    prevCountry.name=NULL;
    this->population=prevCountry.population;
    this->area=prevCountry.area;
    std::cout << "Country: " << this->name << " was moved." << std::endl;
};

// Destructor
Country::~Country() {
    if (this->name != NULL) {
        std::cout << "Country: " << this->name << " was destructed." << std::endl;
        delete[] this->name;
    } else{
        std::cout << "A country which lost its resources its name" << " was destructed." << std::endl;
    }
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
        delete [] this->name;
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