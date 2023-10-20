#include "Student.h"

using namespace std;

Student::Student()
{
    //ctor
}
Student::Student(string name, string courses[], int size) : Person(name), taking(size)
{
    for (int i = 0; i < size; i++)
       {
          studentCourses[i] = courses[i];
       }
}
string Student::getCourses()
{
    string coursesList;
    for (int i = 0; i < taking; i++)
    {
        coursesList += studentCourses[i];
        if (i < taking - 1)
        {
           coursesList += ", ";
        }
    }
    return coursesList;
}
