#include "Vector.hpp"
#include <iostream>

Vector::Vector(int capacity = 10) : size(0), data(nullptr)  {

    data = new int[capacity];

}

void Vector::print() const {
    std::cout << "[ ]";
    //print the element
    for(int i = 0 ; i < size; i++) {
        std::cout<< data[i] << " ";
    }
    std::cout << " ]\n";
}

void Vector::push_back(int val) {
    data[size] = val;
    size++;

}