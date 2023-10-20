#include "Professor .h"

using namespace std;

Professor::Professor(string name, string office) : Person(name), office(office)
{

}
string Professor::getOffice()
{
    return office;
}
