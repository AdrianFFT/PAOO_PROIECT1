#pragma once

class Country {
private:
    char* name;
    int population;
    float area;

public:
    // Constructor
    Country(char* name, int varsta, float area);

    // Destructor
    ~Country();

    //Copy Constructor
    Country(const Country& prevCountry);

    //Move Constructor
    Country(Country&& prevCountry);

    //Getters
    char* getName();
    int getPopulation();
    float getArea();

    //Setters
    void setName(char* newName);
    void setPopulation(int newPopulation);
    void setArea(float newArea);

    //Calculate Country Density
    float calculateDensity();
};