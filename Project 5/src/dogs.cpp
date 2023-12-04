#include "dogs.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>

using namespace std;

Dogs::Dogs()
{
    //ctor
}

Dogs::Dogs(const string& fs)
{
    ifstream inputFile(fs);

    if (!inputFile.is_open())
    {
        throw runtime_error("Error opening the file.");
    }

    string country;
    int population;
    string line;
    while (getline(inputFile, line))
    {
        // Find the position of the comma
        size_t pos = line.find(',');

        // Extract the country and population from the line
        string country = line.substr(0, pos);
        int population = stoi(line.substr(pos + 1));

        m_dogs[country] = population;
        m_dogPopulation += population;
    }
    inputFile.close();
}

bool Dogs::countryAvailable(const string& country)
{
    auto it = m_dogs.find(country);

    if (it != m_dogs.end())
    {
        // Country is available
        return true;
    }
    else
    {
        // Country is not available
        return false;
    }
}
int Dogs::getCountryPopulation(const string& country)
{
    auto it = m_dogs.find(country);

    if (it != m_dogs.end())
    {
        return it->second;
    }
    else
    {
        throw runtime_error("Country not found in the data.");
    }
}
void Dogs::displayMenu()
{
    int choice;
    string countryName;
    do
    {
        try
        {
            cout << "Menu:" << endl;
            cout << "1. See the total number of dogs in the world" << endl;
            cout << "2. Input a country name to find out how many dogs are in that country" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter your choice: " << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Total number of dogs in the world: " << getDogPopulation() << endl;
                break;
            case 2:
                cout << "Enter the country name: ";
                cin >> countryName;
                cout << "Number of dogs in " << countryName << ": " << getCountryPopulation(countryName) << endl;
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        }
        catch (runtime_error& e)
        {
            cout << endl << "Warning: " << e.what() << endl;
        }
    } while (choice != 3);
}
int Dogs::getDogPopulation()
{
    return m_dogPopulation;
}
