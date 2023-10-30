#include <iostream>
#include <string>
#include "State.h"
using namespace std;

State::State()
{
    m_name = "";
    m_energy = 0;
    m_size = 0;
}
State::State(string name, double energy, long long int stateSize)
{
    m_name = name;
    m_energy = energy;
    m_size = stateSize;
}
string State::getName()
{
    return m_name;
}
void State::findPercentage()
{
    panelsNeeded = (m_energy * 1000000000000) / 51;
    panelArea = panelsNeeded * 18;
    m_percentage = (panelArea / m_size) * 100;
}
double State::getPercentage()
{
   return m_percentage;
}
