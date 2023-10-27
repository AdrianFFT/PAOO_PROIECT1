#pragma once

class Country {

};#pragma once

class Country {
private:
    std::string name;
    int population;
    float area;

public:
    // Constructor
    Country(std::string nume, int varsta, float area);

    // Destructor
    Country();

    //Copy Constructor
    Country(const Country& prevCountry);

    //Move Constructor
    Country(Country&& prevCountry);

    //Getters
    std::string getName();
    int getPopulation();
    float getArea();

    //Setters
    void setName(std::string newName);
    void setPopulation(int newPopulation);
    void setArea(float newArea);

    //Calculate Country Density
    float calculateCountryDensity(int population, float area);
};