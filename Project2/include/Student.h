#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"

using namespace std;

class Student : public Person
{
    public:
        Student();
        Student(string name, string studentCourses[], int size);

        string getCourses() const;

    private:
        int taking;
        string studentCourses[10];
};

#endif // STUDENT_H
