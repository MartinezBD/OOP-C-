#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
public:
    Vector(int capacity = 10);

    void push_back(int val);

    void print() const;


private:
    int* data;
    int  size;
    int capacity; 
};

#endif