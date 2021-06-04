#include <iostream>
using namespace std;

class Student {
    string name; //Default is private.
    int id;
    int gradDate;

public:
    Student();
    ~Student();
    void setName(string nameIn);
    void setId(int idIn);
    void setGradDate(int dateIn);
    string getName();
    int getId();
    int getGradDate();
    void print();
};

Student::Student() {

} //Constructor. Called when the class is made.

Student::~Student() {

} //Destructor. Called whenever an object goes out of scope.

void Student::setName(string nameIn) {
    name = nameIn;
}

void Student::setId(int idIn) {
    id = idIn;
}

void Student::setGradDate(int gradDateIn) {
    gradDate = gradDateIn;
}

string Student::getName()
{
    return name;
}

int Student::getId()
{
    return id;
}

int Student::getGradDate()
{
    return gradDate;
}

void Student::print() {
    cout << name << " " << id << " " << gradDate;
}
