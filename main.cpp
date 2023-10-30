// Author: Andrew Riley
// Date: 10/24/23
// Description: A program that determine what percentage of the U.S.'s land area will need to be devoted to solar panels to achieve the stated goal.

#include <iostream>
#include <list>
#include <string>
#include "State.h"

using namespace std;

void print (list<State> states)
{
    for (auto it = states.begin(); it != states.end(); ++it)
    {
         cout << it->getName() << " would use " << it->getPercentage() << "% of its area" << endl;
    }
    cout << endl;
}
void add(list<State> &l, int x)
{
    list<int>::iterator it;
    list<int>::iterator previous;
    if(l.empty() || l.front() > x)
    {
        l.push_front(x);
    }
    else
    {
        previous = l.begin();
        for (auto it = l.begin(); it != l.end(); ++it)
        {
            if (*it > x)
                break;
            else
                previous = it;
        }
        l.insert(++previous, x);
    }
}

int main()
{
    string name;
    list<State> states;

    State tx ("Texas", 13480.8, 7487580672000);
    tx.findPercentage();
    cout << tx.getName() << " would use "
         <<  tx.getPercentage() "% of it area" << endl;
    add(states, tx);

    State ca ("California", 6922.8, 4563554688000);
    ca.findPercentage();
    add(states, ca);

    State la ("Louisiana", 4200.4, 1445216256000);
    la.findPercentage();
    add(states, la);

    State fl ("Florida", 4003.1, 1805265792000);
    fl.findPercentage();
    add(states, fl);

    State il ("Illinois", 3612.9, 1614549657600);
    il.findPercentage();
    add(states, il);

    State pa ("Pennsylvania", 3413.0, 1283967590400);
    pa.findPercentage();
    add(states, pa);

    State oh ("Ohio", 3404.5, 1249649280000);
    oh.findPercentage();
    add(states, oh);

    State ny ("New York", 3354.2, 1520933990400);
    ny.findPercentage();
    add(states, ny);

    State ga ("Georgia", 2727.6, 1656673920000);
    ga.findPercentage();
    add(states, ga);

    State mi ("Michigan", 2610.6, 2696287334400);
    mi.findPercentage();
    add(states, mi);

    print(states);

    return 0;
}


