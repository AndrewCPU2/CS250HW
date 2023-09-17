//  Description: this code is used to estimate the growing population over an x amount of years using the growth rate and current population.
//  Author: Andrew Riley
//  Date: Sept 13, 2023
#include <iostream>
using namespace std;

int growthRate(int, int); // initializing the functions
int estimatedPopulation(int,int ,int);

int main()
{
   int population, birthRate, deathRate; // declaring variables
   int years;
   double growth, endPop;

    cout << "Enter the starting population: "; // asking and receiving the population #
    cin >> population;

    if (population < 2)
       {
          cout << "Error: Population cannot be less than 2." << endl;
          return -1; // error message
       }
    cout << "Enter the birth rate: ";// asking and receiving the birth rate
    cin >> birthRate;

    if (birthRate < 0)
       {
          cout << "Error: birth rate cannot be less than 0." << endl;
          return -1; // error message
       }

    cout << "Enter the death rate: ";// asking and receiving the death rate
    cin >> deathRate;

    if (deathRate < 0)
       {
          cout << "Error: death rate cannot be less than 0." << endl;
          return -1; // error message
       }


   cout << "Enter the number of years to calculate: ";
   cin >> years;

   for (int projectedYears = 1; projectedYears <= years; projectedYears++ )// for loop used to print the number of years wanted calculated
       {
          growth = growthRate(birthRate, deathRate);
          endPop = estimatedPopulation(population, birthRate, deathRate);
          cout << "The growth rate for year " << projectedYears << " is " << growth << "% and the estimated population is "
          << endPop << endl;
          population = endPop; // used to change the population to the estimated pop for the following year

       }

   return 0;
}
int growthRate(int  birthRate, int deathRate)// function for growth rate
{
    int growth;
    growth = birthRate - deathRate;
    return growth;
}
int estimatedPopulation(int population, int birthRate, int deathRate) //function for estimated population
{
    double estPop;
    estPop = population + (birthRate * population) / 100 - (deathRate * population) / 100;
    return estPop;
}

