#include "Student.hpp"
#include <iostream>

//Intialize static property (Required!!!)
double Student::required_gpa = 2.5;


Student::Student(const std::string& n , double st_gpa) :name(n), gpa(st_gpa) {

}
bool Student::canGraduate() const {

    return gpa >= required_gpa;

}
void Student::printStudentInfo() const {
    std::cout << "Name: " << name << " | GPA: " << gpa << std::endl;
    std::cout << " | Can graduate:  " << (canGraduate() ? "Yes" : "No") << std::endl;

}