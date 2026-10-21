#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>
#include <string>

// Template class

template <typename T>
class Box {
    public:
    Box(const T& v);
    //implement the getter and setting
    void setValue(const T& v);
    

    const T& getValue() const;
    
    private:
    T value;


};


#endif
