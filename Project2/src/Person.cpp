#include "Person.h"

using namespace std;

Person::Person(std::string name) : name(name)
{

}
string Person::getName()
{
    return name;
}

