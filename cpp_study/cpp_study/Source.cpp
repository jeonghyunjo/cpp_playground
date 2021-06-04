#include <iomanip>
#include <fstream>
#include <sstream>
#define _USE_MATH_DEFINES
#include <cmath> //std::pow(base, exponent), M_PI = pi
#include <iostream>
#include <math.h>
#include <cstddef> // to use size_t (i.e. 
#include <string>
#include "Student.h"

using namespace std;


int main(int argc, char** argv) {
    int integer1;
    float float1;
    Student student1;

    integer1 = 4; //assign a value to integer1
    float1 = 4.333; //assign a value to float1

    student1.setName("Catherine Gamboa"); //assign a value to the student name
    student1.setId(54345); //assign a value to the student id number
    student1.setGradDate(2017); //assign a value to the student grad date

    //Let's print the values of our variables
    cout << "integer1 = " << integer1 << "\n";
    cout << "float1 = " << float1 << "\n\n";

    //There are two ways we can print the values of our class:
    //The first is to call the print function we created.
    cout << "Using the Student::print function\n";
    cout << "Student1 = ";
    student1.print();
    cout << "\n\n";

    //The second is to access each member of the class using the get functions
    cout << "Using the student access functions\n";
    cout << "Student1 name = " << student1.getName() << "\n";
    cout << "Student1 ID = " << student1.getId() << "\n";
    cout << "Student1 Grad Date = " << student1.getGradDate() << "\n";


    return 0;

    
    return 0;
}