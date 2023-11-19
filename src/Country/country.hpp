#pragma once

class Country {
private:
    char* name;
    int population;
    float area;

    void clear();
public:
    // Default Constructor
    Country();

    // Constructor: Constructs an Country object
    Country(char* name, int varsta, float area);

    // Destructor: frees up the dinamically allocated memory
    ~Country();

    //Copy Constructor: creates a deep copy of the prevCountry object 
    Country(const Country& prevCountry);

    //Move Constructor: takes the resources away from the prevCountry object and gives to another Country object
    Country(Country&& prevCountry);

    // Overloaded copy assignment operator
    Country& operator=(const Country& other);

    // Overloaded move assignment operator
    Country& operator=(Country&& other);

    //Getters
    char* getName();
    int getPopulation();
    float getArea();

    //Setters
    void setName(char* newName);
    void setPopulation(int newPopulation);
    void setArea(float newArea);

    //Calculate Country Density
    virtual float calculateDensity();

    //print country attributes
    virtual void printCountry() const;
};