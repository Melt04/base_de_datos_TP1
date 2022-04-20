#include "../include/Course.hpp"

void Course::setIdentifier(int id)
{
    this->identifier = id;
};
void Course::setName(string name)
{
    this->name = name;
}

int Course::getIdentifier()
{
    return this->identifier;
}
string Course::getName()
{
    return this->name;
}