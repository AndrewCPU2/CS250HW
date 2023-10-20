#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person
{
    public:
        Person();
        Person(string name);

        string getName();

    protected:
        string name;

    private:
};

#endif // PERSON_H
