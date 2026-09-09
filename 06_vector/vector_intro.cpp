#include <iostream>
#include <vector>

void print(const std::vector<int>& v);

void print_backwards(const std::vector<int>& v);

int main(void){
    //create a vector
    std::vector<int> v; //empty vector (dynamic array) of integers

    //create and initalize
    std::vector<int> v2 {1,2,3,10,5,6};

    print(v2);

    //create and provide the size and default value
    std::vector<int> v3{10,1};
    print(v3);   


    //copy from another vector

    std::vector<int> v4{v2};
    print(v4);




    return 0;
}

void print(const std::vector<int>& v) {
    for(int i = 0; i < v.size(); i++){
        std::cout << v.at(i) << " ";

    }



}