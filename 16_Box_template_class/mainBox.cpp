#include "Box.cpp"


int main(void) {

    Box<int> box(100);
    Box<std::string> box_name("brian");

    
    box.setValue(1);
    std::cout <<box.getValue() << std::endl;
    std::cout <<box_name.getValue() << std::endl;

    return 0;   
}
