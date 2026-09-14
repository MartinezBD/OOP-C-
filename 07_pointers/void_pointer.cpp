#include <iostream>

int main(void) {
    int num = 42;
    double speed = 65.3;

    void* ptr = nullptr; //define a void pointer

    ptr = &num; //ptr points to num

    std::cout << "int value void pointer " << *(static_cast<int*>(ptr)) << std::endl;


    ptr = &speed;
    

    return 0;
}