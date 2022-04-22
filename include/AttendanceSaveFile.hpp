#include "./AttendanceRepository.hpp"
#include <fstream>
#include <iostream>

class AttendanceSaveFile : public AttendanceRepository
{
private:
    /* data */
public:
    AttendanceSaveFile() : AttendanceRepository(){};
    ~AttendanceSaveFile(){};
    void saveAttendents(Student *student, Course *course, string datetime, bool state);
    void readAttendents();
};
