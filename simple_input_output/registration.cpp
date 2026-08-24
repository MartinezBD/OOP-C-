#include <iostream>

namespace student {
    int id = 8734;
}

namespace course {
    int id = 1209;
}

int main(void){

    std::cout << "Enter Student ID: ";
    std::cin >> student::id;
    std::cout << "Enter course ID: ";
    std::cin >> student::id;

    std::cout << "\n----Registration Info----\n";
    std::cout << "Student ID: " << student::id << std::endl;
    std::cout << "Course ID: " << course::id << std::endl;
    
}