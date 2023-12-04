/*
  Author: Andrew Riley
  Date: 10/24/23
  Description: A program that allows a user to explore dog populations of counties.
*/
#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>
#include "dogs.h"

using namespace std;

int main()
{
    try
    {
        Dogs myDogs("dogs.txt");
        myDogs.displayMenu();
    }
    catch (const runtime_error& e)
    {
        cout << endl << "Warning: " << e.what() << endl;
    }

    return 0;
}
