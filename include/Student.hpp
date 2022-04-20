#ifndef STUDENT
#define STUDENT
#include <string>
using namespace std;
class Student
{
private:
    int identifier;
    string name;
    string surname;

public:
    Student(){};
    ~Student(){};
    void setIdentifier(int id);
    void setName(string name);
    void setSurname(string surname);
    int getIdentifier();
    string getName();
    string getSurname();
};

#endif // !STUDENT
