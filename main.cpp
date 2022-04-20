#include <iostream>
#include "./include/Student.hpp"
#include "./include/Course.hpp"
#include "./include/AttendanceManagement.hpp"

using namespace std;

int main()
{
    Student *student = new Student();
    student->setName("Alan");
    Course *course = new Course();
    course->setIdentifier(1);
    course->setName("Algebra");
    AttendanceManagement *attendanceManagement = new AttendanceManagement();
    attendanceManagement->takeAttendance(student, course, "20-04-22", true);
    attendanceManagement->showAttendance();
    delete student;
    delete course;
    delete attendanceManagement;
    int a;
    cin >> a;
    return 0;
}