#ifndef ATTENDACE_REPOSITORY
#define ATTENDACE_REPOSITORY
#include "./Student.hpp"
#include "./Course.hpp"
class AttendanceRepository
{
private:
    /* data */
public:
    AttendanceRepository(){};
    virtual ~AttendanceRepository(){};
    void virtual saveAttendents(Student *student, Course *course, string datetime, bool state) = 0;
    void virtual readAttendents() = 0;
};

#endif // DEBUG
