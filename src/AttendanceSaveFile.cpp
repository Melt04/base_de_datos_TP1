#include "../include/AttendanceSaveFile.hpp"

void AttendanceSaveFile::saveAttendents(Student *student, Course *course, string datetime, bool state)
{
    std::ofstream attendentFile;
    attendentFile.open("./attendance.csv", ios_base::out | ios_base::in);
    if (attendentFile.is_open())
    {
        attendentFile.close();
        attendentFile.open("./attendance.csv", std::ios_base::app);
        attendentFile << student->getName() << ",";
        attendentFile << course->getName() << ",";
        attendentFile << datetime << ",";
        attendentFile << state << endl;
        attendentFile.close();
    }
    else
    {
        attendentFile.open("./attendance.csv");
        attendentFile << "Nombre"
                      << ",";
        attendentFile << "Curso"
                      << ",";
        attendentFile << "Fecha"
                      << ",";
        attendentFile << "Estado"
                      << "," << endl;
        attendentFile << student->getName() << ",";
        attendentFile << course->getName() << ",";
        attendentFile << datetime << ",";
        attendentFile << state << endl;
        attendentFile.close();
    }
}

void AttendanceSaveFile::readAttendents()
{
    std::ifstream attendentFile("./attendance.csv");
    string row;

    while ((attendentFile >> row))
    {
        cout << row << endl;
    }
}