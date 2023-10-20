#ifndef PROFESSOR _H
#define PROFESSOR _H
#include <string>

#include <Person.h>

using namespace std;


class Professor  : public Person
{
    public:
        Professor (string name, string office);
        string getOffice();

    protected:

    private:
        string office;
};

#endif // PROFESSOR _H
