:: Compilo c+odigo objeto
g++ -Wall -std=c++11 -c .\src\Student.cpp 
g++ -Wall -std=c++11 -c .\src\Course.cpp
g++ -Wall -std=c++11 -c .\src\attendanceManagement.cpp
g++ -Wall -std=c++11 -c main.cpp 

:: Compilo el Binario
g++ Student.o Course.o attendanceManagement.o main.o -o attendance_management.exe

:: Limpio los códigos objeto
DEL .\*.o