
#include <string>
#include <fstream>
#include <iostream>
#include "./Student.hpp"
#include "./Course.hpp"
class AttendanceManagement
{
private:
public:
    AttendanceManagement(){};
    ~AttendanceManagement(){};
    void showAttendance();
    void takeAttendance(Student *student, Course *course, string datetime, bool state);
};