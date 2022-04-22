#include <iostream>
#include "./include/Student.hpp"
#include "./include/Course.hpp"
#include "./include/AttendanceSaveFile.hpp"
#include "./include/AttendanceManagement.hpp"

using namespace std;

int main()
{
    Student *student = new Student();
    AttendanceSaveFile *saveToFile = new AttendanceSaveFile();
    student->setName("Alan");
    Course *course = new Course();
    course->setIdentifier(1);
    course->setName("Algebra");
    AttendanceManagement *attendanceManagement = new AttendanceManagement(saveToFile);
    attendanceManagement->takeAttendance(student, course, "20-04-22", true);
    attendanceManagement->showAttendance();

    delete student;
    delete course;
    delete attendanceManagement;
    delete saveToFile;
    int a;
    cin >> a;
    return 0;
}