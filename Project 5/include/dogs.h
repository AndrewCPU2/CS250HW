#ifndef DOGS_H
#define DOGS_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>

using namespace std;

class Dogs
{
public:
    Dogs();
    Dogs(const string& fs);

    int getDogPopulation();
    int getCountryPopulation(const string& country);
    void displayMenu();
    bool countryAvailable(const string& country);  // may or may not need

protected:

private:
    int m_dogPopulation = 0;
    int m_CountryPopulation = 0;
    unordered_map<string, int> m_dogs;
};

#endif // DOGS_H
