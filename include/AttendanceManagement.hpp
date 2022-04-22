
#include <string>
#include <fstream>
#include <iostream>
#include "./Student.hpp"
#include "./Course.hpp"
#include "./AttendanceRepository.hpp"
class AttendanceManagement
{
private:
    AttendanceRepository *_attendaceRepository;

public:
    AttendanceManagement(AttendanceRepository *attendaceRepository)
    {
        this->_attendaceRepository = attendaceRepository;
    };
    ~AttendanceManagement(){};
    void showAttendance();
    void takeAttendance(Student *student, Course *course, string datetime, bool state);
};