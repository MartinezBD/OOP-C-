#include <iostream>
#include <string>

struct Lecture{

    std::string title;
    int duration;
};

void printLecture(const Lecture& lec);
Lecture createLecture(const std::string& title, int duration);



int main(void) {
    Lecture oop;

    //initalize the number of the lecture object (varible)
    oop.title = "Classes and Objects";
    oop.duration = 50 * 60;

    std::cout << oop.title << "  " << oop.duration << std::endl;

    Lecture math = ("Graphs", 75 * 60);
    printLecture(math);

    return 0;
}

void printLecture(const Lecture& lec){

    std::cout << "Title: \t\t" << lec.title << std::endl;
    std::cout << "Duration: \t\t" << lec.duration / 60 << "Minutes" << std::endl;
    std::cout << " and " << lec.duration % 60 << "Seconds" << std::endl;

}

Lecture createLecture(const std::string& title, int minutes){

    //Create a lecture object

    Lecture lecture;
    lecture.title = title;
    lecture.duration = minutes * 60;

    return lecture;


}