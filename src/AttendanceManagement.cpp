#include "../include/AttendanceManagement.hpp"

void AttendanceManagement::showAttendance()
{
    this->_attendaceRepository->readAttendents();
};
void AttendanceManagement::takeAttendance(Student *student, Course *course, string datetime, bool state)
{
    this->_attendaceRepository->saveAttendents(student, course, datetime, state);
};