#include <iostream>
#include <string>
using namespace std;

#ifndef STATE_H
#define STATE_H


class State
{
    public:
        State();
        State(string, double, long long int);
        // add get and set functions
        void findPercentage();
        double getPercentage();
        string getName();
        double panelsNeeded;
        double panelArea;

    protected:


    private:
        string m_name;
        double m_energy;
        long long int m_size;
        double m_percentage;
};

#endif // STATE_H
