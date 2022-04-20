#ifndef COURSE
#define COURSE
#include <string>
using namespace std;

class Course
{
private:
    int identifier;
    string name;

public:
    Course(){};
    ~Course(){};
    void setIdentifier(int id);
    void setName(string name);
    int getIdentifier();
    string getName();
};

#endif // ! COURSE
