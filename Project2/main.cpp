#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Professor .h"

using namespace std;

int main()
{
    // Student courses
    string studentCourses[] = {"Science", "History", "Math", "Computer Science"};

    Student student1("Andrew", studentCourses, 4);
    cout << student1.getName() << " is taking: " << student1.getCourses() << " this year." << endl;

    Professor professor1("McDaniel", "506");
    cout << "Professor " << professor1.getName() << "'s room number is " << professor1.getOffice() << "." << endl;

    return 0;
}
