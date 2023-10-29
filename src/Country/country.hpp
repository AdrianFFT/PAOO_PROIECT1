#pragma once

class Country {
private:
    char* name;
    int population;
    float area;

public:
    // Constructor: Constructs an Country object
    Country(char* name, int varsta, float area);

    // Destructor: frees up the dinamically allocated memory
    ~Country();

    //Copy Constructor: creates a deep copy of the prevCountry object 
    Country(const Country& prevCountry);

    //Move Constructor: takes the resources away from the prevCountry object and gives to another Country object
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