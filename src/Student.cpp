
#include <string>
#include "../include/Student.hpp"

using namespace std;

void Student::setIdentifier(int id)
{
    this->identifier = id;
};
void Student::setName(string name)
{
    this->name = name;
}
void Student::setSurname(string surname)
{
    this->surname = surname;
};
int Student::getIdentifier()
{
    return this->identifier;
};
string Student::getSurname()
{
    return this->surname;
};
string Student::getName()
{
    return this->name;
};